#ifndef MARSY_CAPSULES_CAPSULERESPONSE_H
#define MARSY_CAPSULES_CAPSULERESPONSE_H

#include <vector>
#include <optional>

#include "../../../Models/Capsules/Capsule.h"
#include "../../../Connection/Response/Response.h"

using Marsy::Models::CapsuleModel::Capsule;
using Marsy::Connection::ResponseStatus;

namespace Marsy::Services::CapsuleService
{
    struct CapsuleResponse
    {
        ResponseStatus status;
        Capsule capsule; 
    };

    struct CapsuleVectorResponse
    {
        ResponseStatus status;
        std::vector<Capsule> capsuleVector; 
    };
}

#endif