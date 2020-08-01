#ifndef MARSY_COMMON_VOLUMEINFOPARSER_H
#define MARSY_COMMON_VOLUMEINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/VolumeInfoModel.h"
#include "../../Const/Common/VolumeInfoConst.h"

using json = nlohmann::json;
using Marsy::VolumeInfoModel;
using Marsy::VolumeInfoConst;

namespace Marsy
{
    class VolumeInfoParser : public Parser, private VolumeInfoConst
    {
    public:
        VolumeInfoParser();
        VolumeInfoModel parseVolumeInfo(const json &input);
    };
}

#endif