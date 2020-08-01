#ifndef MARSY_SHIPS_SHIPSERVICE_H
#define MARSY_SHIPS_SHIPSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Ships/ShipModel.h"
#include "../../Parsers/Ships/ShipParser.h"

using Marsy::IConnector;
using Marsy::ShipModel;
using Marsy::ShipParser;

namespace Marsy
{
    class ShipService : public Service<ShipModel, ShipParser>
    {
    private:
        const std::string apiShipsUrl = apiBaseUrl + "/ships";
    public:
        ShipService(std::shared_ptr<IConnector> connector);
        ServiceResponse<ShipModel> getShip(std::string id);
        ServiceVectorResponse<ShipModel> getShipVector();
        ServiceQueryResponse<ShipModel> getShipQuery(QueryRequest request);
    };
}

#endif