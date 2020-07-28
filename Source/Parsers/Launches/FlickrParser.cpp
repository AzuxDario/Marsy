#include "FlickrParser.h"

namespace Marsy::Parsers::Launch
{
    FlickrParser::FlickrParser()
    {

    }

    FlickrModel FlickrParser::parseFlickr(const json &input)
    {
        FlickrModel flickr;
        flickr.small = parseArrayOfStringNullable(input, strSmall);
        flickr.original = parseArrayOfStringNullable(input, strOriginal);

        return flickr;
    }
}
