#ifndef MARSY_DARGONS_THRUSTERPARSER_H
#define MARSY_DARGONS_THRUSTERPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/ThrusterModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Dragons/ThrusterConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class ThrusterParser : public Parser, private ThrusterConst
    {
    public:
        ThrusterParser();
        std::vector<ThrusterModel> parseThrusterVector(const json &input);
    };
}

#endif