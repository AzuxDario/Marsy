#ifndef MARSY_LAUNCHES_REDDIT_H
#define MARSY_LAUNCHES_REDDIT_H

#include <string>
#include <optional>

namespace Marsy::Models::Launches
{
    struct Reddit
    {
        std::optional<std::string> campaign = std::nullopt;
        std::optional<std::string> launch = std::nullopt;
        std::optional<std::string> media = std::nullopt;
        std::optional<std::string> recovery = std::nullopt;
    }; 
}

#endif