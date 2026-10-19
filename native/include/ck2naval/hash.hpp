#pragma once

#include <array>
#include <cstdint>
#include <string>

namespace ck2naval {

using Sha256Digest = std::array<std::uint8_t, 32>;

bool ComputeFileSha256(const std::wstring& path, Sha256Digest& digest,
                       std::wstring& error) noexcept;
std::string Sha256Hex(const Sha256Digest& digest);

} // namespace ck2naval

