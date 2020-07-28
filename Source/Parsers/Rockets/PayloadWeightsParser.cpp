#include "PayloadWeightsParser.h"

namespace Marsy::Parsers::Rocket
{
    PayloadWeightsParser::PayloadWeightsParser()
    {

    }

    std::vector<PayloadWeightsModel> PayloadWeightsParser::parsePayloadWeightsVector(const json &input)
    {
        std::vector<PayloadWeightsModel> payloadWeights;

        if(input.is_array())
        {
            for (auto it = input.begin(); it != input.end(); ++it)
            {
                PayloadWeightsModel payloadWeight;
                payloadWeight.id = parseStringNullable(it.value(), strId);
                payloadWeight.name = parseStringNullable(it.value(), strName);
                payloadWeight.kilograms = parseDoubleNullable(it.value(), strKg);
                payloadWeight.pounds = parseDoubleNullable(it.value(), strLb);
                payloadWeights.push_back(payloadWeight);
            }
        }

        return payloadWeights;
    }
}
