#include "PatchParser.h"

namespace Marsy::Parsers::LaunchesParser
{
    PatchParser::PatchParser()
    {

    }

    Patch PatchParser::parsePatch(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Patch PatchParser::parseObject(const json &input)
    {
        Patch patch;
        patch.small = parseStringNullable(input, strSmall);
        patch.large = parseStringNullable(input, strLarge);

        return patch;
    }

}
