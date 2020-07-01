#include "PayloadWeightsParser.h"

namespace Marsy::Parsers::RocketsParser
{
    PayloadWeightsParser::PayloadWeightsParser()
    {

    }

    std::vector<PayloadWeights> PayloadWeightsParser::parsePayloadWeights(const std::string &input)
    {
        std::vector<PayloadWeights> payloadWeights;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                payloadWeights.push_back(parseObject(it.value()));
            }
        }

        return payloadWeights;
    }

    PayloadWeights PayloadWeightsParser::parseObject(const json &input)
    {
        PayloadWeights payloadWeights;
        payloadWeights.id = parseStringNullable(input, strId);
        payloadWeights.name = parseStringNullable(input, strName);
        payloadWeights.kilograms = parseDoubleNullable(input, strKg);
        payloadWeights.pounds = parseDoubleNullable(input, strLb);

        return payloadWeights;
    }

}
