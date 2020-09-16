#include "FailureParser.h"

namespace Marsy
{
    FailureParser::FailureParser()
    {

    }

    std::vector<FailureModel> FailureParser::parseFailureVector(const json &input)
    {
        std::vector<FailureModel> failures;

        if(input.is_array())
        {
            for (auto it = input.begin(); it != input.end(); ++it)
            {
                FailureModel failure;
                failure.time = parseIntNullable(input, strTime);
                failure.altitude = parseIntNullable(input, strAltitude);
                failure.reason = parseStringNullable(input, strReason);
                failures.push_back(failure);
            }
        }
        return failures;
    }
}
