#ifndef MARSY_SERVICE_H
#define MARSY_SERVICE_H

#include <string>
#include <memory>

#include "Response/Response.h"
#include "../Connection/Interface/IConnector.h"
#include "../Exceptions/JsonException.h"
#include "../Models/Queries/Request/QueryRequest.h"
#include "../Parsers/Queries/QueryParser.h"

using Marsy::Connection::IConnector;
using Marsy::Connection::ApiResponse;
using Marsy::Connection::ResponseStatus;
using Marsy::Models::Query::QueryRequest;
using Marsy::Parsers::Query::QueryParser;

namespace Marsy::Services
{
    template <class T, class U>
    class Service
    {
    protected:
        const std::string apiBaseUrl = "https://api.spacexdata.com/v4";
        const std::string apiQuery = "/query";
        std::shared_ptr<IConnector> conn;
    public:
        Service(std::shared_ptr<IConnector> connector) : conn(connector) {}
    protected:
        ServiceResponse<T> getObject(std::string url)
        {
            ServiceResponse<T> responseObject;
            ApiResponse response = conn->httpGet(url);
            responseObject.status = response.status;
            if(response.status == ResponseStatus::ok)
            {
                U parser;
                responseObject.object = parser.parseObject(response.payload.value());
            }

            return responseObject;
        }

        ServiceVectorResponse<T> getVector(std::string url)
        {
            ServiceVectorResponse<T> responseVector;
            ApiResponse response = conn->httpGet(url);
            responseVector.status = response.status;
            if(response.status == ResponseStatus::ok)
            {
                U parser;
                responseVector.vector = parser.parseVector(response.payload.value());
            }
            return responseVector;
        }

        ServiceQueryResponse<T> getQuery(std::string url, QueryRequest request)
        {
            ServiceQueryResponse<T> responseQuery;
            QueryParser queryParser;
            std::string payload = queryParser.parseRequest(request);
            ApiResponse response = conn->httpPost(url, payload);
            if(response.status == ResponseStatus::ok)
            {
                U parser;
                responseQuery.query = parser.parseQuery(response.payload.value());
            }
            return responseQuery;
        }
    };
}

#endif