#include "PatchParser.h"

namespace Marsy
{
    PatchParser::PatchParser()
    {

    }

    PatchModel PatchParser::parsePatch(const json &input)
    {
        PatchModel patch;
        patch.small = parseStringNullable(input, strSmall);
        patch.large = parseStringNullable(input, strLarge);

        return patch;
    }
}
