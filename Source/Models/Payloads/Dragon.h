#ifndef MARSY_PAYLOADS_DRAGON_H
#define MARSY_PAYLOADS_DRAGON_H

#include <string>
#include <optional>

namespace Marsy::Models::Payloads
{
    struct Dragon
    {
        std::optional<std::string> capsule = std::nullopt;
        std::optional<float> massReturnedKilograms = std::nullopt;
        std::optional<float> massReturnedPounds = std::nullopt;
        std::optional<int> flightTimeSeconds = std::nullopt;
        std::optional<std::string> manifest = std::nullopt;
        std::optional<bool> waterLanding = std::nullopt;
        std::optional<bool> landLanding = std::nullopt;
    };
}

#endif