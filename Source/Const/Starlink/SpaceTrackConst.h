#ifndef MARSY_STARLINK_SPACETRACKCONST_H
#define MARSY_STARLINK_SPACETRACKCONST_H

#include <string>

namespace Marsy
{
    struct SpaceTrackConst
    {
        const std::string strCcsdsOmmVers = "CCSDS_OMM_VERS";
        const std::string strComment = "COMMENT";
        const std::string strCreationDate = "CREATION_DATE";
        const std::string strOriginator = "ORIGINATOR";
        const std::string strObjectName = "OBJECT_NAME";
        const std::string strObjectId = "OBJECT_ID";
        const std::string strCenterName = "CENTER_NAME";
        const std::string strRefFrame = "REF_FRAME";
        const std::string strTimeSystem = "TIME_SYSTEM";
        const std::string strMeanElementTheory = "MEAN_ELEMENT_THEORY";
        const std::string strEpoch = "EPOCH";
        const std::string strMeanMotion = "MEAN_MOTION";
        const std::string strEccentricy = "ECCENTRICITY";
        const std::string strInclination = "INCLINATION";
        const std::string strRaOfAscNode = "RA_OF_ASC_NODE";
        const std::string strArgOfPericenter = "ARG_OF_PERICENTER";
        const std::string strMeanAnomaly = "MEAN_ANOMALY";
        const std::string strEphemerisType = "EPHEMERIS_TYPE";
        const std::string strClassificationType = "CLASSIFICATION_TYPE";
        const std::string strNoradCatId = "NORAD_CAT_ID";
        const std::string strElementSetNo = "ELEMENT_SET_NO";
        const std::string strRevAtEpoch = "REV_AT_EPOCH";
        const std::string strBstar = "BSTAR";
        const std::string strMeanMotionDot = "MEAN_MOTION_DOT";
        const std::string strMeanMotionDdot = "MEAN_MOTION_DDOT";
        const std::string strSemimajorAxis = "SEMIMAJOR_AXIS";
        const std::string strPeriod = "PERIOD";
        const std::string strApoapsis = "APOAPSIS";
        const std::string strPeriapsis = "PERIAPSIS";
        const std::string strObjectType = "OBJECT_TYPE";
        const std::string strRcsSize = "RCS_SIZE";
        const std::string strCountryCode = "COUNTRY_CODE";
        const std::string strLaunchDate = "LAUNCH_DATE";
        const std::string strSite = "SITE";
        const std::string strDecayDate = "DECAY_DATE";
        const std::string strDecayed = "DECAYED";
        const std::string strFile = "FILE";
        const std::string strGpId = "GP_ID";
        const std::string strTleLine0 = "TLE_LINE0";
        const std::string strTleLine1 = "TLE_LINE1";
        const std::string strTleLine2 = "TLE_LINE2";
    };
}

#endif