#ifndef MARSY_COMPANY_COMPANYLINKS_H
#define MARSY_COMPANY_COMPANYLINKS_H

#include <string>
#include <optional>

namespace Marsy
{
    struct CompanyLinksModel
    {
        std::optional<std::string> website;
        std::optional<std::string> flickr;
        std::optional<std::string> twitter;
        std::optional<std::string> elonTwitter;
    };
}

#endif