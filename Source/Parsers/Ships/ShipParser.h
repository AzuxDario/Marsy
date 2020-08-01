#ifndef MARSY_SHIPS_SHIPPARSER_H
#define MARSY_SHIPS_SHIPPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Ships/ShipModel.h"
#include "../../Const/Ships/ShipConst.h"

using json = nlohmann::json;
using Marsy::ShipModel;
using Marsy::ShipConst;

namespace Marsy
{
    class ShipParser : public Parser, public IParser<ShipModel>, private ShipConst
    {
    public:
        ShipParser();
    protected:
        ShipModel parseOne(const json &input) override;
    };
}

#endif