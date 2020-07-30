#ifndef MARSY_ROCKETS_SECONDSTAGEPARSER_H
#define MARSY_ROCKETS_SECONDSTAGEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "PayloadsParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/SecondStageModel.h"
#include "../../Models/Rockets/PayloadsModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Rockets/SecondStageConst.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::SecondStageModel;
using Marsy::Models::Rocket::PayloadsModel;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;
using Marsy::Const::Rocket::SecondStageConst;

namespace Marsy::Parsers::Rocket
{
    class SecondStageParser : public Parser, private SecondStageConst
    {
    public:
        SecondStageParser();
        SecondStageModel parseSecondStage(const json &input);
    private:
        std::optional<PayloadsModel> parsePayloads(const json &input, const std::string &name);
    };
}

#endif