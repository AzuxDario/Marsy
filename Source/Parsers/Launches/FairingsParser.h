#ifndef MARSY_LAUNCHES_FAIRINGSPARSER_H
#define MARSY_LAUNCHES_FAIRINGSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/FairingsModel.h"
#include "../../Const/Launches/FairingsConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class FairingsParser : public Parser, private FairingsConst
    {
    public:
        FairingsParser();
        FairingsModel parseFairings(const json &input);
    };
}

#endif