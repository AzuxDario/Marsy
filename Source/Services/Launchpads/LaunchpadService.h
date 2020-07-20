#ifndef MARSY_LAUNCHPADS_LAUNCHPADSERVICE_H
#define MARSY_LAUNCHPADS_LAUNCHPADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Launchpads/Launchpad.h"
#include "../../Parsers/Launchpads/LaunchpadParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::LaunchpadModel::Launchpad;
using Marsy::Parsers::LaunchpadParser::LaunchpadParser;

namespace Marsy::Services::LaunchpadService
{
    class LaunchpadService : public Service<Launchpad, LaunchpadParser>
    {
    private:
        const std::string apiLaunchpadsUrl = apiBaseUrl + "/launchpads";
    public:
        LaunchpadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Launchpad> getLaunchpad(std::string id);
        ServiceVectorResponse<Launchpad> getLaunchpadVector();
    };
}

#endif