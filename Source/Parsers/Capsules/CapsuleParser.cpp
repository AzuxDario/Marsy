#include "CapsuleParser.h"

namespace Marsy::Parsers::Capsule
{
    CapsuleParser::CapsuleParser()
    {

    }

    CapsuleModel CapsuleParser::parseOne(const json &input)
    {
        CapsuleModel capsule;
        // serial is requiser by API
        capsule.serial = parseStringNullable(input, strSerial);
        capsule.status = parseCapsuleStatus(input, strStatus);
        // dragon can be not defined
        capsule.dragon = parseStringNullable(input, strDragon);
        // reuseCount have default value in API
        capsule.reuseCount = parseIntNullable(input, strReuseCount).value_or(capsule.reuseCount.value());
        capsule.waterLandings = parseIntNullable(input, strWaterLanding).value_or(capsule.waterLandings.value());
        capsule.landLandings = parseIntNullable(input, strLandLanding).value_or(capsule.landLandings.value());
        capsule.lastUpdate = parseStringNullable(input, strLastUpdate);
        capsule.launches = parseArrayOfStringNullable(input, strLaunches);
        capsule.id = parseStringNullable(input, strId);

        return capsule;
    }

    std::optional<CapsuleStatus> CapsuleParser::parseCapsuleStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == strStatusUnknown)
        {
            return CapsuleStatus::unknown;
        }
        else if(status == strStatusActive)
        {
            return CapsuleStatus::active;
        }
        else if(status == strStatusRetired)
        {
            return CapsuleStatus::retired;
        }
        else if(status == strStatusDestroyed)
        {
            return CapsuleStatus::destroyed;
        }
        else
        {
            return std::nullopt;
        }
        
    }
}
