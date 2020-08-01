#ifndef MARSY_COMPANY_COMPANYPARSER_H
#define MARSY_COMPANY_COMPANYPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "HeadquartersParser.h"
#include "CompanyLinksParser.h"
#include "../../Models/Company/CompanyModel.h"
#include "../../Models/Company/HeadquartersModel.h"
#include "../../Models/Company/CompanyLinksModel.h"
#include "../../Const/Company/CompanyConst.h"

using json = nlohmann::json;
using Marsy::HeadquartersModel;
using Marsy::CompanyLinksModel;
using Marsy::CompanyModel;
using Marsy::HeadquartersParser;
using Marsy::CompanyLinksParser;
using Marsy::CompanyConst;

namespace Marsy
{
    class CompanyParser : public Parser, public IParser<CompanyModel>, private CompanyConst
    {
    public:
        CompanyParser();
    protected:
        CompanyModel parseOne(const json &input) override;
    private:
        std::optional<HeadquartersModel> parseHeadquarter(const json &input, const std::string &name);
        std::optional<CompanyLinksModel> parseLinks(const json &input, const std::string &name);
    };
}

#endif