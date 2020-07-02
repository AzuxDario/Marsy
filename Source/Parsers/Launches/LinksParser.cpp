#include "LinksParser.h"

namespace Marsy::Parsers::LaunchesParser
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

    std::optional<Flickr> LinksParser::parseFlickr(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            FlickrParser flickrParser;
            return flickrParser.parseFlickr(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<Patch> LinksParser::parsePatch(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            PatchParser patchParser;
            return patchParser.parsePatch(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<Reddit> LinksParser::parseReddit(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            RedditParser redditParser;
            return redditParser.parseReddit(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

}
