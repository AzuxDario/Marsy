#include "CapsuleService.h"

namespace Marsy
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

    ServiceQueryResponse<CapsuleModel> CapsuleService::getCapsuleQuery(QueryRequest request)
    {
        return getQuery(apiCapsulesUrl + apiQueryUrl, request);
    }
}