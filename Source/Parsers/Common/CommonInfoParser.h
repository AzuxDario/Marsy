#ifndef MARSY_COMMON_COMMONINFOPARSER_H
#define MARSY_COMMON_COMMONINFOPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "MassInfoParser.h"
#include "SizeInfoParser.h"
#include "ThrustInfoParser.h"
#include "VolumeInfoParser.h"
#include "../../Models/Common/MassInfoModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Models/Common/ThrustInfoModel.h"
#include "../../Models/Common/VolumeInfoModel.h"

using json = nlohmann::json;
using Marsy::Models::Common::MassInfoModel;
using Marsy::Models::Common::SizeInfoModel;
using Marsy::Models::Common::ThrustInfoModel;
using Marsy::Models::Common::VolumeInfoModel;

namespace Marsy::Parsers::Common
{
    class CommonInfoParser : public Parser
    {
    public:
        CommonInfoParser();
        std::optional<MassInfoModel> parseMassInfo(const json &input, const std::string &name);
        std::optional<SizeInfoModel> parseSizeInfo(const json &input, const std::string &name);
        std::optional<ThrustInfoModel> parseThrustInfo(const json &input, const std::string &name);
        std::optional<VolumeInfoModel> parseVolumeInfo(const json &input, const std::string &name);
    };
}

#endif