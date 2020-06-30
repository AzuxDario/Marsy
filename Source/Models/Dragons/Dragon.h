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

using Marsy::Models::CommonModel::MassInfo;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Models::CommonModel::VolumeInfo;

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
        std::optional<MassInfo> launchPayloadMass;
        std::optional<VolumeInfo> launchPayloadVolume;
        std::optional<MassInfo> returnPayloadMass;
        std::optional<VolumeInfo> returnPayloadVolume;
        std::optional<PressurizedCapsule> pressurizedCapsule;
        std::optional<Trunk> trunk;
        std::optional<SizeInfo> heightWTrunk;
        std::optional<SizeInfo> diameter;
        std::optional<std::vector<std::string>> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif