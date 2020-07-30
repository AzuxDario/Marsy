#ifndef MARSY_PAYLOAD_PAYLOADPARSER_H
#define MARSY_PAYLOAD_PAYLOADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "DragonParser.h"
#include "../../Models/Payloads/PayloadModel.h"
#include "../../Models/Payloads/DragonModel.h"
#include "../../Const/Payloads/PayloadConst.h"

using json = nlohmann::json;
using Marsy::Models::Payload::PayloadModel;
using Marsy::Models::Payload::DragonModel;
using Marsy::Const::Payload::PayloadConst;

namespace Marsy::Parsers::Payload
{
    class PayloadParser : public Parser, public IParser<PayloadModel>, private PayloadConst
    {
    public:
        PayloadParser();
    protected:
        PayloadModel parseOne(const json &input) override;
    private:
        std::optional<DragonModel> parseDragon(const json &input, const std::string &name);
    };
}

#endif