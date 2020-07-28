#include "CrewParser.h"

namespace Marsy::Parsers::Crew
{
    CrewParser::CrewParser()
    {

    }

    CrewModel CrewParser::parseOne(const json &input)
    {
        CrewModel crew;
        crew.name = parseStringNullable(input, strName);
        crew.status = parseCrewStatus(input, strStatus);
        crew.agency = parseStringNullable(input, strAgency);
        crew.image = parseStringNullable(input, strImage);
        crew.wikipedia = parseStringNullable(input, strWikipedia);
        crew.launches = parseArrayOfStringNullable(input, strLaunches);
        crew.id = parseStringNullable(input, strId);

        return crew;
    }

    std::optional<CrewStatus> CrewParser::parseCrewStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == strStatusActive)
        {
            return CrewStatus::active;
        }
        else if(status == strStatusInactive)
        {
            return CrewStatus::inactive;
        }
        else if(status == strStatusRetired)
        {
            return CrewStatus::retired;
        }
        else if(status == strStatusUnknown)
        {
            return CrewStatus::unknown;
        }
        else
        {
            return std::nullopt;
        }
        
    }
}
