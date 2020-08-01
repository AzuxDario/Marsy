#include "CompanyService.h"

namespace Marsy
{
    CompanyService::CompanyService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<CompanyModel> CompanyService::getCompany()
    {
        return getObject(apiCompanyUrl);
    }
}