#include "LaunchpadService.h"

namespace Marsy
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

    ServiceQueryResponse<LaunchpadModel> LaunchpadService::getLaunchpadQuery(QueryRequest request)
    {
        return getQuery(apiLaunchpadsUrl + apiQueryUrl, request);
    }
}