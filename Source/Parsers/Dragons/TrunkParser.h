#ifndef MARSY_DARGONS_TRUNKPARSER_H
#define MARSY_DARGONS_TRUNKPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "CargoParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/TrunkModel.h"
#include "../../Models/Dragons/CargoModel.h"
#include "../../Models/Common/VolumeInfoModel.h"
#include "../../Const/Dragons/TrunkConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class TrunkParser : public Parser, private TrunkConst
    {
    public:
        TrunkParser();
        TrunkModel parseTrunk(const json &input);
    private:
        std::optional<CargoModel> parseCargo(const json &input, const std::string &name);
    };
}

#endif