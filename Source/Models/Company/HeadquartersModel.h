#ifndef MARSY_COMPANY_HEADQUARTERS_H
#define MARSY_COMPANY_HEADQUARTERS_H

#include <string>
#include <optional>

namespace Marsy
{
    struct HeadquartersModel
    {
        std::optional<std::string> address;
        std::optional<std::string> city;
        std::optional<std::string> state;
    };
}

#endif