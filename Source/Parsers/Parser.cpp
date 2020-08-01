#include "Parser.h"

namespace Marsy
{
    Parser::Parser()
    {

    }

    int Parser::parseInt(const json &input, const std::string &name)
    {
        if(input.contains(name) && input[name].is_number())
        {
            return input[name].get<int>();
        }
        else
        {
            return 0;
        }
    }

    std::optional<int> Parser::parseIntNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_number())
        {
            return input[name].get<int>();
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<long long> Parser::parseLongLongNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_number())
        {
            return input[name].get<long long>();
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<double> Parser::parseDoubleNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_number())
        {
            return input[name].get<double>();
        }
        else
        {
            return std::nullopt;
        }
    }

    std::string Parser::parseString(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_string())
        {
            return input[name].get<std::string>();
        }
        else
        {
            return "";
        }
    }

    std::optional<std::string> Parser::parseStringNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_string())
        {
            return input[name].get<std::string>();
        }
        else
        {
            return std::nullopt;
        }
    }

    bool Parser::parseBool(const json &input, const std::string &name)
    {
        if(input.contains(name) && input[name].is_boolean())
        {
            return input[name].get<bool>();
        }
        else
        {
            return false;
        }
    }

    std::optional<bool> Parser::parseBoolNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_boolean())
        {
            return input[name].get<bool>();
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<std::vector<int>> Parser::parseArrayOfIntNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            return input[name].get<std::vector<int>>();
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<std::vector<std::string>> Parser::parseArrayOfStringNullable(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_array())
        {
            return input[name].get<std::vector<std::string>>();
        }
        else
        {
            return std::nullopt;
        }
    }
}