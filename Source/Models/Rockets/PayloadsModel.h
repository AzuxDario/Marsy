#ifndef MARSY_ROCKETS_PAYLOADS_H
#define MARSY_ROCKETS_PAYLOADS_H

#include <string>
#include <optional>

#include "../Common/SizeInfoModel.h"

using Marsy::Models::Common::SizeInfoModel;

namespace Marsy::Models::Rocket
{
    struct PayloadsModel
    {
        std::optional<std::string> option1;
        std::optional<SizeInfoModel> compositeFairing;
        std::optional<SizeInfoModel> diameter;
    };
}

#endif