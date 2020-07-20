#ifndef MARSY_LANDPADS_LANDPADSERVICE_H
#define MARSY_LANDPADS_LANDPADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Landpads/Landpad.h"
#include "../../Parsers/Landpads/LandpadParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::LandpadModel::Landpad;
using Marsy::Parsers::LandpadParser::LandpadParser;

namespace Marsy::Services::LandpadService
{
    class LandpadService : public Service<Landpad, LandpadParser>
    {
    private:
        const std::string apiLandpadsUrl = apiBaseUrl + "/landpads";
    public:
        LandpadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Landpad> getLandpad(std::string id);
        ServiceVectorResponse<Landpad> getLandpadVector();
    };
}

#endif