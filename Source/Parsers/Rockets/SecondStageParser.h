#ifndef MARSY_ROCKETS_SECONDSTAGEPARSER_H
#define MARSY_ROCKETS_SECONDSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "RocketPayloadParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/SecondStageModel.h"
#include "../../Models/Rockets/RocketPayloadModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Rockets/SecondStageConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class SecondStageParser : public Parser, private SecondStageConst
    {
    public:
        SecondStageParser();
        SecondStageModel parseSecondStage(const json &input);
    private:
        std::optional<RocketPayloadModel> parsePayloads(const json &input, const std::string &name);
    };
}

#endif