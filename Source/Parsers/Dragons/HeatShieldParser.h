#ifndef MARSY_DARGONS_HEATSHIELDPARSER_H
#define MARSY_DARGONS_HEATSHIELDPARSER_H

#include <string>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Dragons/HeatShieldModel.h"

using json = nlohmann::json;
using Marsy::Models::Dragon::HeatShieldModel;

namespace Marsy::Parsers::Dragon
{
    class HeatShieldParser : public Parser
    {
    private:
        const std::string strMaterial = "material";
        const std::string strSizeMeters = "size_meters";
        const std::string strTempDegrees = "temp_degrees";
        const std::string strDevPartner = "dev_partner";
    public:
        HeatShieldParser();
        HeatShieldModel parseHeatShield(const json &input);
    };
}

#endif