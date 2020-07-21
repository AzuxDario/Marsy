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
        T parseObject(const std::string &input)
        {
            json j = json::parse(input);
            return parseOne(j);
        }

        std::vector<T> parseVector(const std::string &input)
        {
            std::vector<T> vec;
            json j = json::parse(input);

            if(j.is_array())
            {
                for (json::iterator it = j.begin(); it != j.end(); ++it)
                {
                    vec.push_back(parseOne(it.value()));
                }
            }

            return vec;
        }

    protected:
        virtual T parseOne(const json &input) = 0;
    };
}

#endif