#ifndef MARSY_SERVICE_H
#define MARSY_SERVICE_H

#include <string>
#include "Response/Response.h"
#include "../Connection/Interface/IConnector.h"
#include "../Exceptions/JsonException.h"

using Marsy::Connection::IConnector;
using Marsy::Connection::ApiResponse;
using Marsy::Connection::ResponseStatus;
using Marsy::Exceptions::JsonException;

namespace Marsy::Services
{
    class Service
    {
    protected:
        const std::string apiBaseUrl = "https://api.spacexdata.com/v4";
    public:
        Service(std::shared_ptr<IConnector> connector);
    protected:
        std::shared_ptr<IConnector> conn;

        template <class T, class U>
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
                    //TODO: make one functions name
                    //responseObject.object = parser.parseCapsule(response.payload.value());
                }
                catch(const nlohmann::detail::exception& exception)
                {
                    throw JsonException(exception);
                }
            }

            return responseObject;
        }
        
        template <class T, class U>
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
                    //TODO: make one functions name
                    //responseVector.vector = parser.parseCapsuleVector(response.payload.value());
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