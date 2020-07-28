#ifndef MARSY_QUERIES_QUERYPARSER_H
#define MARSY_QUERIES_QUERYPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Queries/Request/QueryRequest.h"
#include "../../Models/Queries/Response/QueryParameters.h"

using json = nlohmann::json;
using Marsy::Models::Query::QueryRequest;
using Marsy::Models::Query::QueryParameters;

namespace Marsy::Parsers::Query
{
    class QueryParser : public Parser
    {
    private:
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
    public:
        QueryParser();
        QueryParameters parseResponse(const json &input);
        QueryParameters parseResponse(const std::string &input);
        std::string parseRequest(const QueryRequest &input);
    protected:
        QueryParameters parseOne(const json &input);
    };
}

#endif