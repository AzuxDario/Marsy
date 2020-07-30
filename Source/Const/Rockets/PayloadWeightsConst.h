#ifndef MARSY_ROCKETS_PAYLOADWEIGHTSCONST_H
#define MARSY_ROCKETS_PAYLOADWEIGHTSCONST_H

#include <string>

namespace Marsy::Const::Rocket
{
    struct PayloadWeightsConst
    {
        const std::string strId = "id";
        const std::string strName = "name";
        const std::string strKg = "kg";
        const std::string strLb = "lb";
    };
}

#endif