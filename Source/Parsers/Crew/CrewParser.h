#ifndef MARSY_CREW_CREWPARSER_H
#define MARSY_CREW_CREWPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Crew/CrewModel.h"
#include "../../Const/Crew/CrewConst.h"

using json = nlohmann::json;
using Marsy::Models::Crew::CrewModel;
using Marsy::Models::Crew::CrewStatus;
using Marsy::Const::Crew::CrewConst;

namespace Marsy::Parsers::Crew
{
    class CrewParser : public Parser, public IParser<CrewModel>, private CrewConst
    {
    public:
        CrewParser();
    protected:
        CrewModel parseOne(const json &input) override;
    private:
        std::optional<CrewStatus> parseCrewStatus(const json &input, const std::string &name);
    };
}

#endif