#ifndef MARSY_PAYLOADS_PAYLOADCONST_H
#define MARSY_PAYLOADS_PAYLOADCONST_H

#include <string>

namespace Marsy
{
    struct PayloadConst
    {
        const std::string strName = "name";
        const std::string strType = "type";
        const std::string strReused = "reused";
        const std::string strLaunch = "launch";
        const std::string strCustomers = "customers";
        const std::string strNoradId = "norad_ids";
        const std::string strNationalities = "nationalities";
        const std::string strManufacturers = "manufacturers";
        const std::string strMassKg = "mass_kg";
        const std::string strMassLbs = "mass_lbs";
        const std::string strOrbit = "orbit";
        const std::string strReferenceSystem = "reference_system";
        const std::string strRegtime = "regime";
        const std::string strLongitude = "longitude";
        const std::string strSemiMajorAxisKm = "semi_major_axis_km";
        const std::string strEccentricity = "eccentricity";
        const std::string strPeriapsisKm = "periapsis_km";
        const std::string strApoapsisKm = "apoapsis_km";
        const std::string strInclinationDeg = "inclination_deg";
        const std::string strPeriodMin = "period_min";
        const std::string strLifespanYears = "lifespan_years";
        const std::string strEpoch = "epoch";
        const std::string strMeanMotion = "mean_motion";
        const std::string strRaan = "raan";
        const std::string strArgOfPericenter = "arg_of_pericenter";
        const std::string strMeanAnomaly = "mean_anomaly";
        const std::string strDragon = "dragon";
        const std::string strId = "id";
    };
}

#endif