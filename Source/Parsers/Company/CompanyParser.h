#ifndef MARSY_COMPANY_COMPANYPARSER_H
#define MARSY_COMPANY_COMPANYPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "HeadquartersParser.h"
#include "LinksParser.h"
#include "../../Models/Company/Company.h"
#include "../../Models/Company/Headquarters.h"
#include "../../Models/Company/Links.h"

using json = nlohmann::json;
using Marsy::Models::Company::Headquarters;
using Marsy::Models::Company::Links;
using Marsy::Models::Company::Company;
using Marsy::Parsers::CompanyParser::HeadquartersParser;
using Marsy::Parsers::CompanyParser::LinksParser;

namespace Marsy::Parsers::CompanyParser
{
    class CompanyParser : public Parser
    {
    private:
        const std::string strName = "name";
        const std::string strFounder = "founder";
        const std::string strFounded = "founded";
        const std::string strEmployees = "employees";
        const std::string strVehicles = "vehicles";
        const std::string strLaunchSites = "launch_sites";
        const std::string strTestSites = "test_sites";
        const std::string strCeo = "ceo";
        const std::string strCto = "cto";
        const std::string strCoo = "coo";
        const std::string strCtoPropulsion = "cto_propulsion";
        const std::string strValuation = "valuation";
        const std::string strHeadquarters = "headquarters";
        const std::string strLinks = "links";
        const std::string strSummary = "summary";
        const std::string strId = "id";
    public:
        CompanyParser();
        Company parseCompany(const std::string &input);
    private:
        Company parseObject(const json &input);
        std::optional<Headquarters> parseHeadquarter(const json &input, const std::string &name);
        std::optional<Links> parseLinks(const json &input, const std::string &name);
    };
}

#endif