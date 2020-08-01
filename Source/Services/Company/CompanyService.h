#ifndef MARSY_COMPANY_COMPANYSERVICE_H
#define MARSY_COMPANY_COMPANYSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Company/CompanyModel.h"
#include "../../Parsers/Company/CompanyParser.h"

using Marsy::IConnector;
using Marsy::CompanyModel;
using Marsy::CompanyParser;

namespace Marsy
{
    class CompanyService : public Service<CompanyModel, CompanyParser>
    {
    private:
        const std::string apiCompanyUrl = apiBaseUrl + "/company";
    public:
        CompanyService(std::shared_ptr<IConnector> connector);
        ServiceResponse<CompanyModel> getCompany();
    };
}

#endif