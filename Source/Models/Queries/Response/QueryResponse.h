#ifndef MARSY_QUERIES_QUERYRESPONSE_H
#define MARSY_QUERIES_QUERYRESPONSE_H

#include <string>
#include <vector>
#include <optional>

#include "QueryParameters.h"

namespace Marsy::Models::Query
{
    template <class T>
    struct QueryResponse
    {
        std::vector<T> docs;
        QueryParameters queryParameters;
    };
}

#endif