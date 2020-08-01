#ifndef MARSY_LAUNCHES_LAUNCHCOREPARSER_H
#define MARSY_LAUNCHES_LAUNCHCOREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/LaunchCoreModel.h"
#include "../../Const/Launches/LaunchCoreConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class LaunchCoreParser : public Parser, private LaunchCoreConst
    {
    public:
        LaunchCoreParser();
        std::vector<LaunchCoreModel> parseCoresVector(const json &input);
    };
}

#endif