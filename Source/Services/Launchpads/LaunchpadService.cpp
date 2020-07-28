#include "LaunchpadService.h"

namespace Marsy::Services::Launchpad
{
    LaunchpadService::LaunchpadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<LaunchpadModel> LaunchpadService::getLaunchpad(std::string id)
    {
        return getObject(apiLaunchpadsUrl + "/" + id);
    }

    ServiceVectorResponse<LaunchpadModel> LaunchpadService::getLaunchpadVector()
    {
        return getVector(apiLaunchpadsUrl);
    }
}