#ifndef MARSY_ROCKETS_ROCKETSERVICE_H
#define MARSY_ROCKETS_ROCKETSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Rockets/RocketModel.h"
#include "../../Parsers/Rockets/RocketParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Rocket::RocketModel;
using Marsy::Parsers::Rocket::RocketParser;

namespace Marsy::Services::Rocket
{
    class RocketService : public Service<RocketModel, RocketParser>
    {
    private:
        const std::string apiRocketsUrl = apiBaseUrl + "/rockets";
    public:
        RocketService(std::shared_ptr<IConnector> connector);
        ServiceResponse<RocketModel> getRocket(std::string id);
        ServiceVectorResponse<RocketModel> getRocketVector();
    };
}

#endif