// Replacement for the DirectX 7 SDK's D3DTextr texture manager: textures are registered under the
// exact name they were loaded with and looked up again by that name (case-insensitive).
#pragma once

#include "core/types.h"
#include "render/gfx.h"

bool D3DTextr_CreateTextureFromFile(const char *name, u32 stage = 0, u32 flags = 0);
gfx::Texture *D3DTextr_GetSurface(const char *name);
void D3DTextr_DestroyAll();
