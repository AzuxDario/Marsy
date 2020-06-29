#ifndef MARSY_COMMON_VOLUMEINFOPARSER_H
#define MARSY_COMMON_VOLUMEINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::Common::VolumeInfo;

namespace Marsy::Parsers::Common
{
    class VolumeInfoParser : public Parser
    {
    private:
        const std::string strCubicMeters = "cubic_meters";
        const std::string strCubicFeet = "cubic_feet";
    public:
        VolumeInfoParser();
        VolumeInfo parseVolumeInfo(const std::string &input);
    private:
        VolumeInfo parseObject(const json &input);
    };
}

#endif