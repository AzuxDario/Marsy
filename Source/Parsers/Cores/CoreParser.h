#ifndef MARSY_CORES_COREPARSER_H
#define MARSY_CORES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Cores/CoreModel.h"
#include "../../Const/Cores/CoreConst.h"

using json = nlohmann::json;
using Marsy::Models::Core::CoreModel;
using Marsy::Models::Core::CoreStatus;
using Marsy::Const::Core::CoreConst;

namespace Marsy::Parsers::Core
{
    class CoreParser : public Parser, public IParser<CoreModel>, private CoreConst
    {
    public:
        CoreParser();
    protected:
        CoreModel parseOne(const json &input) override;
    private:
        std::optional<CoreStatus> parseCoreStatus(const json &input, const std::string &name);
    };
}

#endif