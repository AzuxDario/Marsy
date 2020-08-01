#ifndef MARSY_LANDPADS_LANDPADSERVICE_H
#define MARSY_LANDPADS_LANDPADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Landpads/LandpadModel.h"
#include "../../Parsers/Landpads/LandpadParser.h"

using Marsy::IConnector;
using Marsy::LandpadModel;
using Marsy::LandpadParser;

namespace Marsy
{
    class LandpadService : public Service<LandpadModel, LandpadParser>
    {
    private:
        const std::string apiLandpadsUrl = apiBaseUrl + "/landpads";
    public:
        LandpadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<LandpadModel> getLandpad(std::string id);
        ServiceVectorResponse<LandpadModel> getLandpadVector();
        ServiceQueryResponse<LandpadModel> getLandpadQuery(QueryRequest request);
    };
}

#endif