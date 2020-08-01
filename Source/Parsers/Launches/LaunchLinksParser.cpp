#include "LaunchLinksParser.h"

namespace Marsy
{
    LaunchLinksParser::LaunchLinksParser()
    {

    }

    LaunchLinksModel LaunchLinksParser::parseLinks(const json &input)
    {
        LaunchLinksModel links;
        links.patch = parsePatch(input, strPatch);
        links.reddit = parseReddit(input, strReddit);
        links.flickr = parseFlickr(input, strFlickr);
        links.presskit = parseStringNullable(input, strPresskit);
        links.webcast = parseStringNullable(input, strWebcast);
        links.youtubeId = parseStringNullable(input, strYoutubeId);
        links.article = parseStringNullable(input, strArticle);
        links.wikipedia = parseStringNullable(input, strWikipedia);

        return links;
    }

    std::optional<FlickrModel> LaunchLinksParser::parseFlickr(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            FlickrParser flickrParser;
            return flickrParser.parseFlickr(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<PatchModel> LaunchLinksParser::parsePatch(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            PatchParser patchParser;
            return patchParser.parsePatch(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<RedditModel> LaunchLinksParser::parseReddit(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            RedditParser redditParser;
            return redditParser.parseReddit(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
