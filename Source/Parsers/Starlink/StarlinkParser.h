#ifndef MARSY_STARLINK_STARLINKPARSER_H
#define MARSY_STARLINK_STARLINKPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../IParser.h"
#include "SpaceTrackParser.h"
#include "../../Models/Starlink/StarlinkModel.h"
#include "../../Models/Starlink/SpaceTrackModel.h"
#include "../../Const/Starlink/StarlinkConst.h"

using json = nlohmann::json;
using Marsy::Models::Starlink::StarlinkModel;
using Marsy::Models::Starlink::SpaceTrackModel;
using Marsy::Const::Starlink::StarlinkConst;

namespace Marsy::Parsers::Starlink
{
    class StarlinkParser : public Parser, public IParser<StarlinkModel>, private StarlinkConst
    {
    public:
        StarlinkParser();
    protected:
        StarlinkModel parseOne(const json &input) override;
    private:
        std::optional<SpaceTrackModel> parseSpaceTrack(const json &input, const std::string &name);
    };
}

#endif