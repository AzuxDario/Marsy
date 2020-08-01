#ifndef MARSY_EXCEPTIONS_JSONEXCEPTION
#define MARSY_EXCEPTIONS_JSONEXCEPTION

#include <string>
#include <exception>

#include "../Libraries/JSON/json.hpp"

namespace Marsy
{
    class JsonException : public std::exception
    {
    private:
        std::string innerMessage;
        int innerId;
    public:
        JsonException(nlohmann::detail::exception jsonException);
        const char* what() const noexcept override;
        std::string getInnerMessage();
        int getInnerId();
    };
}

#endif