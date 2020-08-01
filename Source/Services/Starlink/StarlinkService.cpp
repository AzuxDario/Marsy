#include "StarlinkService.h"

namespace Marsy
{
    StarlinkService::StarlinkService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<StarlinkModel> StarlinkService::getStarlink(std::string id)
    {
        return getObject(apiStarlinkUrl + "/" + id);
    }

    ServiceVectorResponse<StarlinkModel> StarlinkService::getStarlinkVector()
    {
        return getVector(apiStarlinkUrl);
    }

    ServiceQueryResponse<StarlinkModel> StarlinkService::getStarlinkQuery(QueryRequest request)
    {
        return getQuery(apiStarlinkUrl + apiQueryUrl, request);
    }
}