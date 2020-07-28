#include "CoreService.h"

namespace Marsy::Services::Core
{
    CoreService::CoreService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<CoreModel> CoreService::getCore(std::string id)
    {
        return getObject(apiCoresUrl + "/" + id);
    }

    ServiceVectorResponse<CoreModel> CoreService::getCoreVector()
    {
        return getVector(apiCoresUrl);
    }
}