#include "CrewService.h"

namespace Marsy::Services::CrewService
{
    CrewService::CrewService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Crew> CrewService::getCrew(std::string id)
    {
        return getObject(apiBaseUrl + apiCrewUrl + "/" + id);
    }

    ServiceVectorResponse<Crew> CrewService::getCrewVector()
    {
        return getVector(apiBaseUrl + apiCrewUrl);
    }
}