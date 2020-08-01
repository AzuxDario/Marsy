#ifndef MARSY_DRAGON_PAYLOADDRAGONPARSER_H
#define MARSY_DRAGON_PAYLOADDRAGONPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Payloads/PayloadDragonModel.h"
#include "../../Const/Payloads/PayloadDragonConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class PayloadDragonParser : public Parser, private PayloadDragonConst
    {
    public:
        PayloadDragonParser();
        PayloadDragonModel parseDragon(const json &input);
    };
}

#endif