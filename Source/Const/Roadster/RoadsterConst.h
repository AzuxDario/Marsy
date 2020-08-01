#ifndef MARSY_ROADSTER_ROADSTERCONST_H
#define MARSY_ROADSTER_ROADSTERCONST_H

#include <string>

namespace Marsy
{
    struct RoadsterConst
    {
        const std::string strName = "name";
        const std::string strLaunchDateUtc = "launch_date_utc";
        const std::string strLaunchDateUnix = "launch_date_unix";
        const std::string strLaunchMassKg = "launch_mass_kg";
        const std::string strLaunchMassLbs = "launch_mass_lbs";
        const std::string strNoradId = "norad_id";
        const std::string strEpochJd = "epoch_jd";
        const std::string strOrbitType = "orbit_type";
        const std::string strApoapsisAu = "apoapsis_au";
        const std::string strPeriapsisAu = "periapsis_au";
        const std::string strSemiMajorAxisAu = "semi_major_axis_au";
        const std::string strEccentricity = "eccentricity";
        const std::string strInclination = "inclination";
        const std::string strLongitude = "longitude";
        const std::string strPeriapsisArg = "periapsis_arg";
        const std::string strPeriodDays = "period_days";
        const std::string strSpeedKph = "speed_kph";
        const std::string strSpeedMph = "speed_mph";
        const std::string strEarthDistanceKm = "earth_distance_km";
        const std::string strEarthDistanceMi = "earth_distance_mi";
        const std::string strMarsDistanceKm = "mars_distance_km";
        const std::string strMarsDistanceMi = "mars_distance_mi";
        const std::string strFlickrImages = "flickr_images";
        const std::string strWikipedia = "wikipedia";
        const std::string strVideo = "video";
        const std::string strDetails = "details";
        const std::string strId = "id";
    };
}

#endif