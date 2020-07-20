#include "CapsuleService.h"

namespace Marsy::Services::CapsuleService
{
    CapsuleService::CapsuleService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Capsule> CapsuleService::getCapsule(std::string id)
    {
        return getObject(apiCapsulesUrl + "/" + id);
    }

    ServiceVectorResponse<Capsule> CapsuleService::getCapsuleVector()
    {
        return getVector(apiCapsulesUrl);
    }
}