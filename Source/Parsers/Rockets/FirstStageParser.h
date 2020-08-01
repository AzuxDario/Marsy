#ifndef MARSY_ROCKETS_FIRSTSTAGEPARSER_H
#define MARSY_ROCKETS_FIRSTSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/FirstStageModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Rockets/FirstStageConst.h"

using json = nlohmann::json;
using Marsy::FirstStageModel;
using Marsy::ThrustInfoModel;
using Marsy::CommonInfoParser;
using Marsy::FirstStageConst;

namespace Marsy
{
    class FirstStageParser : public Parser, private FirstStageConst
    {
    public:
        FirstStageParser();
        FirstStageModel parseFirstStage(const json &input);
    };
}

#endif