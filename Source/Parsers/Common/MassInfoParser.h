#ifndef MARSY_COMMON_MASSINFOPARSER_H
#define MARSY_COMMON_MASSINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/MassInfoModel.h"
#include "../../Const/Common/MassInfoConst.h"

using json = nlohmann::json;
using Marsy::Models::Common::MassInfoModel;
using Marsy::Const::Common::MassInfoConst;

namespace Marsy::Parsers::Common
{
    class MassInfoParser : public Parser, private MassInfoConst
    {
    public:
        MassInfoParser();
        MassInfoModel parseMassInfo(const json &input);
    };
}

#endif