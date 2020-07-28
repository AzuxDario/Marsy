#include "ShipService.h"

namespace Marsy::Services::Ship
{
    ShipService::ShipService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<ShipModel> ShipService::getShip(std::string id)
    {
        return getObject(apiShipsUrl + "/" + id);
    }

    ServiceVectorResponse<ShipModel> ShipService::getShipVector()
    {
        return getVector(apiShipsUrl);
    }
}