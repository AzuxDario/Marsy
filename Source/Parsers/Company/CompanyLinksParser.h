#ifndef MARSY_COMPANY_COMPANYLINKSPARSER_H
#define MARSY_COMPANY_COMPANYLINKSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/CompanyLinksModel.h"
#include "../../Const/Company/CompanyLinksConst.h"

using json = nlohmann::json;

namespace Marsy
{
    class CompanyLinksParser : public Parser, private CompanyLinksConst
    {
    public:
        CompanyLinksParser();
        CompanyLinksModel parseLinks(const json &input);
    };
}

#endif