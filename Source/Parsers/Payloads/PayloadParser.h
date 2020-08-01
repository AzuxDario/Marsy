#ifndef MARSY_PAYLOAD_PAYLOADPARSER_H
#define MARSY_PAYLOAD_PAYLOADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "PayloadDragonParser.h"
#include "../../Models/Payloads/PayloadModel.h"
#include "../../Models/Payloads/PayloadDragonModel.h"
#include "../../Const/Payloads/PayloadConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class PayloadParser : public Parser, public IParser<PayloadModel>, private PayloadConst
    {
    public:
        PayloadParser();
    protected:
        PayloadModel parseOne(const json &input) override;
    private:
        std::optional<PayloadDragonModel> parseDragon(const json &input, const std::string &name);
    };
}

#endif