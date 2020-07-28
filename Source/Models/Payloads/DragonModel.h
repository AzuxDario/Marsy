#ifndef MARSY_PAYLOADS_DRAGON_H
#define MARSY_PAYLOADS_DRAGON_H

#include <string>
#include <optional>

namespace Marsy::Models::Payload
{
    struct DragonModel
    {
        std::optional<std::string> capsule = std::nullopt;
        std::optional<double> massReturnedKilograms = std::nullopt;
        std::optional<double> massReturnedPounds = std::nullopt;
        std::optional<int> flightTimeSeconds = std::nullopt;
        std::optional<std::string> manifest = std::nullopt;
        std::optional<bool> waterLanding = std::nullopt;
        std::optional<bool> landLanding = std::nullopt;
    };
}

#endif