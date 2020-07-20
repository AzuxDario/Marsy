#ifndef MARSY_COMPANY_COMPANYSERVICE_H
#define MARSY_COMPANY_COMPANYSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Company/Company.h"
#include "../../Parsers/Company/CompanyParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::CompanyModel::Company;
using Marsy::Parsers::CompanyParser::CompanyParser;

namespace Marsy::Services::CompanyService
{
    class CompanyService : public Service<Company, CompanyParser>
    {
    private:
        const std::string apiCompanyUrl = "/company";
    public:
        CompanyService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Company> getCompany();
    };
}

#endif