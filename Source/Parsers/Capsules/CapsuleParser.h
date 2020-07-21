#ifndef MARSY_CAPSULES_CAPSULEPARSER_H
#define MARSY_CAPSULES_CAPSULEPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Capsules/Capsule.h"

using json = nlohmann::json;
using Marsy::Models::CapsuleModel::Capsule;
using Marsy::Models::CapsuleModel::CapsuleStatus;

namespace Marsy::Parsers::CapsuleParser
{
    class CapsuleParser : public Parser, public IParser<Capsule>
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
        Capsule parseOne(const json &input) override;
    private:
        std::optional<CapsuleStatus> parseCapsuleStatus(const json &input, const std::string &name);
    };
}

#endif