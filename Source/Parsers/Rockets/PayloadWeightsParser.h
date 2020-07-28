#ifndef MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H
#define MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/PayloadWeightsModel.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::PayloadWeightsModel;

namespace Marsy::Parsers::Rocket
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
        std::vector<PayloadWeightsModel> parsePayloadWeightsVector(const json&input);
    };
}

#endif