#ifndef MARSY_DRAGONS_DRAGON_H
#define MARSY_DRAGONS_DRAGON_H

#include <string>
#include <vector>
#include <optional>

#include "HeatShieldModel.h"
#include "ThrusterModel.h"
#include "PressurizedCapsuleModel.h"
#include "TrunkModel.h"
#include "../Common/MassInfoModel.h"
#include "../Common/VolumeInfoModel.h"
#include "../Common/SizeInfoModel.h"

using Marsy::MassInfoModel;
using Marsy::SizeInfoModel;
using Marsy::VolumeInfoModel;

namespace Marsy
{
    struct DragonModel
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
        std::optional<HeatShieldModel> heatShield;
        std::optional<std::vector<ThrusterModel>> thrusters;
        std::optional<MassInfoModel> launchPayloadMass;
        std::optional<VolumeInfoModel> launchPayloadVolume;
        std::optional<MassInfoModel> returnPayloadMass;
        std::optional<VolumeInfoModel> returnPayloadVolume;
        std::optional<PressurizedCapsuleModel> pressurizedCapsule;
        std::optional<TrunkModel> trunk;
        std::optional<SizeInfoModel> heightWTrunk;
        std::optional<SizeInfoModel> diameter;
        std::optional<std::vector<std::string>> flickrImages;
        std::optional<std::string> wikipedia;
        std::optional<std::string> description;
        std::optional<std::string> id;
    };
}

#endif