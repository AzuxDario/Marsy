#ifndef MARSY_ROCKETS_ENGINESCONST_H
#define MARSY_ROCKETS_ENGINESCONST_H

#include <string>

namespace Marsy::Const::Rocket
{
    struct EnginesConst
    {
        const std::string strNumber = "number";
        const std::string strType = "type";
        const std::string strVersion = "version";
        const std::string strLayout = "layout";
        const std::string strIsp = "isp";
        const std::string strEngineLossMax = "engine_loss_max";
        const std::string strPropellant1 = "propellant_1";
        const std::string strPropellant2 = "propellant_2";
        const std::string strThrustSeaLevel = "thrust_sea_level";
        const std::string strThrustVacuum = "thrust_vacuum";
        const std::string strThrustToWeight = "thrust_to_weight";
    };
}

#endif