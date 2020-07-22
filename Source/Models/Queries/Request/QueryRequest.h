#ifndef MARSY_QUERIES_QUERYREQUEST_H
#define MARSY_QUERIES_QUERYREQUEST_H

#include <string>
#include <vector>
#include <optional>

#include "QueryOptions.h"

namespace Marsy::Models::QueryModel
{
    struct QueryRequest
    {
        std::string query;
        QueryOptions options;
    };
}

#endif