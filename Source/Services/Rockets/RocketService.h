#ifndef MARSY_ROCKETS_ROCKETSERVICE_H
#define MARSY_ROCKETS_ROCKETSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Rockets/Rocket.h"
#include "../../Parsers/Rockets/RocketParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::RocketsModel::Rocket;
using Marsy::Parsers::RocketsParser::RocketParser;

namespace Marsy::Services::RocketService
{
    class RocketService : public Service<Rocket, RocketParser>
    {
    private:
        const std::string apiRocketsUrl = apiBaseUrl + "/rockets";
    public:
        RocketService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Rocket> getRocket(std::string id);
        ServiceVectorResponse<Rocket> getRocketVector();
    };
}

#endif