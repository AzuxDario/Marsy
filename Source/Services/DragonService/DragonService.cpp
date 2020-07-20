#include "DragonService.h"

namespace Marsy::Services::DragonService
{
    DragonService::DragonService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Dragon> DragonService::getDragon(std::string id)
    {
        return getObject(apiBaseUrl + apiDragonUrl + "/" + id);
    }

    ServiceVectorResponse<Dragon> DragonService::getDragonVector()
    {
        return getVector(apiBaseUrl + apiDragonUrl);
    }
}