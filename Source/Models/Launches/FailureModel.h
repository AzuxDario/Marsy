#ifndef MARSY_LAUNCHES_FAILURE_H
#define MARSY_LAUNCHES_FAILURE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
{
    struct FailureModel
    {
        std::optional<int> time;
        std::optional<int> altitude;
        std::optional<std::string> reason;
    };
}

#endif