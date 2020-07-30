#ifndef MARSY_QUERIES_QUERYOPTIONS_H
#define MARSY_QUERIES_QUERYOPTIONS_H

#include <string>
#include <vector>
#include <optional>

#include "../../../Libraries/JSON/json.hpp"

using json = nlohmann::json;

namespace Marsy::Models::Query
{
    struct QueryOptions
    {
        std::optional<json> select;
        std::optional<json> sort;
        std::optional<int> offset;
        std::optional<int> page;
        std::optional<int> limit;
        std::optional<bool> pagination;
        std::optional<json> populate;
    };
}

#endif