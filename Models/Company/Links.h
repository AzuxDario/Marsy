#ifndef LINKS_H
#define LINKS_H

#include <string>
#include <optional>

namespace Marsy
{
    struct Links
    {
        std::optional<std::string> website;
        std::optional<std::string> flickr;
        std::optional<std::string> twitter;
        std::optional<std::string> elonTwitter;
    };
}
#endif