#ifndef MARSY_DRAGON_DRAGONSERVICE_H
#define MARSY_DRAGON_DRAGONSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Dragons/Dragon.h"
#include "../../Parsers/Dragons/DragonParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::DragonModel::Dragon;
using Marsy::Parsers::DragonParser::DragonParser;

namespace Marsy::Services::DragonService
{
    class DragonService : public Service<Dragon, DragonParser>
    {
    private:
        const std::string apiDragonUrl = "/dragons";
    public:
        DragonService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Dragon> getDragon(std::string id);
        ServiceVectorResponse<Dragon> getDragonVector();
    };
}

#endif