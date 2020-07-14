#include "CapsuleService.h"

namespace Marsy::Services::CapsuleService
{
    CapsuleService::CapsuleService(std::shared_ptr<IConnector> connector) : conn(connector)
    {
        
    }

    ServiceResponse<Capsule> CapsuleService::getCapsule(std::string id)
    {
        ServiceResponse<Capsule> capsule;

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
            capsules.vector = parser.parseCapsuleVector(response.payload.value());
        }
        return capsules;
    }
}