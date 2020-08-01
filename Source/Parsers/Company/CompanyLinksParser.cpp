#include "CompanyLinksParser.h"

namespace Marsy
{
    CompanyLinksParser::CompanyLinksParser()
    {

    }

    CompanyLinksModel CompanyLinksParser::parseLinks(const json &input)
    {
        CompanyLinksModel links;
        links.website = parseStringNullable(input, strWebsite);
        links.flickr = parseStringNullable(input, strFlickr);
        links.twitter = parseStringNullable(input, strTwitter);
        links.elonTwitter = parseStringNullable(input, strElonTwitter);

        return links;
    }
}
