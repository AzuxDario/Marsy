#ifndef MARSY_DRAGON_HEATSHIELDCONST_H
#define MARSY_DRAGON_HEATSHIELDCONST_H

#include <string>

namespace Marsy::Const::Dragon
{
    struct HeatShieldConst
    {
        const std::string strMaterial = "material";
        const std::string strSizeMeters = "size_meters";
        const std::string strTempDegrees = "temp_degrees";
        const std::string strDevPartner = "dev_partner";
    };
}

#endif