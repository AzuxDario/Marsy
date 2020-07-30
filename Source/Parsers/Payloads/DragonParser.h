#ifndef MARSY_DRAGON_DRAGONPARSER_H
#define MARSY_DRAGON_DRAGONPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Payloads/DragonModel.h"
#include "../../Const/Payloads/DragonConst.h"

using json = nlohmann::json;
using Marsy::Models::Payload::DragonModel;
using Marsy::Const::Payload::DragonConst;

namespace Marsy::Parsers::Payload
{
    class DragonParser : public Parser, private DragonConst
    {
    public:
        DragonParser();
        DragonModel parseDragon(const json &input);
    };
}

#endif