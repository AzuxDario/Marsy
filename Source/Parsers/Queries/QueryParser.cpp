#include "QueryParser.h"

namespace Marsy::Parsers::QueryParser
{
    QueryParser::QueryParser()
    {

    }

    QueryParameters QueryParser::parseObject(const json &input)
    {
        return parseOne(input);
    }

    QueryParameters QueryParser::parseObject(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    QueryParameters QueryParser::parseOne(const json &input)
    {
        QueryParameters queryParameters;
        queryParameters.totalDocs = parseInt(input, strTotalDocs);
        queryParameters.offset = parseInt(input, strOffset);
        queryParameters.limit = parseInt(input, strLimit);
        queryParameters.totalPages = parseInt(input, strTotalPage);
        queryParameters.page = parseInt(input, strPage);
        queryParameters.pagingCounter = parseInt(input, strPagingCounter);
        queryParameters.hasPrevPage = parseBool(input, strHasPrevPage);
        queryParameters.hasNextPage = parseBool(input, strHasNextPage);
        queryParameters.prevPage = parseBoolNullable(input, strPrevPage);
        queryParameters.nextPage = parseBoolNullable(input, strNextPage);

        return queryParameters;
    }
}
