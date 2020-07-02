#include "CoreParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    CoreParser::CoreParser()
    {

    }

    std::vector<Core> CoreParser::parseCoresVector(const json &input)
    {
        std::vector<Core> cores;

        if(input.is_array())
        {
            for (auto it = input.begin(); it != input.end(); ++it)
            {
                Core core;
                core.core = parseStringNullable(it.value(), strCore);
                core.flight = parseIntNullable(it.value(), strFlight);
                core.gridfins = parseBoolNullable(it.value(), strGridfins);
                core.legs = parseBoolNullable(it.value(), strLegs);
                core.reused = parseBoolNullable(it.value(), strReused);
                core.landingAttempt = parseBoolNullable(it.value(), strLandingAttempt);
                core.landingSuccess = parseBoolNullable(it.value(), strLandingSuccess);
                core.landingType = parseStringNullable(it.value(), strLandingType);
                core.landpad = parseStringNullable(it.value(), strLandpad);
                cores.push_back(core);
            }
        }

        return cores;
    }
}
