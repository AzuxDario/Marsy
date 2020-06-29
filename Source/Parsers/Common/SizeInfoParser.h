#ifndef MARSY_COMMON_SIZEINFOPARSER_H
#define MARSY_COMMON_SIZEINFOPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Common/SizeInfo.h"

using json = nlohmann::json;
using Marsy::Models::Common::SizeInfo;

namespace Marsy::Parsers::Common
{
    class SizeInfoParser : public Parser
    {
    private:
        const std::string strMeters = "meters";
        const std::string strFeet = "feet";
    public:
        SizeInfoParser();
        SizeInfo parseSizeInfo(const std::string &input);
    private:
        SizeInfo parseObject(const json &input);
    };
}

#endif