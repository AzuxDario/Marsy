#include "LaunchService.h"

namespace Marsy::Services::LaunchService
{
    LaunchService::LaunchService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Launch> LaunchService::getLaunch(std::string id)
    {
        return getObject(apiBaseUrl + apiLaunchesUrl + "/" + id);
    }

    ServiceVectorResponse<Launch> LaunchService::getLaunchVector()
    {
        return getVector(apiBaseUrl + apiLaunchesUrl);
    }

    ServiceResponse<Launch> LaunchService::getLatestLaunch()
    {
        return getObject(apiBaseUrl + apiLaunchesUrl +  apiLatestLaunchesUrl);
    }

    ServiceResponse<Launch> LaunchService::getNextLaunch()
    {
        return getObject(apiBaseUrl + apiLaunchesUrl + apiNextLaunchesUrl);
    }

    ServiceVectorResponse<Launch> LaunchService::getPastLaunchVector()
    {
        return getVector(apiBaseUrl + apiLaunchesUrl + apiPastLaunchesUrl);
    }

    ServiceVectorResponse<Launch> LaunchService::getUpcomingLaunchVector()
    {
        return getVector(apiBaseUrl + apiLaunchesUrl + apiUpcomingLaunchesUrl);
    }
}