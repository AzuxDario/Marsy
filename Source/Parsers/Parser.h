#ifndef MARSY_PARSER_H
#define MARSY_PARSER_H

#include <string>
#include <vector>
#include <optional>

#include "../Libraries/JSON/json.hpp"

using json = nlohmann::json;

namespace Marsy::Parsers
{
    class Parser
    {
    public:
        Parser();
    protected:
        int parseInt(const json &input, const std::string &name);
        std::optional<int> parseIntNullable(const json &input, const std::string &name);
        float parseFloat(const json &input, const std::string &name);
        std::optional<float> parseFloatNullable(const json &input, const std::string &name);
        std::string parseString(const json &input, const std::string &name);
        std::optional<std::string> parseStringNullable(const json &input, const std::string &name);
        bool parseBool(const json &input, const std::string &name);
        std::optional<bool> parseBoolNullable(const json &input, const std::string &name);
        std::vector<std::string> parseArrayOfString(const json &input, const std::string &name);
    };
}

#endif