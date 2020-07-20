#include "RocketService.h"

namespace Marsy::Services::RocketService
{
    RocketService::RocketService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Rocket> RocketService::getRocket(std::string id)
    {
        return getObject(apiRocketsUrl + "/" + id);
    }

    ServiceVectorResponse<Rocket> RocketService::getRocketVector()
    {
        return getVector(apiRocketsUrl);
    }
}