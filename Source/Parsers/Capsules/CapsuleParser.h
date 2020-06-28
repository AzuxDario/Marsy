#ifndef MARSY_CAPSULES_CAPSULEPARSER_H
#define MARSY_CAPSULES_CAPSULEPARSER_H

#include <string>
#include <vector>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Capsules/Capsule.h"

using json = nlohmann::json;
using Marsy::Models::Capsules::Capsule;
using Marsy::Models::Capsules::CapsuleStatus;

namespace Marsy::Parsers::CapsuleParser
{
    class CapsuleParser : public Parser
    {
    public:
        CapsuleParser();
        Capsule parseCapsule(const std::string &input);
        std::vector<Capsule> parseCapsules(const std::string &input);
    private:
        Capsule parseObject(const json &input);
        std::optional<CapsuleStatus> parseCapsuleStatus(const json &input, const std::string &name);
    };
}

#endif