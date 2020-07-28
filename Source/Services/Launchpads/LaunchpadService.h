#ifndef MARSY_LAUNCHPADS_LAUNCHPADSERVICE_H
#define MARSY_LAUNCHPADS_LAUNCHPADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Launchpads/LaunchpadModel.h"
#include "../../Parsers/Launchpads/LaunchpadParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Launchpad::LaunchpadModel;
using Marsy::Parsers::Launchpad::LaunchpadParser;

namespace Marsy::Services::Launchpad
{
    class LaunchpadService : public Service<LaunchpadModel, LaunchpadParser>
    {
    private:
        const std::string apiLaunchpadsUrl = apiBaseUrl + "/launchpads";
    public:
        LaunchpadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<LaunchpadModel> getLaunchpad(std::string id);
        ServiceVectorResponse<LaunchpadModel> getLaunchpadVector();
        ServiceQueryResponse<LaunchpadModel> getLaunchpadQuery(QueryRequest request);
    };
}

#endif