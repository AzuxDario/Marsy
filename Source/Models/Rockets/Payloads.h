#ifndef MARSY_ROCKETS_PAYLOADS_H
#define MARSY_ROCKETS_PAYLOADS_H

#include <string>
#include <optional>

#include "../Common/SizeInfo.h"

using Marsy::Models::CommonModel::SizeInfo;

namespace Marsy::Models::RocketsModel
{
    struct Payloads
    {
        std::optional<std::string> option1;
        std::optional<SizeInfo> compositeFairing;
        std::optional<SizeInfo> diameter;
    };
}

#endif