#ifndef MARSY_QUERIES_QUERYPARSER_H
#define MARSY_QUERIES_QUERYPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Queries/Request/QueryRequest.h"
#include "../../Models/Queries/Response/QueryParameters.h"
#include "../../Const/Queries/QueryConst.h"

using json = nlohmann::json;
using Marsy::Models::Query::QueryRequest;
using Marsy::Models::Query::QueryParameters;
using Marsy::Const::Query::QueryConst;

namespace Marsy::Parsers::Query
{
    class QueryParser : public Parser, private QueryConst
    {
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