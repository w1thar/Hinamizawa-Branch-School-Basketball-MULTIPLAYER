cmake_minimum_required(VERSION 3.16)
project(hbasket LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release)
endif()

# ---- asset archive (built by a host tool so no scripting language is needed) ------------------
add_executable(pakgen tools/pakgen/pakgen.cpp)
file(GLOB_RECURSE HB_ASSET_FILES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/assets/*")
set(HB_PAK "${CMAKE_BINARY_DIR}/assets.pak")
add_custom_command(
    OUTPUT "${HB_PAK}"
    COMMAND pakgen "${CMAKE_SOURCE_DIR}/assets" "${HB_PAK}"
    DEPENDS pakgen ${HB_ASSET_FILES}
    COMMENT "Packing assets")
add_custom_target(assets DEPENDS "${HB_PAK}")

# ---- game ----------------------------------------------------------------------------------------
set(HB_SOURCES
    src/main.cpp
    src/core/d3dmath.cpp
    src/core/memfile.cpp
    src/core/pak.cpp
    src/engine/sound.cpp
    src/engine/textures.cpp
    src/render/gfx_gl.cpp
    src/game/ball.cpp
    src/game/game.cpp
    src/game/game_app.cpp
    src/game/hud.cpp
    src/game/input.cpp
    src/game/lang.cpp
    src/game/match.cpp
    src/game/mp_match.cpp
    src/game/online.cpp
    src/game/models.cpp
    src/game/player.cpp
    src/game/player_motions.cpp
    src/game/render.cpp
    src/game/settings.cpp
    src/game/states.cpp
)

if(WIN32)
    set(HB_ICON "${CMAKE_SOURCE_DIR}/src/platform/win32/app.ico")
    configure_file(src/platform/win32/hbasket.rc.in "${CMAKE_BINARY_DIR}/hbasket.rc" @ONLY)
    list(APPEND HB_SOURCES src/platform/win32/win32_platform.cpp src/platform/win32/win32_gamepad.cpp src/platform/win32/win32_net.cpp src/platform/win32/win32_dinput.cpp "${CMAKE_BINARY_DIR}/hbasket.rc")
    set_source_files_properties("${CMAKE_BINARY_DIR}/hbasket.rc" PROPERTIES OBJECT_DEPENDS "${HB_PAK}")
    add_executable(hbasket WIN32 ${HB_SOURCES})
    target_include_directories(hbasket PRIVATE src/platform/win32)
    target_link_libraries(hbasket PRIVATE opengl32 winmm gdi32 user32 shell32 setupapi ws2_32 advapi32 winhttp dinput8 dxguid)
else()
    message(FATAL_ERROR "Only the Win32 platform backend exists so far.")
endif()

add_dependencies(hbasket assets)
target_include_directories(hbasket PRIVATE src third_party)
if(MSVC)
    target_compile_options(hbasket PRIVATE /utf-8 /W3)
    target_compile_definitions(hbasket PRIVATE _CRT_SECURE_NO_WARNINGS NOMINMAX)
    set_property(TARGET hbasket PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else()
    target_compile_options(hbasket PRIVATE -Wall -Wno-unused-variable -finput-charset=UTF-8 -fexec-charset=UTF-8)
    target_link_options(hbasket PRIVATE -static -static-libgcc -static-libstdc++)
endif()
