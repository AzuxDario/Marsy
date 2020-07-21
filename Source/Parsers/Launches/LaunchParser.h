#ifndef MARSY_LAUNCHES_LAUNCHPARSER_H
#define MARSY_LAUNCHES_LAUNCHPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "CoreParser.h"
#include "FairingsParser.h"
#include "LinksParser.h"
#include "../../Models/Launches/Launch.h"
#include "../../Models/Launches/Core.h"
#include "../../Models/Launches/Fairings.h"
#include "../../Models/Launches/Links.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Launch;
using Marsy::Models::LaunchModel::DatePrecision;
using Marsy::Models::LaunchModel::Core;
using Marsy::Models::LaunchModel::Fairings;
using Marsy::Models::LaunchModel::Links;

namespace Marsy::Parsers::LaunchParser
{
    class LaunchParser : public Parser, public IParser<Launch>
    {
    private:
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
    public:
        LaunchParser();
    protected:
        Launch parseOne(const json &input) override;
    private:
        std::optional<DatePrecision> parseDatePrecision(const json &input, const std::string &name);
        std::optional<std::vector<Core>> parseCoresVector(const json &input, const std::string &name);
        std::optional<Fairings> parseFairings(const json &input, const std::string &name);
        std::optional<Links> parseLinks(const json &input, const std::string &name);
    };
}

#endif