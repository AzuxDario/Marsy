#include "CoreParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    CoreParser::CoreParser()
    {

    }

    std::vector<Core> CoreParser::parseCoresVector(const std::string &input)
    {
        std::vector<Core> cores;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                cores.push_back(parseObject(it.value()));
            }
        }

        return cores;
    }

    Core CoreParser::parseObject(const json &input)
    {
        Core core;
        core.core = parseStringNullable(input, strCore);
        core.flight = parseIntNullable(input, strFlight);
        core.gridfins = parseBoolNullable(input, strGridfins);
        core.legs = parseBoolNullable(input, strLegs);
        core.reused = parseBoolNullable(input, strReused);
        core.landingAttempt = parseBoolNullable(input, strLandingAttempt);
        core.landingSuccess = parseBoolNullable(input, strLandingSuccess);
        core.landingType = parseStringNullable(input, strLandingType);
        core.landpad = parseStringNullable(input, strLandpad);

        return core;
    }

}
