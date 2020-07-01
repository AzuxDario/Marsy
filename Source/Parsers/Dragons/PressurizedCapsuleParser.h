#ifndef MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H
#define MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/VolumeInfoParser.h"
#include "../../Models/Dragons/PressurizedCapsule.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::DragonModel::PressurizedCapsule;
using Marsy::Models::CommonModel::VolumeInfo;
using Marsy::Parsers::CommonParser::VolumeInfoParser;

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
        std::optional<VolumeInfo> parseVolumeInfo(const json &input, const std::string &name);
    };
}

#endif