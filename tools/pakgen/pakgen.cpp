// Build-time tool: packs a directory tree into the HBPK archive format read by src/core/pak.cpp.
// usage: pakgen <assets dir> <output.pak>
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

static void put32(std::vector<uint8_t> &v, uint32_t x)
{
    for (int i = 0; i < 4; i++) v.push_back((uint8_t)(x >> (8 * i)));
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "usage: pakgen <assets dir> <output.pak>\n");
        return 1;
    }
    fs::path root(argv[1]);
    struct File { std::string name; std::vector<uint8_t> data; };
    std::vector<File> files;
    for (auto &e : fs::recursive_directory_iterator(root)) {
        if (!e.is_regular_file()) continue;
        std::string name = fs::relative(e.path(), root).generic_string();
        std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return (char)std::tolower(c); });
        std::ifstream in(e.path(), std::ios::binary);
        File f{name, std::vector<uint8_t>((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>())};
        files.push_back(std::move(f));
    }
    std::sort(files.begin(), files.end(), [](const File &a, const File &b) { return a.name < b.name; });

    std::vector<uint8_t> header = {'H', 'B', 'P', 'K'};
    put32(header, (uint32_t)files.size());
    size_t headerSize = header.size();
    for (auto &f : files) headerSize += 4 + f.name.size() + 8;
    uint32_t off = (uint32_t)headerSize;
    for (auto &f : files) {
        put32(header, (uint32_t)f.name.size());
        header.insert(header.end(), f.name.begin(), f.name.end());
        put32(header, off);
        put32(header, (uint32_t)f.data.size());
        off += (uint32_t)f.data.size();
    }
    std::ofstream out(argv[2], std::ios::binary);
    out.write((const char *)header.data(), header.size());
    for (auto &f : files) out.write((const char *)f.data.data(), f.data.size());
    printf("pakgen: %zu files, %u bytes -> %s\n", files.size(), off, argv[2]);
    return out ? 0 : 1;
}
