#include "IspParser.h"

namespace Marsy
{
    IspParser::IspParser()
    {

    }

    IspModel IspParser::parseIsp(const json &input)
    {
        IspModel isp;
        isp.seaLevel = parseDoubleNullable(input, strSeaLevel);
        isp.vacuum = parseDoubleNullable(input, strVacuum);

        return isp;
    }

}
