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
#include "../../Const/Launches/LaunchConst.h"

using json = nlohmann::json;
using Marsy::Models::Launch::LaunchModel;
using Marsy::Models::Launch::DatePrecision;
using Marsy::Models::Launch::CoreModel;
using Marsy::Models::Launch::FairingsModel;
using Marsy::Models::Launch::LinksModel;
using Marsy::Const::Launch::LaunchConst;

namespace Marsy::Parsers::Launch
{
    class LaunchParser : public Parser, public IParser<LaunchModel>, private LaunchConst
    {
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