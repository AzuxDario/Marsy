#ifndef MARSY_COMMON_VOLUMEINFOPARSER_H
#define MARSY_COMMON_VOLUMEINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/VolumeInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Common::VolumeInfoModel;

namespace Marsy::Parsers::Common
{
    class VolumeInfoParser : public Parser
    {
    private:
        const std::string strCubicMeters = "cubic_meters";
        const std::string strCubicFeet = "cubic_feet";
    public:
        VolumeInfoParser();
        VolumeInfoModel parseVolumeInfo(const json &input);
    };
}

#endif