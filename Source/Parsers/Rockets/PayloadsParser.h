#ifndef MARSY_ROCKETS_PAYLOADSPARSER_H
#define MARSY_ROCKETS_PAYLOADSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/Payloads.h"
#include "../../Models/Common/SizeInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::Payloads;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::RocketsParser
{
    class PayloadsParser : public Parser
    {
    private:
        const std::string strOption1 = "option1";
        const std::string strCompositeFairing = "composite_fairing";
        const std::string strDiameter = "diameter";
    public:
        PayloadsParser();
        Payloads parsePayloads(const json &input);
    };
}

#endif