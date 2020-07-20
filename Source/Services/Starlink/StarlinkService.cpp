#include "StarlinkService.h"

namespace Marsy::Services::StarlinkService
{
    StarlinkService::StarlinkService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Starlink> StarlinkService::getStarlink(std::string id)
    {
        return getObject(apiStarlinkUrl + "/" + id);
    }

    ServiceVectorResponse<Starlink> StarlinkService::getStarlinkVector()
    {
        return getVector(apiStarlinkUrl);
    }
}