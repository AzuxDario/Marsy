#ifndef MARSY_LAUNCHES_PATCHPARSER_H
#define MARSY_LAUNCHES_PATCHPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Launches/PatchModel.h"
#include "../../Const/Launches/PatchConst.h"

using json = nlohmann::json;
using Marsy::Models::Launch::PatchModel;
using Marsy::Const::Launch::PatchConst;

namespace Marsy::Parsers::Launch
{
    class PatchParser : public Parser, private PatchConst
    {
    public:
        PatchParser();
        PatchModel parsePatch(const json &input);
    };
}

#endif