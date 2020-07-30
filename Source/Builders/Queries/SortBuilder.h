#ifndef MARSY_BUILDERS_SORTBUILDER_H
#define MARSY_BUILDERS_SORTBUILDER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../../Models/Queries/Request/QueryRequest.h"

using json = nlohmann::json;
using Marsy::Models::Query::QueryRequest;

namespace Marsy::Builders::Query
{
    enum class SortDirection {ASC, DESC};

    class SortBuilder
    {
    private:
        const std::string filterAsc = "asc";
        const std::string filterDesc = "desc";
    public:
        template <class T>
        void sort(QueryRequest& request, std::string fieldName, SortDirection direction)
        {
            if(!request.options.sort.has_value())
            {
                request.options.sort = json();
            }
            switch(direction)
            {
                case SortDirection::ASC:
                    request.options.sort.value()[fieldName] = filterAsc;
                    break;
                case SortDirection::DESC:
                    request.options.sort.value()[fieldName] = filterDesc;
                    break;
            }
        }
    };
}

#endif