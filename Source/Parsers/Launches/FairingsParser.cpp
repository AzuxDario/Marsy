#include "FairingsParser.h"

namespace Marsy
{
    FairingsParser::FairingsParser()
    {

    }

    FairingsModel FairingsParser::parseFairings(const json &input)
    {
        FairingsModel fairings;
        fairings.reused = parseBoolNullable(input, strReused);
        fairings.recoveryAttempt = parseBoolNullable(input, strRecoveryAttempt);
        fairings.recovered = parseBoolNullable(input, strRecovered);
        fairings.ships = parseArrayOfStringNullable(input, strShips);

        return fairings;
    }
}
