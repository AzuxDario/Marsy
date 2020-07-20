#include "RoadsterService.h"

namespace Marsy::Services::RoadsterService
{
    RoadsterService::RoadsterService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Roadster> RoadsterService::getRoadster()
    {
        return getObject(apiRoadsterUrl);
    }
}