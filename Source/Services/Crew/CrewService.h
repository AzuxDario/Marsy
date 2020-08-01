#ifndef MARSY_CREW_CREWSERVICE_H
#define MARSY_CREW_CREWSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Crew/CrewModel.h"
#include "../../Parsers/Crew/CrewParser.h"

using Marsy::IConnector;
using Marsy::CrewModel;
using Marsy::CrewParser;

namespace Marsy
{
    class CrewService : public Service<CrewModel, CrewParser>
    {
    private:
        const std::string apiCrewUrl = apiBaseUrl + "/crew";
    public:
        CrewService(std::shared_ptr<IConnector> connector);
        ServiceResponse<CrewModel> getCrew(std::string id);
        ServiceVectorResponse<CrewModel> getCrewVector();
        ServiceQueryResponse<CrewModel> getCrewQuery(QueryRequest request);
    };
}

#endif