#ifndef MARSY_LANDPADS_LANDPADPARSER_H
#define MARSY_LANDPADS_LANDPADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Landpads/Landpad.h"

using json = nlohmann::json;
using Marsy::Models::LandpadModel::Landpad;

namespace Marsy::Parsers::LandpadParser
{
    class LandpadParser : public Parser, public IParser<Landpad>
    {
    private:
        const std::string strName = "name";
        const std::string strFullName = "full_name";
        const std::string strStatus = "status";
        const std::string strType = "type";
        const std::string strLocality = "locality";
        const std::string strRegion = "region";
        const std::string strLatitude = "latitude";
        const std::string strLongitude = "longitude";
        const std::string strLandingAttempts = "landing_attempts";
        const std::string strLandingSuccesses = "landing_successes";
        const std::string strWikipedia = "wikipedia";
        const std::string strDetails = "details";
        const std::string strLaunches = "launches";
        const std::string strId = "id";
    public:
        LandpadParser();
    protected:
        Landpad parseOne(const json &input) override;
    };
}

#endif