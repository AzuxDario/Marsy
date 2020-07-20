#ifndef MARSY_PAYLOADS_PAYLOADSERVICE_H
#define MARSY_PAYLOADS_PAYLOADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Payloads/Payload.h"
#include "../../Parsers/Payloads/PayloadParser.h"

using Marsy::Connection::IConnector;
using Marsy::Models::PayloadModel::Payload;
using Marsy::Parsers::PayloadParser::PayloadParser;

namespace Marsy::Services::PayloadService
{
    class PayloadService : public Service<Payload, PayloadParser>
    {
    private:
        const std::string apiPayloadsUrl = apiBaseUrl + "/payloads";
    public:
        PayloadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<Payload> getPayload(std::string id);
        ServiceVectorResponse<Payload> getPayloadVector();
    };
}

#endif