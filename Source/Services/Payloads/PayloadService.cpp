#include "PayloadService.h"

namespace Marsy
{
    PayloadService::PayloadService(std::shared_ptr<IConnector> connector) : Service(connector)
    {
        
    }

    ServiceResponse<PayloadModel> PayloadService::getPayload(std::string id)
    {
        return getObject(apiPayloadsUrl + "/" + id);
    }

    ServiceVectorResponse<PayloadModel> PayloadService::getPayloadVector()
    {
        return getVector(apiPayloadsUrl);
    }

    ServiceQueryResponse<PayloadModel> PayloadService::getPayloadQuery(QueryRequest request)
    {
        return getQuery(apiPayloadsUrl + apiQueryUrl, request);
    }
}