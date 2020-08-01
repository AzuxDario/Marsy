#ifndef MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H
#define MARSY_DARGONS_PRESSURIZEDCAPSULEPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Dragons/PressurizedCapsuleModel.h"
#include "../../Models/Common/VolumeInfoModel.h"
#include "../../Const/Dragons/PressurizedCapsuleConst.h"

using json = nlohmann::json;
using Marsy::PressurizedCapsuleModel;
using Marsy::VolumeInfoModel;
using Marsy::CommonInfoParser;
using Marsy::PressurizedCapsuleConst;

namespace Marsy
{
    class PressurizedCapsuleParser : public Parser, private PressurizedCapsuleConst
    {
    private:
        const std::string strPayloadVolume = "payload_volume";
    public:
        PressurizedCapsuleParser();
        PressurizedCapsuleModel parsePressurizedCapsule(const json &input);
    };
}

#endif