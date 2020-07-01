#ifndef MARSY_ROCKETS_PAYLOADSPARSER_H
#define MARSY_ROCKETS_PAYLOADSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/SizeInfoParser.h"
#include "../../Models/Rockets/Payloads.h"
#include "../../Models/Common/SizeInfo.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::Payloads;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Parsers::CommonParser::SizeInfoParser;

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
        Payloads parsePayloads(const std::string &input);
    private:
        Payloads parseObject(const json &input);
        std::optional<SizeInfo> parseSizeInfo(const json &input, const std::string &name);
    };
}

#endif