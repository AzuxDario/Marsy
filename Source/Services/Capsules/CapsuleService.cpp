#include "CapsuleService.h"

namespace Marsy::Services::Capsule
{
    CapsuleService::CapsuleService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<CapsuleModel> CapsuleService::getCapsule(std::string id)
    {
        return getObject(apiCapsulesUrl + "/" + id);
    }

    ServiceVectorResponse<CapsuleModel> CapsuleService::getCapsuleVector()
    {
        return getVector(apiCapsulesUrl);
    }
}