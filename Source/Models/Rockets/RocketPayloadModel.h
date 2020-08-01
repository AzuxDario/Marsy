#ifndef MARSY_ROCKETS_ROCKETPAYLOAD_H
#define MARSY_ROCKETS_ROCKETPAYLOAD_H

#include <string>
#include <optional>

#include "../Common/SizeInfoModel.h"

namespace Marsy
{
    struct RocketPayloadModel
    {
        std::optional<std::string> option1;
        std::optional<SizeInfoModel> compositeFairing;
        std::optional<SizeInfoModel> diameter;
    };
}

#endif