#ifndef MARSY_DRAGONS_CARGO_H
#define MARSY_DRAGONS_CARGO_H

#include <optional>

namespace Marsy::Models::DragonModel
{
    struct Cargo
    {
        std::optional<int> solarArray;
        std::optional<bool> unpressurizedCargo;
    };
}

#endif