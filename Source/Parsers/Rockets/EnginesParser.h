#ifndef MARSY_ROCKETS_ENGINESPARSER_H
#define MARSY_ROCKETS_ENGINESPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "IspParser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/EnginesModel.h"
#include "../../Models/Rockets/IspModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Const/Rockets/EnginesConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class EnginesParser : public Parser, private EnginesConst
    {
    public:
        EnginesParser();
        EnginesModel parseEngines(const json &input);
    private:
        std::optional<IspModel> parseIsp(const json &input, const std::string &name);
    };
}

#endif