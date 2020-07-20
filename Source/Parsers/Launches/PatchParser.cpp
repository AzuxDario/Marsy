#include "PatchParser.h"

namespace Marsy::Parsers::LaunchParser
{
    PatchParser::PatchParser()
    {

    }

    Patch PatchParser::parsePatch(const json &input)
    {
        Patch patch;
        patch.small = parseStringNullable(input, strSmall);
        patch.large = parseStringNullable(input, strLarge);

        return patch;
    }
}
