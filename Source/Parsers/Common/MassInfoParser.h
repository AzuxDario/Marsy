#ifndef MARSY_COMMON_MASSINFOPARSER_H
#define MARSY_COMMON_MASSINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/MassInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Common::MassInfoModel;

namespace Marsy::Parsers::Common
{
    class MassInfoParser : public Parser
    {
    private:
        const std::string strKg = "kg";
        const std::string strLb = "lb";
    public:
        MassInfoParser();
        MassInfoModel parseMassInfo(const json &input);
    };
}

#endif