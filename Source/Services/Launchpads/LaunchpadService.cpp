#include "LaunchpadService.h"

namespace Marsy::Services::LaunchpadService
{
    LaunchpadService::LaunchpadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Launchpad> LaunchpadService::getLaunchpad(std::string id)
    {
        return getObject(apiLaunchpadsUrl + "/" + id);
    }

    ServiceVectorResponse<Launchpad> LaunchpadService::getLaunchpadVector()
    {
        return getVector(apiLaunchpadsUrl);
    }
}