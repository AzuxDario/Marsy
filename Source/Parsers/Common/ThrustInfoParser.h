#ifndef MARSY_COMMON_THRUSTINFOPARSER_H
#define MARSY_COMMON_THRUSTINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Common/ThrustInfoConst.h"

using json = nlohmann::json;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Const::Common::ThrustInfoConst;

namespace Marsy::Parsers::Common
{
    class ThrustInfoParser : public Parser, private ThrustInfoConst
    {
    public:
        ThrustInfoParser();
        ThrustInfoModel parseThrustInfo(const json &input);
    };
}

#endif