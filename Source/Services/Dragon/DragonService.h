#ifndef MARSY_DRAGON_DRAGONSERVICE_H
#define MARSY_DRAGON_DRAGONSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Dragons/DragonModel.h"
#include "../../Parsers/Dragons/DragonParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Dragon::DragonModel;
using Marsy::Parsers::Dragon::DragonParser;

namespace Marsy::Services::Dragon
{
    class DragonService : public Service<DragonModel, DragonParser>
    {
    private:
        const std::string apiDragonUrl = apiBaseUrl + "/dragons";
    public:
        DragonService(std::shared_ptr<IConnector> connector);
        ServiceResponse<DragonModel> getDragon(std::string id);
        ServiceVectorResponse<DragonModel> getDragonVector();
    };
}

#endif