#ifndef MARSY_SERVICES_SERVICERESPONSE_H
#define MARSY_SERVICES_SERVICERESPONSE_H

#include <vector>
#include <optional>

#include "../../Connection/Response/Response.h"
#include "../../Models/Queries/Response/QueryResponse.h"

namespace Marsy
{
    template <class T>
    struct ServiceResponse
    {
        ResponseStatus status;
        T object; 
    };

    template <class T>
    struct ServiceVectorResponse
    {
        ResponseStatus status;
        std::vector<T> vector; 
    };

    template <class T>
    struct ServiceQueryResponse
    {
        ResponseStatus status;
        QueryResponse<T> query; 
    };
}

#endif