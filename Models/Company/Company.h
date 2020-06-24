#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <optional>

#include "Headquarters.h"
#include "Links.h"

namespace Marsy
{
    struct Company
    {
        std::optional<std::string> name;
        std::optional<std::string> founder;
        std::optional<int> founded;
        std::optional<int> employees;
        std::optional<int> vehicles;
        std::optional<int> launchSites;
        std::optional<std::string> ceo;
        std::optional<std::string> cto;
        std::optional<std::string> coo;
        std::optional<std::string> ctoPropulsion;
        std::optional<long long> valuation;
        Headquarters headquarters;
        Links links;
        std::optional<std::string> summary;
        std::optional<std::vector> id;
    };
}
#endif