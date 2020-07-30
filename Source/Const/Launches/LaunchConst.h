#ifndef MARSY_LAUNCHES_LAUNCHCONST_H
#define MARSY_LAUNCHES_LAUNCHCONST_H

#include <string>

namespace Marsy::Const::Launch
{
    struct LaunchConst
    {
        const std::string strFlightNumber = "flight_number";
        const std::string strName = "name";
        const std::string strDateUtc = "date_utc";
        const std::string strDateUnix = "date_unix";
        const std::string strDateLocal = "date_local";
        const std::string strDatePrecision = "date_precision";
        const std::string strStaticFireDateUtc = "static_fire_date_utc";
        const std::string strstaticFireDateUnix = "static_fire_date_unix";
        const std::string strTdb = "tdb";
        const std::string strNet = "net";
        const std::string strWindow = "window";
        const std::string strRocket = "rocket";
        const std::string strSuccess = "success";
        const std::string strFailures = "failures";
        const std::string strUpcoming = "upcoming";
        const std::string strDetails = "details";
        const std::string strFairings = "fairings";
        const std::string strCrew = "crew";
        const std::string strShips = "ships";
        const std::string strCapsules = "capsules";
        const std::string strPayloads = "payloads";
        const std::string strLaunchpad = "launchpad";
        const std::string strCores = "cores";
        const std::string strLinks = "links";
        const std::string strAutoUpdate = "auto_update";
        const std::string strId = "id";
        const std::string strStatusHalf = "half";
        const std::string strStatusQuarter = "quarter";
        const std::string strStatusYear = "year";
        const std::string strStatusMonth = "month";
        const std::string strStatusDay = "day";
        const std::string strStatusHour = "hour";
    };
}

#endif