#ifndef MARSY_COMPANY_COMPANY_H
#define MARSY_COMPANY_COMPANY_H

#include <string>
#include <optional>

#include "HeadquartersModel.h"
#include "LinksModel.h"

namespace Marsy::Models::Company
{
    struct CompanyModel
    {
        std::optional<std::string> name;
        std::optional<std::string> founder;
        std::optional<int> founded;
        std::optional<int> employees;
        std::optional<int> vehicles;
        std::optional<int> launchSites;
        std::optional<int> testSites;
        std::optional<std::string> ceo;
        std::optional<std::string> cto;
        std::optional<std::string> coo;
        std::optional<std::string> ctoPropulsion;
        std::optional<long long> valuation;
        std::optional<HeadquartersModel> headquarters;
        std::optional<LinksModel> links;
        std::optional<std::string> summary;
        std::optional<std::string> id;
    };
}

#endif