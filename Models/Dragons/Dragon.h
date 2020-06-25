#ifndef MARSY_DRAGONS_DRAGON_H
#define MARSY_DRAGONS_DRAGON_H

#include <string>
#include <vector>
#include <optional>

#include "HeatShield.h"
#include "Thruster.h"
#include "PressurizedCapsule.h"
#include "Trunk.h"
#include "../Common/MassInfo.h"
#include "../Common/VolumeInfo.h"
#include "../Common/SizeInfo.h"

namespace Marsy::Dragons
{
    struct Dragon
    {
        std::string name;
        std::string type;
        bool active;
        int crewCapacity;
        int sidewallAngleDeg;
        int orbitDurationYear;
        int dryMassKilograms;
        int dryMassPounds;
        std::optional<std::string> firstFlight = std::nullopt;
        std::optional<HeatShield> heatShield;
        std::vector<Thruster> thrusters;
        std::optional<Common::MassInfo> launchPayloadMass;
        Common::VolumeInfo launchPayloadVolume;
        std::optional<Common::MassInfo> returnPayloadMass;
        std::optional<Common::VolumeInfo> returnPayloadVolume;
        std::optional<PressurizedCapsule> pressurizedCapsule;
        std::optional<Trunk> trunk;
        std::optional<Common::SizeInfo> heightWTrunk;
        std::optional<Common::SizeInfo> diameter;
        std::vector<std::string> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif