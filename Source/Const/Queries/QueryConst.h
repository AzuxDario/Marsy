#ifndef MARSY_QUERIES_QUERYCONST_H
#define MARSY_QUERIES_QUERYCONST_H

#include <string>

namespace Marsy
{
    struct QueryConst
    {
        const std::string strTotalDocs = "totalDocs";
        const std::string strOffset = "offset";
        const std::string strLimit = "limit";
        const std::string strTotalPage = "totalPages";
        const std::string strPage = "page";
        const std::string strPagingCounter = "pagingCounter";
        const std::string strHasPrevPage = "hasPrevPage";
        const std::string strHasNextPage = "hasNextPage";
        const std::string strPrevPage = "prevPage";
        const std::string strNextPage = "nextPage";
        const std::string strRequestQuery = "query";
        const std::string strRequestOptions = "options";
        const std::string strRequestSelect = "select";
        const std::string strRequestSort = "sort";
        const std::string strRequestOffset = "offset";
        const std::string strRequestPage = "page";
        const std::string strRequestLimit = "limit";
        const std::string strRequestPagination = "pagination";
        const std::string strRequestPopulate = "populate";
    };
}

#endif