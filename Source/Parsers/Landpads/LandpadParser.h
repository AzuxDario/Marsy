#ifndef MARSY_LANDPADS_LANDPADPARSER_H
#define MARSY_LANDPADS_LANDPADPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "../../Models/Landpads/LandpadModel.h"
#include "../../Const/Landpads/LandpadConst.h"

using json = nlohmann::json;
using Marsy::Models::Landpad::LandpadModel;
using Marsy::Models::Landpad::LandpadStatus;
using Marsy::Const::Landpad::LandpadConst;

namespace Marsy::Parsers::Landpad
{
    class LandpadParser : public Parser, public IParser<LandpadModel>, private LandpadConst
    {
    public:
        LandpadParser();
    protected:
        LandpadModel parseOne(const json &input) override;
    private:
        std::optional<LandpadStatus> parseLandpadStatus(const json &input, const std::string &name);
    };
}

#endif