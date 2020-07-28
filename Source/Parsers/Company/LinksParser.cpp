#include "LinksParser.h"

namespace Marsy::Parsers::Company
{
    LinksParser::LinksParser()
    {

    }

    LinksModel LinksParser::parseLinks(const json &input)
    {
        LinksModel links;
        links.website = parseStringNullable(input, strWebsite);
        links.flickr = parseStringNullable(input, strFlickr);
        links.twitter = parseStringNullable(input, strTwitter);
        links.elonTwitter = parseStringNullable(input, strElonTwitter);

        return links;
    }
}
