#include "CoreService.h"

namespace Marsy::Services::CoreService
{
    CoreService::CoreService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Core> CoreService::getCore(std::string id)
    {
        return getObject(apiBaseUrl + apiCoresUrl + "/" + id);
    }

    ServiceVectorResponse<Core> CoreService::getCoreVector()
    {
        return getVector(apiBaseUrl + apiCoresUrl);
    }
}