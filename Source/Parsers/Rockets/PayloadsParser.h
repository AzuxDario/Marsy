#ifndef MARSY_ROCKETS_PAYLOADSPARSER_H
#define MARSY_ROCKETS_PAYLOADSPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../Common/CommonInfoParser.h"
#include "../../Models/Rockets/PayloadsModel.h"
#include "../../Models/Common/SizeInfoModel.h"
#include "../../Const/Rockets/PayloadConst.h"

using json = nlohmann::json;
using Marsy::Models::Rocket::PayloadsModel;
using Marsy::Models::Common::SizeInfoModel;
using Marsy::Parsers::Common::CommonInfoParser;
using Marsy::Const::Rocket::PayloadConst;

namespace Marsy::Parsers::Rocket
{
    class PayloadsParser : public Parser, private PayloadConst
    {
    private:
        const std::string strOption1 = "option1";
        const std::string strCompositeFairing = "composite_fairing";
        const std::string strDiameter = "diameter";
    public:
        PayloadsParser();
        PayloadsModel parsePayloads(const json &input);
    };
}

#endif