#ifndef MARSY_LAUNCHES_LAUNCHSERVICE_H
#define MARSY_LAUNCHES_LAUNCHSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Launches/LaunchModel.h"
#include "../../Parsers/Launches/LaunchParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Launch::LaunchModel;
using Marsy::Parsers::Launch::LaunchParser;

namespace Marsy::Services::Launch
{
    class LaunchService : public Service<LaunchModel, LaunchParser>
    {
    private:
        const std::string apiLaunchesUrl = apiBaseUrl + "/launches";
        const std::string apiLatestLaunchesUrl = apiLaunchesUrl + "/latest";
        const std::string apiNextLaunchesUrl = apiLaunchesUrl + "/next";
        const std::string apiPastLaunchesUrl = apiLaunchesUrl + "/past";
        const std::string apiUpcomingLaunchesUrl = apiLaunchesUrl + "/upcoming";
    public:
        LaunchService(std::shared_ptr<IConnector> connector);
        ServiceResponse<LaunchModel> getLaunch(std::string id);
        ServiceVectorResponse<LaunchModel> getLaunchVector();
        ServiceResponse<LaunchModel> getLatestLaunch();
        ServiceResponse<LaunchModel> getNextLaunch();
        ServiceVectorResponse<LaunchModel> getPastLaunchVector();
        ServiceVectorResponse<LaunchModel> getUpcomingLaunchVector();
        ServiceQueryResponse<LaunchModel> getLaunchQuery(QueryRequest request);
    };
}

#endif