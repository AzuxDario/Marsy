#ifndef MARSY_LAUNCHES_COREPARSER_H
#define MARSY_LAUNCHES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/CoreModel.h"
#include "../../Const/Launches/CoreConst.h"

using json = nlohmann::json;
using Marsy::Models::Launch::CoreModel;
using Marsy::Const::Launch::CoreConst;

namespace Marsy::Parsers::Launch
{
    class CoreParser : public Parser, private CoreConst
    {
    public:
        CoreParser();
        std::vector<CoreModel> parseCoresVector(const json &input);
    };
}

#endif