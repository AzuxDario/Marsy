#ifndef MARSY_LAUNCHES_LAUNCHSERVICE_H
#define MARSY_LAUNCHES_LAUNCHSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Launches/Launch.h"
#include "../../Parsers/Launches/LaunchParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::LaunchModel::Launch;
using Marsy::Parsers::LaunchParser::LaunchParser;

namespace Marsy::Services::LaunchService
{
    class LaunchService : public Service<Launch, LaunchParser>
    {
    private:
        const std::string apiLaunchesUrl = apiBaseUrl + "/launches";
        const std::string apiLatestLaunchesUrl = apiLaunchesUrl + "/latest";
        const std::string apiNextLaunchesUrl = apiLaunchesUrl + "/next";
        const std::string apiPastLaunchesUrl = apiLaunchesUrl + "/past";
        const std::string apiUpcomingLaunchesUrl = apiLaunchesUrl + "/upcoming";
    public:
        LaunchService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Launch> getLaunch(std::string id);
        ServiceVectorResponse<Launch> getLaunchVector();
        ServiceResponse<Launch> getLatestLaunch();
        ServiceResponse<Launch> getNextLaunch();
        ServiceVectorResponse<Launch> getPastLaunchVector();
        ServiceVectorResponse<Launch> getUpcomingLaunchVector();
    };
}

#endif