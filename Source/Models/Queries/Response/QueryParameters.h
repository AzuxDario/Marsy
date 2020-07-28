#ifndef MARSY_QUERIES_QUERYPARAMETERS_H
#define MARSY_QUERIES_QUERYPARAMETERS_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::QueryModel
{
    struct QueryParameters
    {
        int totalDocs;
        int offset;
        int limit;
        int totalPages;
        int page;
        int pagingCounter;
        bool hasPrevPage;
        bool hasNextPage;
        std::optional<bool> prevPage;
        std::optional<bool> nextPage;
    };
}

#endif