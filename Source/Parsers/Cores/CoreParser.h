#ifndef MARSY_CORES_COREPARSER_H
#define MARSY_CORES_COREPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Cores/Core.h"

using json = nlohmann::json;
using Marsy::Models::Cores::Core;
using Marsy::Models::Cores::CoreStatus;

namespace Marsy::Parsers::CoreParser
{
    class CoreParser : public Parser
    {
    public:
        CoreParser();
        Core parseCore(const std::string &input);
        std::vector<Core> parseCores(const std::string &input);
    private:
        Core parseObject(const json &input);
        std::optional<CoreStatus> parseCoreStatus(const json &input, const std::string &name);
    };
}

#endif