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

using json = nlohmann::json;
using Marsy::Models::Dragon::TrunkModel;
using Marsy::Models::Dragon::CargoModel;
using Marsy::Models::Common::VolumeInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Dragon
{
    class TrunkParser : public Parser
    {
    private:
        const std::string strTrunkVolume = "trunk_volume";
        const std::string strCargo = "cargo";
    public:
        TrunkParser();
        TrunkModel parseTrunk(const json &input);
    private:
        std::optional<CargoModel> parseCargo(const json &input, const std::string &name);
    };
}

#endif