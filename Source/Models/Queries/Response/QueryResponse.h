#ifndef MARSY_QUERIES_QUERYRESPONSE_H
#define MARSY_QUERIES_QUERYRESPONSE_H

#include <string>
#include <vector>
#include <optional>

namespace Marsy::Models::QueryModel
{
    template <class T>
    struct QueryResponse<T>
    {
        std::vector<T> docs;
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