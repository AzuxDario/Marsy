#ifndef MARSY_QUERIES_QUERYRESPONSE_H
#define MARSY_QUERIES_QUERYRESPONSE_H

#include <string>
#include <vector>
#include <optional>

#include "QueryParameters.h"

namespace Marsy::Models::QueryModel
{
    template <class T>
    struct QueryResponse<T>
    {
        std::vector<T> docs;
        QueryParameters queryParameters;
    };
}

#endif