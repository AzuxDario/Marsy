#include "FlickrParser.h"

namespace Marsy::Parsers::LaunchParser
{
    FlickrParser::FlickrParser()
    {

    }

    Flickr FlickrParser::parseFlickr(const json &input)
    {
        Flickr flickr;
        flickr.small = parseArrayOfStringNullable(input, strSmall);
        flickr.original = parseArrayOfStringNullable(input, strOriginal);

        return flickr;
    }
}
