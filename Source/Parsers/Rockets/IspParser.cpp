#include "IspParser.h"

namespace Marsy::Parsers::RocketsParser
{
    IspParser::IspParser()
    {

    }

    Isp IspParser::parseIsp(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Isp IspParser::parseObject(const json &input)
    {
        Isp isp;
        isp.seaLevel = parseDoubleNullable(input, strSeaLevel);
        isp.vacuum = parseDoubleNullable(input, strVacuum);

        return isp;
    }

}
