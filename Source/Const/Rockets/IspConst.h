#ifndef MARSY_ROCKETS_ISPCONST_H
#define MARSY_ROCKETS_ISPCONST_H

#include <string>

namespace Marsy::Const::Rocket
{
    struct IspConst
    {
        const std::string strSeaLevel = "sea_level";
        const std::string strVacuum = "vacuum";
    };
}

#endif