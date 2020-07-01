#ifndef MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H
#define MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/PayloadWeights.h"

using json = nlohmann::json;
using Marsy::Models::RocketsModel::PayloadWeights;

namespace Marsy::Parsers::RocketsParser
{
    class PayloadWeightsParser : public Parser
    {
    private:
        const std::string strId = "id";
        const std::string strName = "name";
        const std::string strKg = "kg";
        const std::string strLb = "lb";
    public:
        PayloadWeightsParser();
        std::vector<PayloadWeights> parsePayloadWeightsVector(const std::string &input);
    private:
        PayloadWeights parseObject(const json &input);
    };
}

#endif