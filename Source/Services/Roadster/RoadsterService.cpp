#include "RoadsterService.h"

namespace Marsy
{
    RoadsterService::RoadsterService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<RoadsterModel> RoadsterService::getRoadster()
    {
        return getObject(apiRoadsterUrl);
    }
}