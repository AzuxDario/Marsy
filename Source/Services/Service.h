#ifndef MARSY_SERVICE_H
#define MARSY_SERVICE_H

#include <string>
#include <memory>

#include "Response/Response.h"
#include "../Connection/Interface/IConnector.h"
#include "../Exceptions/JsonException.h"

using Marsy::Connection::IConnector;
using Marsy::Connection::ApiResponse;
using Marsy::Connection::ResponseStatus;
using Marsy::Exceptions::JsonException;

namespace Marsy::Services
{
    template <class T, class U>
    class Service
    {
    protected:
        const std::string apiBaseUrl = "https://api.spacexdata.com/v4";
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
                try
                {
                    responseObject.object = parser.parseObject(response.payload.value());
                }
                catch(const nlohmann::detail::exception& exception)
                {
                    throw JsonException(exception);
                }
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
                try
                {
                    responseVector.vector = parser.parseVector(response.payload.value());
                }
                catch(const nlohmann::detail::exception& exception)
                {
                    throw JsonException(exception);
                }
            }
            return responseVector;
        }

    };
}

#endif