#ifndef MARSY_QUERIES_QUERYREQUEST_H
#define MARSY_QUERIES_QUERYREQUEST_H

#include <string>
#include <vector>
#include <optional>

#include "../../../Libraries/JSON/json.hpp"

#include "QueryOptions.h"

using json = nlohmann::json;

namespace Marsy
{
    struct QueryRequest
    {
        json query = json::object();
        QueryOptions options;
    };
}

#endif