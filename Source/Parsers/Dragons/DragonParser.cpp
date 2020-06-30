#include "DragonParser.h"

namespace Marsy::Parsers::DragonParser
{
    DragonParser::DragonParser()
    {

    }

    Dragon DragonParser::parseDragon(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Dragon> DragonParser::parseDragons(const std::string &input)
    {
        std::vector<Dragon> dragons;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                dragons.push_back(parseObject(it.value()));
            }
        }

        return dragons;
    }

    Dragon DragonParser::parseObject(const json &input)
    {
        Dragon dragon;
        dragon.name = parseStringNullable(input, strName);
        dragon.type = parseStringNullable(input, strType);
        dragon.active = parseBoolNullable(input, strActive);
        dragon.crewCapacity = parseIntNullable(input, strCrewCapacity);
        dragon.sidewallAngleDegrees = parseIntNullable(input, strSidewallAngleDeg);
        dragon.orbitDurationYear = parseIntNullable(input, strOrbitDurationYr);
        dragon.dryMassKilograms = parseIntNullable(input, strDryMassKg);
        dragon.dryMassPounds = parseIntNullable(input, strDryMassLb);
        dragon.firstFlight = parseStringNullable(input, strFirstFlight);
        dragon.heatShield = parseHeatShield(input, strHeatShield);
        dragon.thrusters = parseThrusters(input, strThrusters);
        dragon.launchPayloadMass = parseMassInfo(input, strLaunchPayloadMass);
        dragon.launchPayloadVolume = parseVolumeInfo(input, strLaunchPayloadVol);
        dragon.returnPayloadMass = parseMassInfo(input, strReturnPayloadMass);
        dragon.returnPayloadVolume = parseVolumeInfo(input, strReturnPayloadVol);
        dragon.pressurizedCapsule = parsePressurizedCapsule(input, strPressurizedCapsule);
        dragon.trunk = parseTrunk(input, strTrunk);
        dragon.heightWTrunk = parseSizeInfo(input, strHeightWTrunk);
        dragon.diameter = parseSizeInfo(input, strDiameter);
        dragon.flickrImages = parseArrayOfStringNullable(input, strFlickrImages);
        dragon.wikipedia = parseStringNullable(input, strWikipedia);
        dragon.description = parseStringNullable(input, strDescription);
        dragon.id = parseStringNullable(input, strId);

        return dragon;
    }

    std::optional<MassInfo> DragonParser::parseMassInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            MassInfoParser massInfoParser;
            return massInfoParser.parseMassInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<SizeInfo> DragonParser::parseSizeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SizeInfoParser sizeInfoParser;
            return sizeInfoParser.parseSizeInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<VolumeInfo> DragonParser::parseVolumeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            VolumeInfoParser volumeInfoParser;
            return volumeInfoParser.parseVolumeInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<HeatShield> DragonParser::parseHeatShield(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            HeatShieldParser heatShieldParser;
            return heatShieldParser.parseHeatShield(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<std::vector<Thruster>> DragonParser::parseThrusters(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            ThrusterParser thrusterParser;
            return thrusterParser.parseThrusters(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<Trunk> DragonParser::parseTrunk(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            TrunkParser trunkParser;
            return trunkParser.parseTrunk(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<PressurizedCapsule> DragonParser::parsePressurizedCapsule(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            PressurizedCapsuleParser pressurizedCapsuleParser;
            return pressurizedCapsuleParser.parsePressurizedCapsule(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
