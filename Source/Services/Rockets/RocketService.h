#ifndef MARSY_ROCKETS_ROCKETSERVICE_H
#define MARSY_ROCKETS_ROCKETSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Rockets/RocketModel.h"
#include "../../Parsers/Rockets/RocketParser.h"

namespace Marsy
{
    class RocketService : public Service<RocketModel, RocketParser>
    {
    private:
        const std::string apiRocketsUrl = apiBaseUrl + "/rockets";
    public:
        RocketService(std::shared_ptr<IConnector> connector);
        ServiceResponse<RocketModel> getRocket(std::string id);
        ServiceVectorResponse<RocketModel> getRocketVector();
        ServiceQueryResponse<RocketModel> getRocketQuery(QueryRequest request);
    };
}

#endif