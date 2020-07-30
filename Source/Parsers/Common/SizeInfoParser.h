#ifndef MARSY_COMMON_SIZEINFOPARSER_H
#define MARSY_COMMON_SIZEINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Const/Common/SizeInfoConst.h"

using json = nlohmann::json;
using Marsy::Models::Common::SizeInfoModel;
using Marsy::Const::Common::SizeInfoConst;

namespace Marsy::Parsers::Common
{
    class SizeInfoParser : public Parser, private SizeInfoConst
    {
    public:
        SizeInfoParser();
        SizeInfoModel parseSizeInfo(const json &input);
    };
}

#endif