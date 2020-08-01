#ifndef MARSY_STARLINK_STARLINKSERVICE_H
#define MARSY_STARLINK_STARLINKSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Starlink/StarlinkModel.h"
#include "../../Parsers/Starlink/StarlinkParser.h"

namespace Marsy
{
    class StarlinkService : public Service<StarlinkModel, StarlinkParser>
    {
    private:
        const std::string apiStarlinkUrl = apiBaseUrl + "/starlink";
    public:
        StarlinkService(std::shared_ptr<IConnector> connector);
        ServiceResponse<StarlinkModel> getStarlink(std::string id);
        ServiceVectorResponse<StarlinkModel> getStarlinkVector();
        ServiceQueryResponse<StarlinkModel> getStarlinkQuery(QueryRequest request);
    };
}

#endif