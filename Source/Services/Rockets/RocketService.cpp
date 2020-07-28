#include "RocketService.h"

namespace Marsy::Services::Rocket
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
}