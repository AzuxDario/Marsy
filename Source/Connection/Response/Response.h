#ifndef MARSY_CONNECTION_RESPONSE_STATUS_H
#define MARSY_CONNECTION_RESPONSE_STATUS_H

#include <string>
#include <optional>

namespace Marsy
{
    enum class ResponseStatus {ok = 200, badRequest = 400, unauthorized = 401, notFound = 404, internalServerError = 500,
                               badGateway = 502, serviceUnavailable = 503, gatewayTimeout = 504, timeOut = 600, otherError = 700};

    struct ApiResponse
    {
        ResponseStatus status;
        std::optional<std::string> payload;
    };
} 


#endif