#include "RocketService.h"

namespace Marsy
{
    RocketService::RocketService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<RocketModel> RocketService::getRocket(std::string id)
    {
        return getObject(apiRocketsUrl + "/" + id);
    }

    ServiceVectorResponse<RocketModel> RocketService::getRocketVector()
    {
        return getVector(apiRocketsUrl);
    }

    ServiceQueryResponse<RocketModel> RocketService::getRocketQuery(QueryRequest request)
    {
        return getQuery(apiRocketsUrl + apiQueryUrl, request);
    }
}