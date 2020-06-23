#ifndef COMPANY_H
#define COMPANY_H

#include <string>

#include "Headquarters.h"
#include "Links.h"

namespace Marsy
{
    struct Company
    {
        std::string name;
        std::string founder;
        int founded;
        int employees;
        int vehicles;
        int launchSites;
        std::string ceo;
        std::string cto;
        std::string coo;
        std::string ctoPropulsion;
        long long valuation;
        Headquarters headquarters;
        Links links;
        std::string summary;
    };
}
#endif