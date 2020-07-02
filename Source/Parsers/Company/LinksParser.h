#ifndef MARSY_COMPANY_LINKSPARSER_H
#define MARSY_COMPANY_LINKSPARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../../Libraries/JSON/json.hpp"

#include "../Parser.h"
#include "../../Models/Company/Links.h"

using json = nlohmann::json;
using Marsy::Models::CompanyModel::Links;

namespace Marsy::Parsers::CompanyParser
{
    class LinksParser : public Parser
    {
    private:
        const std::string strWebsite = "website";
        const std::string strFlickr = "flickr";
        const std::string strTwitter = "twitter";
        const std::string strElonTwitter = "elon_twitter";
    public:
        LinksParser();
        Links parseLinks(const json &input);
    };
}

#endif