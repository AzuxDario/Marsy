#ifndef MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H
#define MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/PressurizedCapsuleModel.h"
#include "../../Models/Common/VolumeInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::PressurizedCapsuleModel;
using Marsy::Models::Common::VolumeInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;

namespace Marsy::Parsers::Dragon
{
    class PressurizedCapsuleParser : public Parser
    {
    private:
        const std::string strPayloadVolume = "payload_volume";
    public:
        PressurizedCapsuleParser();
        PressurizedCapsuleModel parsePressurizedCapsule(const json &input);
    };
}

#endif