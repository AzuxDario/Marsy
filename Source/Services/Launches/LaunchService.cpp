#include "LaunchService.h"

namespace Marsy::Services::Launch
{
    LaunchService::LaunchService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<LaunchModel> LaunchService::getLaunch(std::string id)
    {
        return getObject(apiLaunchesUrl + "/" + id);
    }

    ServiceVectorResponse<LaunchModel> LaunchService::getLaunchVector()
    {
        return getVector(apiLaunchesUrl);
    }

    ServiceResponse<LaunchModel> LaunchService::getLatestLaunch()
    {
        return getObject(apiLatestLaunchesUrl);
    }

    ServiceResponse<LaunchModel> LaunchService::getNextLaunch()
    {
        return getObject(apiNextLaunchesUrl);
    }

    ServiceVectorResponse<LaunchModel> LaunchService::getPastLaunchVector()
    {
        return getVector(apiPastLaunchesUrl);
    }

    ServiceVectorResponse<LaunchModel> LaunchService::getUpcomingLaunchVector()
    {
        return getVector(apiUpcomingLaunchesUrl);
    }
}