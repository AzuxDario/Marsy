#include "CompanyParser.h"

namespace Marsy::Parsers::CompanyParser
{
    CompanyParser::CompanyParser()
    {

    }

    Company CompanyParser::parseCompany(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Company CompanyParser::parseObject(const json &input)
    {
        Company company;
        company.name = parseStringNullable(input, strName);
        company.founder = parseStringNullable(input, strFounder);
        company.founded = parseIntNullable(input, strFounded);
        company.employees = parseIntNullable(input, strEmployees);
        company.vehicles = parseIntNullable(input, strVehicles);
        company.launchSites = parseIntNullable(input, strLaunchSites);
        company.testSites = parseIntNullable(input, strTestSites);
        company.ceo = parseStringNullable(input, strCeo);
        company.cto = parseStringNullable(input, strCto);
        company.coo = parseStringNullable(input, strCoo);
        company.ctoPropulsion = parseStringNullable(input, strCtoPropulsion);
        company.valuation = parseLongLongNullable(input, strValuation);
        company.headquarters = parseHeadquarter(input, strHeadquarters);
        company.links = parseLinks(input, strLinks);
        company.summary = parseStringNullable(input, strSummary);
        company.id = parseStringNullable(input, strId);

        return company;
    }

    std::optional<Headquarters> CompanyParser::parseHeadquarter(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            HeadquartersParser headquartersParser;
            return headquartersParser.parseHeadquarters(input);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<Links> CompanyParser::parseLinks(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            LinksParser linksParser;
            return linksParser.parseLinks(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}