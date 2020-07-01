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
#include "../../Models/Common/MassInfo.h"
#include "../../Models/Common/SizeInfo.h"
#include "../../Models/Common/ThrustInfo.h"
#include "../../Models/Common/VolumeInfo.h"

using json = nlohmann::json;
using Marsy::Models::CommonModel::MassInfo;
using Marsy::Models::CommonModel::SizeInfo;
using Marsy::Models::CommonModel::ThrustInfo;
using Marsy::Models::CommonModel::VolumeInfo;

namespace Marsy::Parsers::CommonParser
{
    class CommonInfoParser : public Parser
    {
    public:
        CommonInfoParser();
        std::optional<MassInfo> parseMassInfo(const json &input, const std::string &name);
        std::optional<SizeInfo> parseSizeInfo(const json &input, const std::string &name);
        std::optional<ThrustInfo> parseThrustInfo(const json &input, const std::string &name);
        std::optional<VolumeInfo> parseVolumeInfo(const json &input, const std::string &name);
    };
}

#endif