#include "LaunchParser.h"

namespace Marsy::Parsers::Launch
{
    LaunchParser::LaunchParser()
    {

    }

    LaunchModel LaunchParser::parseOne(const json &input)
    {
        LaunchModel launch;
        launch.flightNumber = parseIntNullable(input, strFlightNumber);
        launch.name = parseStringNullable(input, strName);
        launch.dateUtc = parseStringNullable(input, strDateUtc);
        launch.dateUnix = parseLongLongNullable(input, strDateUnix);
        launch.dateLocal = parseStringNullable(input, strDateLocal);
        launch.datePrecision = parseDatePrecision(input, strDatePrecision);
        launch.staticFireDateUtc = parseStringNullable(input, strStaticFireDateUtc);
        launch.staticFireDateUnix = parseLongLongNullable(input, strstaticFireDateUnix);
        launch.tdb = parseBoolNullable(input, strTdb).value_or(launch.tdb.value());
        launch.net = parseBoolNullable(input, strNet).value_or(launch.net.value());
        launch.window = parseIntNullable(input, strWindow);
        launch.success = parseBoolNullable(input, strSuccess);
        launch.failures = parseArrayOfStringNullable(input, strFailures);
        launch.upcoming = parseBoolNullable(input, strUpcoming);
        launch.details = parseStringNullable(input, strDetails);
        launch.fairings = parseFairings(input, strFairings);
        launch.crew = parseArrayOfStringNullable(input, strCrew);
        launch.ships = parseArrayOfStringNullable(input, strShips);
        launch.capsules = parseArrayOfStringNullable(input, strCapsules);
        launch.payloads = parseArrayOfStringNullable(input, strPayloads);
        launch.launchpad = parseStringNullable(input, strLaunchpad);
        launch.cores = parseCoresVector(input, strCores);
        launch.links = parseLinks(input, strLinks);
        launch.autoUpdate = parseBoolNullable(input, strAutoUpdate).value_or(launch.autoUpdate.value());
        launch.id = parseStringNullable(input, strId);

        return launch;
    }

    std::optional<DatePrecision> LaunchParser::parseDatePrecision(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == strStatusHalf)
        {
            return DatePrecision::half;
        }
        else if(status == strStatusQuarter)
        {
            return DatePrecision::quarter;
        }
        else if(status == strStatusYear)
        {
            return DatePrecision::year;
        }
        else if(status == strStatusMonth)
        {
            return DatePrecision::month;
        }
        else if(status == strStatusDay)
        {
            return DatePrecision::day;
        }
        else if(status == strStatusHour)
        {
            return DatePrecision::hour;
        }
        else
        {
            return std::nullopt;
        }
        
    }

    std::optional<std::vector<CoreModel>> LaunchParser::parseCoresVector(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            CoreParser coreParser;
            return coreParser.parseCoresVector(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<FairingsModel> LaunchParser::parseFairings(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            FairingsParser fairingsParser;
            return fairingsParser.parseFairings(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<LinksModel> LaunchParser::parseLinks(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            LinksParser linksParser;
            return linksParser.parseLinks(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
