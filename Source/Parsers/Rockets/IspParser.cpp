#include "IspParser.h"

namespace Marsy::Parsers::RocketsParser
{
    IspParser::IspParser()
    {

    }

    Isp IspParser::parseIsp(const json &input)
    {
        Isp isp;
        isp.seaLevel = parseDoubleNullable(input, strSeaLevel);
        isp.vacuum = parseDoubleNullable(input, strVacuum);

        return isp;
    }

}
