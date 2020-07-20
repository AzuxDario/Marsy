#ifndef MARSY_ROADSTER_ROADSTERSERVICE_H
#define MARSY_ROADSTER_ROADSTERSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Roadster/Roadster.h"
#include "../../Parsers/Roadster/RoadsterParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::RoadsterModel::Roadster;
using Marsy::Parsers::RoadsterParser::RoadsterParser;

namespace Marsy::Services::RoadsterService
{
    class RoadsterService : public Service<Roadster, RoadsterParser>
    {
    private:
        const std::string apiRoadsterUrl = apiBaseUrl + "/roadster";
    public:
        RoadsterService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Roadster> getRoadster();
    };
}

#endif