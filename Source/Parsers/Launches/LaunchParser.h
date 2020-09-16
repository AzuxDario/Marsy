#ifndef MARSY_LAUNCHES_LAUNCHPARSER_H
#define MARSY_LAUNCHES_LAUNCHPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "LaunchCoreParser.h"
#include "FairingsParser.h"
#include "LaunchLinksParser.h"
#include "FailureParser.h"
#include "../../Models/Launches/LaunchModel.h"
#include "../../Models/Launches/LaunchCoreModel.h"
#include "../../Models/Launches/FairingsModel.h"
#include "../../Models/Launches/LaunchLinksModel.h"
#include "../../Models/Launches/FailureModel.h"
#include "../../Const/Launches/LaunchConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class LaunchParser : public Parser, public IParser<LaunchModel>, private LaunchConst
    {
    public:
        LaunchParser();
    protected:
        LaunchModel parseOne(const json &input) override;
    private:
        std::optional<DatePrecision> parseDatePrecision(const json &input, const std::string &name);
        std::optional<std::vector<LaunchCoreModel>> parseCoresVector(const json &input, const std::string &name);
        std::optional<FairingsModel> parseFairings(const json &input, const std::string &name);
        std::optional<LaunchLinksModel> parseLinks(const json &input, const std::string &name);
        std::optional<std::vector<FailureModel>> parseFailuresVector(const json &input, const std::string &name);
    };
}

#endif