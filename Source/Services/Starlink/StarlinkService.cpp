#include "StarlinkService.h"

namespace Marsy::Services::Starlink
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
}