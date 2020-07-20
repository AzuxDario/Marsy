#ifndef MARSY_CORES_CORESERVICE_H
#define MARSY_CORES_CORESERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Cores/Core.h"
#include "../../Parsers/Cores/CoreParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::CoreModel::Core;
using Marsy::Parsers::CoreParser::CoreParser;

namespace Marsy::Services::CoreService
{
    class CoreService : public Service<Core, CoreParser>
    {
    private:
        const std::string apiCoresUrl = apiBaseUrl + "/cores";
    public:
        CoreService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Core> getCore(std::string id);
        ServiceVectorResponse<Core> getCoreVector();
    };
}

#endif