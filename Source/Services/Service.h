#ifndef MARSY_SERVICE_H
#define MARSY_SERVICE_H

#include <string>

namespace Marsy::Services
{
    class Service
    {
    protected:
        const std::string apiBaseUrl = "https://api.spacexdata.com/v4";
    public:
        Service();
    };
}

#endif