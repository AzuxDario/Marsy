#ifndef MARSY_CAPSULES_CAPSULESERVICE_H
#define MARSY_CAPSULES_CAPSULESERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Capsules/CapsuleModel.h"
#include "../../Parsers/Capsules/CapsuleParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Capsule::CapsuleModel;
using Marsy::Parsers::Capsule::CapsuleParser;

namespace Marsy::Services::Capsule
{
    class CapsuleService : public Service<CapsuleModel, CapsuleParser>
    {
    private:
        const std::string apiCapsulesUrl = apiBaseUrl + "/capsules";
    public:
        CapsuleService(std::shared_ptr<IConnector> connector);
        ServiceResponse<CapsuleModel> getCapsule(std::string id);
        ServiceVectorResponse<CapsuleModel> getCapsuleVector();
    };
}

#endif