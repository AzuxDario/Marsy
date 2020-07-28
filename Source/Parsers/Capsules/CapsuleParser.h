#ifndef MARSY_CAPSULES_CAPSULEPARSER_H
#define MARSY_CAPSULES_CAPSULEPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Capsules/CapsuleModel.h"

using json = nlohmann::json;
using Marsy::Models::Capsule::CapsuleModel;
using Marsy::Models::Capsule::CapsuleStatus;

namespace Marsy::Parsers::Capsule
{
    class CapsuleParser : public Parser, public IParser<CapsuleModel>
    {
    private:
        const std::string strSerial = "serial";
        const std::string strStatus = "status";
        const std::string strDragon = "dragon";
        const std::string strReuseCount = "reuse_count";
        const std::string strWaterLanding = "water_landings";
        const std::string strLandLanding = "land_landings";
        const std::string strLastUpdate = "last_update";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
        const std::string strStatusUnknown = "unknown";
        const std::string strStatusActive = "active";
        const std::string strStatusRetired = "retired";
        const std::string strStatusDestroyed = "destroyed";
    public:
        CapsuleParser();
    protected:
        CapsuleModel parseOne(const json &input) override;
    private:
        std::optional<CapsuleStatus> parseCapsuleStatus(const json &input, const std::string &name);
    };
}

#endif