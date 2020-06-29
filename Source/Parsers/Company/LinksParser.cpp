#include "LinksParser.h"

namespace Marsy::Parsers::CompanyParser
{
    LinksParser::LinksParser()
    {

    }

    Links LinksParser::parseLinks(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    Links LinksParser::parseObject(const json &input)
    {
        Links links;
        links.website = parseStringNullable(input, strWebsite);
        links.flickr = parseStringNullable(input, strFlickr);
        links.twitter = parseStringNullable(input, strTwitter);
        links.elonTwitter = parseStringNullable(input, strElonTwitter);

        return links;
    }

}
