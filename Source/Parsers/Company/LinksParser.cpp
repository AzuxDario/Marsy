#include "LinksParser.h"

namespace Marsy::Parsers::CompanyParser
{
    LinksParser::LinksParser()
    {

    }

    Links LinksParser::parseLinks(const json &input)
    {
        Links links;
        links.website = parseStringNullable(input, strWebsite);
        links.flickr = parseStringNullable(input, strFlickr);
        links.twitter = parseStringNullable(input, strTwitter);
        links.elonTwitter = parseStringNullable(input, strElonTwitter);

        return links;
    }
}
