#ifndef MARSY_COMPANY_HEADQUARTERSPARSER_H
#define MARSY_COMPANY_HEADQUARTERSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/HeadquartersModel.h"
#include "../../Const/Company/HeadquartersConst.h"

using json = nlohmann::json;
using Marsy::HeadquartersModel;
using Marsy::HeadquartersConst;

namespace Marsy
{
    class HeadquartersParser : public Parser, private HeadquartersConst
    {
    public:
        HeadquartersParser();
        HeadquartersModel parseHeadquarters(const json &input);
    };
}

#endif