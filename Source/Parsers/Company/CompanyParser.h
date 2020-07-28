#ifndef MARSY_COMPANY_COMPANYPARSER_H
#define MARSY_COMPANY_COMPANYPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "HeadquartersParser.h"
#include "LinksParser.h"
#include "../../Models/Company/CompanyModel.h"
#include "../../Models/Company/HeadquartersModel.h"
#include "../../Models/Company/LinksModel.h"

using json = nlohmann::json;
using Marsy::Models::Company::HeadquartersModel;
using Marsy::Models::Company::LinksModel;
using Marsy::Models::Company::CompanyModel;
using Marsy::Parsers::Company::HeadquartersParser;
using Marsy::Parsers::Company::LinksParser;

namespace Marsy::Parsers::Company
{
    class CompanyParser : public Parser, public IParser<CompanyModel>
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
    protected:
        CompanyModel parseOne(const json &input) override;
    private:
        std::optional<HeadquartersModel> parseHeadquarter(const json &input, const std::string &name);
        std::optional<LinksModel> parseLinks(const json &input, const std::string &name);
    };
}

#endif