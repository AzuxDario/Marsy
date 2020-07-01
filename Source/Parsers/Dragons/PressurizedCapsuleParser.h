#ifndef MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H
#define MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/PressurizedCapsule.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::PressurizedCapsule;
using Marsy::Models::CommonModel::VolumeInfo;
using Marsy::Parsers::CommonParser::CommonInfoParser;

namespace Marsy::Parsers::DragonParser
{
    class PressurizedCapsuleParser : public Parser
    {
    private:
        const std::string strPayloadVolume = "payload_volume";
    public:
        PressurizedCapsuleParser();
        PressurizedCapsule parsePressurizedCapsule(const std::string &input);
    private:
        PressurizedCapsule parseObject(const json &input);
    };
}

#endif