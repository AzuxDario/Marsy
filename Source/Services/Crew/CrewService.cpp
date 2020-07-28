#include "CrewService.h"

namespace Marsy::Services::Crew
{
    CrewService::CrewService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<CrewModel> CrewService::getCrew(std::string id)
    {
        return getObject(apiCrewUrl + "/" + id);
    }

    ServiceVectorResponse<CrewModel> CrewService::getCrewVector()
    {
        return getVector(apiCrewUrl);
    }

    ServiceQueryResponse<CrewModel> CrewService::getCrewQuery(QueryRequest request)
    {
        return getQuery(apiCrewUrl + apiQueryUrl, request);
    }
}