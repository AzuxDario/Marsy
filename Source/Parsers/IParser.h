#ifndef MARSY_IPARSER_H
#define MARSY_IPARSER_H

#include <string>
#include <vector>

#include "../Libraries/JSON/json.hpp"

#include "Queries/QueryParser.h"
#include "../Models/Queries/Response/QueryResponse.h"

using json = nlohmann::json;
using Marsy::Parsers::Query::QueryParser;
using Marsy::Models::Query::QueryResponse;

namespace Marsy::Parsers
{
    template <class T>
    class IParser
    {
    private:
        const std::string strDocs = "docs";
    public:
        IParser() {};
        T parseObject(const json &input)
        {
            return parseOne(input);
        }

        T parseObject(const std::string &input)
        {
            json j = json::parse(input);
            return parseObject(j);
        }

        std::vector<T> parseVector(json &input)
        {
            std::vector<T> vec;

            if(input.is_array())
            {
                for (json::iterator it = input.begin(); it != input.end(); ++it)
                {
                    vec.push_back(parseOne(it.value()));
                }
            }

            return vec;
        }

        std::vector<T> parseVector(const std::string &input)
        {
            json j = json::parse(input);
            return parseVector(j);
        }

        QueryResponse<T> parseQuery(const std::string &input)
        {
            QueryResponse<T> response;
            QueryParser queryParser;
            json j = json::parse(input);            
            response.docs = parseVector(j[strDocs]);
            response.queryParameters = queryParser.parseResponse(j);
            return response;
        }
    protected:
        virtual T parseOne(const json &input) = 0;
    };
}

#endif