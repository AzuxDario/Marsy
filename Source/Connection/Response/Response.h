#ifndef CONNECTION_RESPONSE_STATUS_H
#define CONNECTION_RESPONSE_STATUS_H

#include <string>
#include <optional>

namespace Connection
{
    enum class ResponseStatus {ok, badRequest, unauthorized, notFound, serverError, timeOut, otherError};

    struct ApiResponse
    {
        ResponseStatus status;
        std::optional<std::string> payload;
    };
} 


#endif