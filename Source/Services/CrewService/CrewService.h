#ifndef MARSY_CREW_CREWSERVICE_H
#define MARSY_CREW_CREWSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Crew/Crew.h"
#include "../../Parsers/Crew/CrewParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::CrewModel::Crew;
using Marsy::Parsers::CrewParser::CrewParser;

namespace Marsy::Services::CrewService
{
    class CrewService : public Service<Crew, CrewParser>
    {
    private:
        const std::string apiCrewUrl = "/crew";
    public:
        CrewService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Crew> getCrew(std::string id);
        ServiceVectorResponse<Crew> getCrewVector();
    };
}

#endif