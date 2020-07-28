#ifndef MARSY_ROADSTER_ROADSTERSERVICE_H
#define MARSY_ROADSTER_ROADSTERSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Roadster/RoadsterModel.h"
#include "../../Parsers/Roadster/RoadsterParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Roadster::RoadsterModel;
using Marsy::Parsers::Roadster::RoadsterParser;

namespace Marsy::Services::Roadster
{
    class RoadsterService : public Service<RoadsterModel, RoadsterParser>
    {
    private:
        const std::string apiRoadsterUrl = apiBaseUrl + "/roadster";
    public:
        RoadsterService(std::shared_ptr<IConnector> connector);
        ServiceResponse<RoadsterModel> getRoadster();
    };
}

#endif