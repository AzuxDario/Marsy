#include "LandpadService.h"

namespace Marsy::Services::Landpad
{
    LandpadService::LandpadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<LandpadModel> LandpadService::getLandpad(std::string id)
    {
        return getObject(apiLandpadsUrl + "/" + id);
    }

    ServiceVectorResponse<LandpadModel> LandpadService::getLandpadVector()
    {
        return getVector(apiLandpadsUrl);
    }
}