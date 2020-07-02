#include "HeadquartersParser.h"

namespace Marsy::Parsers::CompanyParser
{
    HeadquartersParser::HeadquartersParser()
    {

    }

    Headquarters HeadquartersParser::parseHeadquarters(const json &input)
    {
        Headquarters headquarters;
        headquarters.address = parseStringNullable(input, strAddress);
        headquarters.city = parseStringNullable(input, strCity);
        headquarters.state = parseStringNullable(input, strState);

        return headquarters;
    }
}
