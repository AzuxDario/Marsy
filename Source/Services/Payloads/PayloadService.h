#ifndef MARSY_PAYLOADS_PAYLOADSERVICE_H
#define MARSY_PAYLOADS_PAYLOADSERVICE_H

#include <string>
#include <memory>

#include "../Service.h"
#include "../../Connection/Interface/IConnector.h"
#include "../../Models/Payloads/PayloadModel.h"
#include "../../Parsers/Payloads/PayloadParser.h"

using Marsy::IConnector;
using Marsy::PayloadModel;
using Marsy::PayloadParser;

namespace Marsy
{
    class PayloadService : public Service<PayloadModel, PayloadParser>
    {
    private:
        const std::string apiPayloadsUrl = apiBaseUrl + "/payloads";
    public:
        PayloadService(std::shared_ptr<IConnector> connector);
        ServiceResponse<PayloadModel> getPayload(std::string id);
        ServiceVectorResponse<PayloadModel> getPayloadVector();
        ServiceQueryResponse<PayloadModel> getPayloadQuery(QueryRequest request);
    };
}

#endif