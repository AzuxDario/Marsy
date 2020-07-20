#include "ShipService.h"

namespace Marsy::Services::ShipService
{
    ShipService::ShipService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Ship> ShipService::getShip(std::string id)
    {
        return getObject(apiShipsUrl + "/" + id);
    }

    ServiceVectorResponse<Ship> ShipService::getShipVector()
    {
        return getVector(apiShipsUrl);
    }
}