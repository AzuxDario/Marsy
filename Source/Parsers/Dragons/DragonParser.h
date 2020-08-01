#ifndef MARSY_DARGONS_DRAGONPARSER_H
#define MARSY_DARGONS_DRAGONPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "HeatShieldParser.h"
#include "ThrusterParser.h"
#include "TrunkParser.h"
#include "PressurizedCapsuleParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/DragonModel.h"
#include "../../Models/Dragons/HeatShieldModel.h"
#include "../../Models/Dragons/ThrusterModel.h"
#include "../../Models/Dragons/TrunkModel.h"
#include "../../Models/Dragons/PressurizedCapsuleModel.h"
#include "../../Models/Common/MassInfoModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Models/Common/VolumeInfoModel.h"
#include "../../Const/Dragons/DragonConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class DragonParser : public Parser, public IParser<DragonModel>, private DragonConst
    {
    public:
        DragonParser();
    protected:
        DragonModel parseOne(const json &input) override;
    private:
        std::optional<HeatShieldModel> parseHeatShield(const json &input, const std::string &name);
        std::optional<std::vector<ThrusterModel>> parseThrusterVector(const json &input, const std::string &name);
        std::optional<PressurizedCapsuleModel> parsePressurizedCapsule(const json &input, const std::string &name);
        std::optional<TrunkModel> parseTrunk(const json &input, const std::string &name);
    };
}

#endif