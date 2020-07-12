#ifndef CONNECTION_ICONNECTOR_H
#define CONNECTION_ICONNECTOR_H

#include <string>
#include <vector>
#include <optional>

#include "../Response/Response.h"

namespace Marsy::Connection
{
    class IConnector
    {
    public:
        ApiResponse httpGet(std::string url);
    };
}

#endif