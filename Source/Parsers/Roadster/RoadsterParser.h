#ifndef MARSY_ROADSTER_ROADSTERPARSER_H
#define MARSY_ROADSTER_ROADSTERPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Roadster/RoadsterModel.h"
#include "../../Const/Roadster/RoadsterConst.h"

using json = nlohmann::json;
using Marsy::Models::Roadster::RoadsterModel;
using Marsy::Const::Roadster::RoadsterConst;

namespace Marsy::Parsers::Roadster
{
    class RoadsterParser : public Parser, public IParser<RoadsterModel>, private RoadsterConst
    {
    public:
        RoadsterParser();
    protected:
        RoadsterModel parseOne(const json &input) override;
    };
}

#endif