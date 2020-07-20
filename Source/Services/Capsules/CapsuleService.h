#ifndef MARSY_CAPSULES_CAPSULESERVICE_H
#define MARSY_CAPSULES_CAPSULESERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Capsules/Capsule.h"
#include "../../Parsers/Capsules/CapsuleParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::CapsuleModel::Capsule;
using Marsy::Parsers::CapsuleParser::CapsuleParser;

namespace Marsy::Services::CapsuleService
{
    class CapsuleService : public Service<Capsule, CapsuleParser>
    {
    private:
        const std::string apiCapsulesUrl = apiBaseUrl + "/capsules";
    public:
        CapsuleService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Capsule> getCapsule(std::string id);
        ServiceVectorResponse<Capsule> getCapsuleVector();
    };
}

#endif