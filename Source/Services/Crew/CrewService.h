#ifndef MARSY_CREW_CREWSERVICE_H
#define MARSY_CREW_CREWSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Crew/CrewModel.h"
#include "../../Parsers/Crew/CrewParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Crew::CrewModel;
using Marsy::Parsers::Crew::CrewParser;

namespace Marsy::Services::Crew
{
    class CrewService : public Service<CrewModel, CrewParser>
    {
    private:
        const std::string apiCrewUrl = apiBaseUrl + "/crew";
    public:
        CrewService(std::shared_ptr<IConnector> connector);
        ServiceResponse<CrewModel> getCrew(std::string id);
        ServiceVectorResponse<CrewModel> getCrewVector();
    };
}

#endif