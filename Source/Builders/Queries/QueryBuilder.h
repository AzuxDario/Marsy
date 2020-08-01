#ifndef MARSY_BUILDERS_QUERYBUILDER_H
#define MARSY_BUILDERS_QUERYBUILDER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../../Models/Queries/Request/QueryRequest.h"

using json = nlohmann::json;
using Marsy::QueryRequest;

namespace Marsy
{
    class QueryBuilder
    {
    private:
        const std::string filterLess = "$lt";
        const std::string filterGreater = "$gt";
        const std::string filterIn = "$in";
    public:
        template <class T>
        void addLessThanFilter(QueryRequest& request, std::string fieldName, T limit)
        {
            request.query[fieldName][filterLess] = limit;
        }

        template <class T>
        void addGreaterThanFilter(QueryRequest& request, std::string fieldName, T limit)
        {
            request.query[fieldName][filterGreater] = limit;
        }

        template <class T>
        void addBetweenFilter(QueryRequest& request, std::string fieldName, T lowerLimit, T upperLimit)
        {
            addLessThanFilter(request, fieldName, lowerLimit);
            addGreaterThanFilter(request, fieldName, upperLimit);
        }

        template <class T>
        void addInFilter(QueryRequest& request, std::string fieldName, std::vector<T> limit)
        {
            request.query[fieldName][filterIn] = limit;
        }

        template <class T>
        void addEqualsFilter(QueryRequest& request, std::string fieldName, T value)
        {
            request.query[fieldName] = value;
        }
    };
}

#endif