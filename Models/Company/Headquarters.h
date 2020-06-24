#ifndef HEADQUARTERS_H
#define HEADQUARTERS_H

#include <string>
#include <optional>

namespace Marsy
{
    struct Headquarters
    {
        std::optional<std::string> address;
        std::optional<std::string> city;
        std::optional<std::string> state;
    };
}
#endif