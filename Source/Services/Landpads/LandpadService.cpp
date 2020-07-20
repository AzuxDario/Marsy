#include "LandpadService.h"

namespace Marsy::Services::LandpadService
{
    LandpadService::LandpadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Landpad> LandpadService::getLandpad(std::string id)
    {
        return getObject(apiLandpadsUrl + "/" + id);
    }

    ServiceVectorResponse<Landpad> LandpadService::getLandpadVector()
    {
        return getVector(apiLandpadsUrl);
    }
}