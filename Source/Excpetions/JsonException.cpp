#include "JsonException.h"

namespace Marsy::Exceptions
{
    JsonException::JsonException(nlohmann::detail::exception jsonException)
    {
        innerMessage = jsonException.what();
        innerId = jsonException.id;
    }

    const char* JsonException::what() const noexcept
    {
        return "Json parsng library threw exception.";
    }

    std::string JsonException::getInnerMessage()
    {
        return innerMessage;
    }

    int JsonException::getInnerId()
    {
        return innerId;
    }
}