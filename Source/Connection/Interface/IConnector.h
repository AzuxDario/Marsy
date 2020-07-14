#ifndef MARSY_CONNECTION_ICONNECTOR_H
#define MARSY_CONNECTION_ICONNECTOR_H

#include <string>
#include <vector>
#include <optional>

#include "../Response/Response.h"

namespace Marsy::Connection
{
    class IConnector
    {
    public:
        virtual ApiResponse httpGet(std::string url) = 0;
    };
}

#endif