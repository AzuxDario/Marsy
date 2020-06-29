#ifndef MARSY_COMPANY_HEADQUARTERSPARSER_H
#define MARSY_COMPANY_HEADQUARTERSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/Headquarters.h"

using json = nlohmann::json;
using Marsy::Models::CompanyModel::Headquarters;

namespace Marsy::Parsers::CompanyParser
{
    class HeadquartersParser : public Parser
    {
    private:
        const std::string strAddress = "address";
        const std::string strCity = "city";
        const std::string strState = "state";
    public:
        HeadquartersParser();
        Headquarters parseHeadquarters(const std::string &input);
    private:
        Headquarters parseObject(const json &input);
    };
}

#endif