#ifndef CONNECTION_RESPONSE_STATUS_H
#define CONNECTION_RESPONSE_STATUS_H

namespace Connection::Response
{
    enum class ResponseStatus {ok, badRequest, unauthorized, notFound, serverError, timeOut, otherError};
} 


#endif