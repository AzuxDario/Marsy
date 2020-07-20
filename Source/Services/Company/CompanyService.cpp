#include "CompanyService.h"

namespace Marsy::Services::CompanyService
{
    CompanyService::CompanyService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Company> CompanyService::getCompany()
    {
        return getObject(apiBaseUrl + apiCompanyUrl);
    }
}