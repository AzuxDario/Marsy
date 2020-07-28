#ifndef MARSY_LANDPADS_LANDPADSERVICE_H
#define MARSY_LANDPADS_LANDPADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Landpads/LandpadModel.h"
#include "../../Parsers/Landpads/LandpadParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::Landpad::LandpadModel;
using Marsy::Parsers::Landpad::LandpadParser;

namespace Marsy::Services::Landpad
{
    class LandpadService : public Service<LandpadModel, LandpadParser>
    {
    private:
        const std::string apiLandpadsUrl = apiBaseUrl + "/landpads";
    public:
        LandpadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<LandpadModel> getLandpad(std::string id);
        ServiceVectorResponse<LandpadModel> getLandpadVector();
    };
}

#endif