#include "FlickrParser.h"

namespace Marsy
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
