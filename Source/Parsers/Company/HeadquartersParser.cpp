#include "HeadquartersParser.h"

namespace Marsy::Parsers::Company
{
    HeadquartersParser::HeadquartersParser()
    {

    }

    HeadquartersModel HeadquartersParser::parseHeadquarters(const json &input)
    {
        HeadquartersModel headquarters;
        headquarters.address = parseStringNullable(input, strAddress);
        headquarters.city = parseStringNullable(input, strCity);
        headquarters.state = parseStringNullable(input, strState);

        return headquarters;
    }
}
