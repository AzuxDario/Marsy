#ifndef MARSY_LAUNCHPADS_LAUNCHPADPARSER_H
#define MARSY_LAUNCHPADS_LAUNCHPADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Launchpads/LaunchpadModel.h"
#include "../../Const/Launchpads/LaunchpadConst.h"

using json = nlohmann::json;
using Marsy::Models::Launchpad::LaunchpadModel;
using Marsy::Models::Launchpad::LaunchpadStatus;
using Marsy::Const::Launchpad::LaunchpadConst;

namespace Marsy::Parsers::Launchpad
{
    class LaunchpadParser : public Parser, public IParser<LaunchpadModel>, private LaunchpadConst
    {
    public:
        LaunchpadParser();
    protected:
        LaunchpadModel parseOne(const json &input) override;
    private:
        std::optional<LaunchpadStatus> parseLaunchpadStatus(const json &input, const std::string &name);
    };
}

#endif