#include "LaunchService.h"

namespace Marsy::Services::LaunchService
{
    LaunchService::LaunchService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Launch> LaunchService::getLaunch(std::string id)
    {
        return getObject(apiLaunchesUrl + "/" + id);
    }

    ServiceVectorResponse<Launch> LaunchService::getLaunchVector()
    {
        return getVector(apiLaunchesUrl);
    }

    ServiceResponse<Launch> LaunchService::getLatestLaunch()
    {
        return getObject(apiLatestLaunchesUrl);
    }

    ServiceResponse<Launch> LaunchService::getNextLaunch()
    {
        return getObject(apiNextLaunchesUrl);
    }

    ServiceVectorResponse<Launch> LaunchService::getPastLaunchVector()
    {
        return getVector(apiPastLaunchesUrl);
    }

    ServiceVectorResponse<Launch> LaunchService::getUpcomingLaunchVector()
    {
        return getVector(apiUpcomingLaunchesUrl);
    }
}