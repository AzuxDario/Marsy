#ifndef MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H
#define MARSY_ROCKETS_PAYLOADWEIGHTSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Rockets/PayloadWeightsModel.h"
#include "../../Const/Rockets/PayloadWeightsConst.h"

using json = nlohmann::json;
using Marsy::PayloadWeightsModel;
using Marsy::PayloadWeightsConst;

namespace Marsy
{
    class PayloadWeightsParser : public Parser, private PayloadWeightsConst
    {
    public:
        PayloadWeightsParser();
        std::vector<PayloadWeightsModel> parsePayloadWeightsVector(const json&input);
    };
}

#endif