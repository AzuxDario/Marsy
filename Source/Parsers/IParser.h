#ifndef MARSY_IPARSER_H
#define MARSY_IPARSER_H

#include <string>
#include <vector>

#include "../Libraries/JSON/json.hpp"

using json = nlohmann::json;

namespace Marsy::Parsers
{
    template <class T>
    class IParser
    {
    public:
        IParser() {};
        virtual T parseObject(const std::string &input) = 0;
        virtual std::vector<T> parseVector(const std::string &input) = 0;
    };
}

#endif