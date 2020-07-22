#ifndef MARSY_QUERIES_QUERYOPTIONS_H
#define MARSY_QUERIES_QUERYOPTIONS_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::QueryModel
{
    struct QueryOptions
    {
        std::optional<std::string> select;
        std::optional<std::string> sort;
        std::optional<int> offset;
        std::optional<int> page;
        std::optional<int> limit;
        std::optional<bool> pagination;
        std::optional<std::vector<std::string>> populate;
}

#endif