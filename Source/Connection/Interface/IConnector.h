#ifndef MARSY_CONNECTION_ICONNECTOR_H
#define MARSY_CONNECTION_ICONNECTOR_H

#include <string>
#include <vector>
#include <optional>

#include "../Response/Response.h"

namespace Marsy
{
    class IConnector
    {
    public:
        virtual ApiResponse httpGet(std::string url) = 0;
        virtual ApiResponse httpPost(std::string url, std::string payload) = 0;
    };
}

#endif