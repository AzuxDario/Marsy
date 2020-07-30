#ifndef MARSY_ROCKETS_PAYLOADCONST_H
#define MARSY_ROCKETS_PAYLOADCONST_H

#include <string>

namespace Marsy::Const::Rocket
{
    struct PayloadConst
    {
        const std::string strOption1 = "option1";
        const std::string strCompositeFairing = "composite_fairing";
        const std::string strDiameter = "diameter";
    };
}

#endif