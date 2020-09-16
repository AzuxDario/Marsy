#ifndef MARSY_LAUNCHES_FAILUREPARSER_H
#define MARSY_LAUNCHES_FAILUREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/FailureModel.h"
#include "../../Const/Launches/FailureConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class FailureParser : public Parser, private FailureConst
    {
    public:
        FailureParser();
        std::vector<FailureModel> parseFailureVector(const json &input);
    };
}

#endif