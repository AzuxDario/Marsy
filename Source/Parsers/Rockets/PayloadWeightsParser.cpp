#include "PayloadWeightsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    PayloadWeightsParser::PayloadWeightsParser()
    {

    }

    std::vector<PayloadWeights> PayloadWeightsParser::parsePayloadWeightsVector(const json &input)
    {
        std::vector<PayloadWeights> payloadWeights;

        if(input.is_array())
        {
            for (auto it = input.begin(); it != input.end(); ++it)
            {
                PayloadWeights payloadWeight;
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
