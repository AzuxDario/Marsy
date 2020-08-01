#ifndef MARSY_DRAGON_DRAGONCONST_H
#define MARSY_DRAGON_DRAGONCONST_H

#include <string>

namespace Marsy
{
    struct DragonConst
    {
        const std::string strName = "name";
        const std::string strType = "type";
        const std::string strActive = "active";
        const std::string strCrewCapacity = "crew_capacity";
        const std::string strSidewallAngleDeg = "sidewall_angle_deg";
        const std::string strOrbitDurationYr = "orbit_duration_yr";
        const std::string strDryMassKg = "dry_mass_kg";
        const std::string strDryMassLb = "dry_mass_lb";
        const std::string strFirstFlight = "first_flight";
        const std::string strHeatShield = "heat_shield";
        const std::string strThrusters = "thrusters";
        const std::string strLaunchPayloadMass = "launch_payload_mass";
        const std::string strLaunchPayloadVol = "launch_payload_vol";
        const std::string strReturnPayloadMass = "return_payload_mass";
        const std::string strReturnPayloadVol = "return_payload_vol";
        const std::string strPressurizedCapsule = "pressurized_capsule";
        const std::string strTrunk = "trunk";
        const std::string strHeightWTrunk = "height_w_trunk";
        const std::string strDiameter = "diameter";
        const std::string strFlickrImages = "flickr_images";
        const std::string strWikipedia = "wikipedia";
        const std::string strDescription = "description";
        const std::string strId = "id";
    };
}

#endif