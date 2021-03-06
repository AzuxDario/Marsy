#ifndef MARSY_CORES_CORESERVICE_H
#define MARSY_CORES_CORESERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Cores/CoreModel.h"
#include "../../Parsers/Cores/CoreParser.h"

namespace Marsy
{
    class CoreService : public Service<CoreModel, CoreParser>
    {
    private:
        const std::string apiCoresUrl = apiBaseUrl + "/cores";
    public:
        CoreService(std::shared_ptr<IConnector> connector);
        ServiceResponse<CoreModel> getCore(std::string id);
        ServiceVectorResponse<CoreModel> getCoreVector();
        ServiceQueryResponse<CoreModel> getCoreQuery(QueryRequest request);
    };
}

#endif