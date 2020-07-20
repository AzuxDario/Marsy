#ifndef MARSY_SHIPS_SHIPSERVICE_H
#define MARSY_SHIPS_SHIPSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Ships/Ship.h"
#include "../../Parsers/Ships/ShipParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::ShipModel::Ship;
using Marsy::Parsers::ShipParser::ShipParser;

namespace Marsy::Services::ShipService
{
    class ShipService : public Service<Ship, ShipParser>
    {
    private:
        const std::string apiShipsUrl = apiBaseUrl + "/ships";
    public:
        ShipService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Ship> getShip(std::string id);
        ServiceVectorResponse<Ship> getShipVector();
    };
}

#endif