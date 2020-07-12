#ifndef MARSY_CAPSULES_CAPSULESERVICE_H
#define MARSY_CAPSULES_CAPSULESERVICE_H

#include <string>
#include <vector>
#include <optional>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"

using namespace Marsy::Connection::IConnector;

namespace Marsy::Services::CapsuleService
{
    class CapsuleService : public Service
    {
    private:
        const std::string strSerial = "serial";
        const std::string strStatus = "status";
    public:
        CapsuleService();
    };
}

#endif