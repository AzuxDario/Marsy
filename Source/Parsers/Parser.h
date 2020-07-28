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
        std::optional<long long> parseLongLongNullable(const json &input, const std::string &name);
        std::optional<double> parseDoubleNullable(const json &input, const std::string &name);
        std::string parseString(const json &input, const std::string &name);
        std::optional<std::string> parseStringNullable(const json &input, const std::string &name);
        bool parseBool(const json &input, const std::string &name);
        std::optional<bool> parseBoolNullable(const json &input, const std::string &name);
        std::optional<std::vector<int>> parseArrayOfIntNullable(const json &input, const std::string &name);
        std::optional<std::vector<std::string>> parseArrayOfStringNullable(const json &input, const std::string &name);
    };
}

#endif