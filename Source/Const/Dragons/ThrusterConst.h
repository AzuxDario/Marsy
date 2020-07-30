#ifndef MARSY_DRAGON_THRUSTERCONST_H
#define MARSY_DRAGON_THRUSTERCONST_H

#include <string>

namespace Marsy::Const::Dragon
{
    struct ThrusterConst
    {        
        const std::string strType = "type";
        const std::string strAmount = "amount";
        const std::string strPods = "pods";
        const std::string strFuel1 = "fuel_1";
        const std::string strFuel2 = "fuel_2";
        const std::string strIsp = "isp";
        const std::string strThrust = "thrust";
    };
}

#endif