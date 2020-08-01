#ifndef MARSY_IPARSER_H
#define MARSY_IPARSER_H

#include <string>
#include <vector>

#include "../Libraries/JSON/json.hpp"

#include "Queries/QueryParser.h"
#include "../Models/Queries/Response/QueryResponse.h"
#include "../Exceptions/JsonException.h"

using json = nlohmann::json;

namespace Marsy
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
            try
            {
                T obj = parseOne(input);
                return obj;
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            }
        }

        T parseObject(const std::string &input)
        {
            try
            {
                json j = json::parse(input);
                return parseObject(j);
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            }
        }

        std::vector<T> parseVector(json &input)
        {
            try
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
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            }
        }

        std::vector<T> parseVector(const std::string &input)
        {
            try
            {
                json j = json::parse(input);
                return parseVector(j);
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            } 
        }

        QueryResponse<T> parseQuery(const std::string &input)
        {
            try
            {
                QueryResponse<T> response;
                QueryParser queryParser;
                json j = json::parse(input);            
                response.docs = parseVector(j[strDocs]);
                response.queryParameters = queryParser.parseResponse(j);
                return response;
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            } 
        }
    protected:
        virtual T parseOne(const json &input) = 0;
    };
}

#endif