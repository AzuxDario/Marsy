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
    public:
        QueryParser();
        QueryParameters parseObject(const json &input);
        QueryParameters parseObject(const std::string &input);
    protected:
        QueryParameters parseOne(const json &input);
    };
}

#endif