#ifndef MARSY_STARLINK_STARLINKSERVICE_H
#define MARSY_STARLINK_STARLINKSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Starlink/Starlink.h"
#include "../../Parsers/Starlink/StarlinkParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::StarlinkModel::Starlink;
using Marsy::Parsers::StarlinkParser::StarlinkParser;

namespace Marsy::Services::StarlinkService
{
    class StarlinkService : public Service<Starlink, StarlinkParser>
    {
    private:
        const std::string apiStarlinkUrl = apiBaseUrl + "/starlink";
    public:
        StarlinkService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Starlink> getStarlink(std::string id);
        ServiceVectorResponse<Starlink> getStarlinkVector();
    };
}

#endif