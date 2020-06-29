#ifndef MARSY_COMPANY_HEADQUARTERS_H
#define MARSY_COMPANY_HEADQUARTERS_H

#include <string>
#include <optional>

namespace Marsy::Models::CompanyModel
{
    struct Headquarters
    {
        std::optional<std::string> address;
        std::optional<std::string> city;
        std::optional<std::string> state;
    };
}

#endif