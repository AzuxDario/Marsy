#ifndef MARSY_ROCKETS_PAYLOADS_H
#define MARSY_ROCKETS_PAYLOADS_H

#include <string>
#include <optional>

#include "../Common/SizeInfo.h"

namespace Marsy::Models::Rockets
{
    struct Payloads
    {
        std::optional<std::string> option1;
        std::optional<Common::SizeInfo> compositeFairing;
        std::optional<Common::SizeInfo> diameter;
    };
}

#endif