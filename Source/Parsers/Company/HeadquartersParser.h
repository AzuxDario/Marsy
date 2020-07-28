#ifndef MARSY_COMPANY_HEADQUARTERSPARSER_H
#define MARSY_COMPANY_HEADQUARTERSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/HeadquartersModel.h"

using json = nlohmann::json;
using Marsy::Models::Company::HeadquartersModel;

namespace Marsy::Parsers::Company
{
    class HeadquartersParser : public Parser
    {
    private:
        const std::string strAddress = "address";
        const std::string strCity = "city";
        const std::string strState = "state";
    public:
        HeadquartersParser();
        HeadquartersModel parseHeadquarters(const json &input);
    };
}

#endif