#include "CapsuleParser.h"

namespace Marsy::Parsers::CapsuleParser
{
    CapsuleParser::CapsuleParser()
    {

    }

    Capsule CapsuleParser::parseCapsule(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Capsule> CapsuleParser::parseCapsules(const std::string &input)
    {
        std::vector<Capsule> capsules;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                capsules.push_back(parseObject(it.value()));
            }
        }

        return capsules;
    }

    Capsule CapsuleParser::parseObject(const json &input)
    {
        Capsule capsule;
        // serial is requiser by API
        capsule.serial = parseString(input, "serial");
        capsule.status = parseCapsuleStatus(input, "status");
        // dragon can be not defined
        capsule.dragon = parseStringNullable(input, "dragon");
        // reuseCount have default value in API
        capsule.reuseCount = parseIntNullable(input, "reuse_count").value_or(capsule.reuseCount);
        capsule.waterLandings = parseIntNullable(input, "water_landings").value_or(capsule.waterLandings);
        capsule.landLandings = parseIntNullable(input, "land_landings").value_or(capsule.landLandings);
        capsule.lastUpdate = parseStringNullable(input, "last_update" );
        capsule.launches = parseArrayOfString(input, "launches");
        capsule.id = parseStringNullable(input, "id");

        return capsule;
    }

    CapsuleStatus CapsuleParser::parseCapsuleStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == "unknown")
        {
            return CapsuleStatus::unknown;
        }
        else if(status == "active")
        {
            return CapsuleStatus::active;
        }
        else if(status == "retried")
        {
            return CapsuleStatus::retried;
        }
        else if(status == "destroyed")
        {
            return CapsuleStatus::destroyed;
        }
        else
        {
            return CapsuleStatus::unknown;
        }
        
    }
}
