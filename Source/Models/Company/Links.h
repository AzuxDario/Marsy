#ifndef MARSY_COMPANY_LINKS_H
#define MARSY_COMPANY_LINKS_H

#include <string>
#include <optional>

namespace Marsy::Models::Company
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