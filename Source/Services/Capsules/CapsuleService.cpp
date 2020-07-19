#include "CapsuleService.h"

namespace Marsy::Services::CapsuleService
{
    CapsuleService::CapsuleService(std::shared_ptr<IConnector> connector) : conn(connector)
    {
        
    }

    ServiceResponse<Capsule> CapsuleService::getCapsule(std::string id)
    {
        ServiceResponse<Capsule> capsule;
        ApiResponse response = conn->httpGet(apiBaseUrl + apiCapsulesUrl + "/" + id);
        capsule.status = response.status;
        if(response.status == ResponseStatus::ok)
        {
            CapsuleParser parser;
            try
            {
                capsule.object = parser.parseCapsule(response.payload.value());
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            }
        }

        return capsule;
    }

    ServiceVectorResponse<Capsule> CapsuleService::getCapsuleVector()
    {
        ServiceVectorResponse<Capsule> capsules;
        ApiResponse response = conn->httpGet(apiBaseUrl + apiCapsulesUrl);
        capsules.status = response.status;
        if(response.status == ResponseStatus::ok)
        {
            CapsuleParser parser;
            try
            {
                capsules.vector = parser.parseCapsuleVector(response.payload.value());
            }
            catch(const nlohmann::detail::exception& exception)
            {
                throw JsonException(exception);
            }
        }
        return capsules;
    }
}