#include "PayloadService.h"

namespace Marsy::Services::PayloadService
{
    PayloadService::PayloadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<Payload> PayloadService::getPayload(std::string id)
    {
        return getObject(apiPayloadsUrl + "/" + id);
    }

    ServiceVectorResponse<Payload> PayloadService::getPayloadVector()
    {
        return getVector(apiPayloadsUrl);
    }
}