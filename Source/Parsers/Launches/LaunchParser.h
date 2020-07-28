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
#include "../../Models/Launches/LaunchModel.h"
#include "../../Models/Launches/CoreModel.h"
#include "../../Models/Launches/FairingsModel.h"
#include "../../Models/Launches/LinksModel.h"

using json = nlohmann::json;
using Marsy::Models::Launch::LaunchModel;
using Marsy::Models::Launch::DatePrecision;
using Marsy::Models::Launch::CoreModel;
using Marsy::Models::Launch::FairingsModel;
using Marsy::Models::Launch::LinksModel;

namespace Marsy::Parsers::Launch
{
    class LaunchParser : public Parser, public IParser<LaunchModel>
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
        LaunchModel parseOne(const json &input) override;
    private:
        std::optional<DatePrecision> parseDatePrecision(const json &input, const std::string &name);
        std::optional<std::vector<CoreModel>> parseCoresVector(const json &input, const std::string &name);
        std::optional<FairingsModel> parseFairings(const json &input, const std::string &name);
        std::optional<LinksModel> parseLinks(const json &input, const std::string &name);
    };
}

#endif