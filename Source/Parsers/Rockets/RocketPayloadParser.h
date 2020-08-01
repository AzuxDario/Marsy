#ifndef MARSY_ROCKETS_ROCKETPAYLOADSPARSER_H
#define MARSY_ROCKETS_ROCKETPAYLOADSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/RocketPayloadModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Const/Rockets/RocketPayloadConst.h"

using json = nlohmann::json;
using Marsy::RocketPayloadModel;
using Marsy::SizeInfoModel;
using Marsy::CommonInfoParser;
using Marsy::RocketPayloadConst;

namespace Marsy
{
    class RocketPayloadParser : public Parser, private RocketPayloadConst
    {
    private:
        const std::string strOption1 = "option1";
        const std::string strCompositeFairing = "composite_fairing";
        const std::string strDiameter = "diameter";
    public:
        RocketPayloadParser();
        RocketPayloadModel parsePayloads(const json &input);
    };
}

#endif