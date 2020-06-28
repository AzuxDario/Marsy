#include "CrewParser.h"

namespace Marsy::Parsers::CrewParser
{
    CrewParser::CrewParser()
    {

    }

    Crew CrewParser::parseCrew(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Crew> CrewParser::parseCrews(const std::string &input)
    {
        std::vector<Crew> crew;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                crew.push_back(parseObject(it.value()));
            }
        }

        return crew;
    }

    Crew CrewParser::parseObject(const json &input)
    {
        Crew crew;
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
        else if(status == strStatusRetried)
        {
            return CrewStatus::retried;
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
