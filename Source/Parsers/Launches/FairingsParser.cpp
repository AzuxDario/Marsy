#include "FairingsParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    FairingsParser::FairingsParser()
    {

    }

    Fairings FairingsParser::parseFairings(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Fairings FairingsParser::parseObject(const json &input)
    {
        Fairings fairings;
        fairings.reused = parseBoolNullable(input, strReused);
        fairings.recoveryAttempt = parseBoolNullable(input, strRecoveryAttempt);
        fairings.recovered = parseBoolNullable(input, strRecovered);
        fairings.ships = parseArrayOfStringNullable(input, strShips);

        return fairings;
    }

}
