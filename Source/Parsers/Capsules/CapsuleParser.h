#ifndef MARSY_CAPSULES_CAPSULEPARSER_H
#define MARSY_CAPSULES_CAPSULEPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Capsules/CapsuleModel.h"
#include "../../Const/Capsules/CapsuleConst.h"

using json = nlohmann::json;
using Marsy::Models::Capsule::CapsuleModel;
using Marsy::Models::Capsule::CapsuleStatus;
using Marsy::Const::Capsule::CapsuleConst;

namespace Marsy::Parsers::Capsule
{
    class CapsuleParser : public Parser, public IParser<CapsuleModel>, private CapsuleConst
    {
    public:
        CapsuleParser();
    protected:
        CapsuleModel parseOne(const json &input) override;
    private:
        std::optional<CapsuleStatus> parseCapsuleStatus(const json &input, const std::string &name);
    };
}

#endif