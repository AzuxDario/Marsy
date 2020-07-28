#include "QueryParser.h"

namespace Marsy::Parsers::Query
{
    QueryParser::QueryParser()
    {

    }

    QueryParameters QueryParser::parseResponse(const json &input)
    {
        return parseOne(input);
    }

    QueryParameters QueryParser::parseResponse(const std::string &input)
    {
        json j = json::parse(input);
        return parseResponse(j);
    }

    std::string QueryParser::parseRequest(const QueryRequest &input)
    {
        json jBase, jOptions;
        jBase[strRequestQuery] = input.query;
        if(input.options.select.has_value() == true)
        {
            jOptions[strRequestSelect] = input.options.select.value();
        }
        if(input.options.sort.has_value() == true)
        {
            jOptions[strRequestSort] = input.options.sort.value();
        }
        if(input.options.offset.has_value() == true)
        {
            jOptions[strRequestOffset] = input.options.offset.value();
        }
        if(input.options.page.has_value() == true)
        {
            jOptions[strRequestPage] = input.options.page.value();
        }
        if(input.options.limit.has_value() == true)
        {
            jOptions[strRequestLimit] = input.options.limit.value();
        }
        if(input.options.pagination.has_value() == true)
        {
            jOptions[strRequestPagination] = input.options.pagination.value();
        }
        if(input.options.populate.has_value() == true)
        {
            jOptions[strRequestPopulate] = input.options.populate.value();
        }
        jBase[strRequestOptions] = jOptions;
        return jBase.dump();
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
