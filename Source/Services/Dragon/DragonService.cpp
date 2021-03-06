#include "DragonService.h"

namespace Marsy
{
    DragonService::DragonService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<DragonModel> DragonService::getDragon(std::string id)
    {
        return getObject(apiDragonUrl + "/" + id);
    }

    ServiceVectorResponse<DragonModel> DragonService::getDragonVector()
    {
        return getVector(apiDragonUrl);
    }

    ServiceQueryResponse<DragonModel> DragonService::getDragonQuery(QueryRequest request)
    {
        return getQuery(apiDragonUrl + apiQueryUrl, request);
    }
}