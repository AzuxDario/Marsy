#ifndef MARSY_DARGONS_TRUNKPARSER_H
#define MARSY_DARGONS_TRUNKPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "CargoParser.h"
#include "../Common/VolumeInfoParser.h"
#include "../../Models/Dragons/Trunk.h"
#include "../../Models/Dragons/Cargo.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::Trunk;
using Marsy::Models::DragonModel::Cargo;
using Marsy::Models::CommonModel::VolumeInfo;
using Marsy::Parsers::Common::VolumeInfoParser;

namespace Marsy::Parsers::DragonParser
{
    class TrunkParser : public Parser
    {
    private:
        const std::string strTrunkVolume = "trunk_volume";
        const std::string strCargo = "cargo";
    public:
        TrunkParser();
        Trunk parseTrunk(const std::string &input);
    private:
        Trunk parseObject(const json &input);
        std::optional<VolumeInfo> parseVolumeInfo(const json &input, const std::string &name);
        std::optional<Cargo> parseCargo(const json &input, const std::string &name);
    };
}

#endif