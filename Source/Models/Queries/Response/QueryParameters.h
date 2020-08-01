#ifndef MARSY_QUERIES_QUERYPARAMETERS_H
#define MARSY_QUERIES_QUERYPARAMETERS_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy
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
        std::optional<int> prevPage;
        std::optional<int> nextPage;
    };
}

#endif