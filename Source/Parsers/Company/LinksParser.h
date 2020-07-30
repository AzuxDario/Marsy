#ifndef MARSY_COMPANY_LINKSPARSER_H
#define MARSY_COMPANY_LINKSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/LinksModel.h"
#include "../../Const/Company/LinksConst.h"

using json = nlohmann::json;
using Marsy::Models::Company::LinksModel;
using Marsy::Const::Company::LinksConst;

namespace Marsy::Parsers::Company
{
    class LinksParser : public Parser, private LinksConst
    {
    public:
        LinksParser();
        LinksModel parseLinks(const json &input);
    };
}

#endif