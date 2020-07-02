#ifndef MARSY_LAUNCHES_PATCHPARSER_H
#define MARSY_LAUNCHES_PATCHPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/Patch.h"

using json = nlohmann::json;
using Marsy::Models::LaunchModel::Patch;

namespace Marsy::Parsers::LaunchesParser
{
    class PatchParser : public Parser
    {
    private:
        const std::string strSmall = "small";
        const std::string strLarge = "large";
    public:
        PatchParser();
        Patch parsePatch(const json &input);
    };
}

#endif