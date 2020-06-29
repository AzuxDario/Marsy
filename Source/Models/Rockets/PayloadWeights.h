#ifndef MARSY_ROCKETS_PAYLOADWEIGHTS_H
#define MARSY_ROCKETS_PAYLOADWEIGHTS_H

#include <string>
#include <optional>

namespace Marsy::Models::Rockets
{
    struct PayloadWeights
    {
        std::optional<std::string> id;
        std::optional<std::string> name;
        std::optional<double> kilograms;
        std::optional<double> pounds;
    };
}

#endif