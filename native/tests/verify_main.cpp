#include "ck2naval/version_guard.hpp"

#include <Windows.h>

#include <cstdio>
#include <string>

int wmain(const int argc, wchar_t** argv) {
    if (argc != 2) {
        std::fwprintf(stderr, L"usage: ck2_naval_verify <path-to-CK2game.exe>\n");
        return 2;
    }

    std::string report;
    const bool valid = ck2naval::VerifyFileTarget(argv[1], report);
    std::printf("%s: %s\n", valid ? "PASS" : "FAIL", report.c_str());
    return valid ? 0 : 1;
}

