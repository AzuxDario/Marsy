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
#include "../../Const/Company/CompanyConst.h"

using json = nlohmann::json;
using Marsy::Models::Company::HeadquartersModel;
using Marsy::Models::Company::LinksModel;
using Marsy::Models::Company::CompanyModel;
using Marsy::Parsers::Company::HeadquartersParser;
using Marsy::Parsers::Company::LinksParser;
using Marsy::Const::Company::CompanyConst;

namespace Marsy::Parsers::Company
{
    class CompanyParser : public Parser, public IParser<CompanyModel>, private CompanyConst
    {
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