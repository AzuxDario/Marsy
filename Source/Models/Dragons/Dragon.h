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

namespace Marsy::Models::DragonModel
{
    struct Dragon
    {
        std::optional<std::string> name;
        std::optional<std::string> type;
        std::optional<bool> active;
        std::optional<int> crewCapacity;
        std::optional<int> sidewallAngleDegrees;
        std::optional<int> orbitDurationYear;
        std::optional<int> dryMassKilograms;
        std::optional<int> dryMassPounds;
        std::optional<std::string> firstFlight = std::nullopt;
        std::optional<HeatShield> heatShield;
        std::optional<std::vector<Thruster>> thrusters;
        std::optional<Common::MassInfo> launchPayloadMass;
        std::optional<Common::VolumeInfo> launchPayloadVolume;
        std::optional<Common::MassInfo> returnPayloadMass;
        std::optional<Common::VolumeInfo> returnPayloadVolume;
        std::optional<PressurizedCapsule> pressurizedCapsule;
        std::optional<Trunk> trunk;
        std::optional<Common::SizeInfo> heightWTrunk;
        std::optional<Common::SizeInfo> diameter;
        std::optional<std::vector<std::string>> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif