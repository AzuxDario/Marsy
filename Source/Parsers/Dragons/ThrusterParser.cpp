#include "ThrusterParser.h"

namespace Marsy::Parsers::DragonParser
{
    ThrusterParser::ThrusterParser()
    {

    }

    std::vector<Thruster> ThrusterParser::parseThrusterVector(const json &input)
    {
        std::vector<Thruster> thrusters;

        if(input.is_array())
        {
            for (auto it = input.begin(); it != input.end(); ++it)
            {
                Thruster thruster;
                CommonInfoParser commonInfoParser;
                thruster.type = parseStringNullable(it.value(), strType);
                thruster.amount = parseIntNullable(it.value(), strAmount);
                thruster.pods = parseIntNullable(it.value(), strPods);
                thruster.fuel1 = parseStringNullable(it.value(), strFuel1);
                thruster.fuel2 = parseStringNullable(it.value(), strFuel2);
                thruster.isp = parseIntNullable(it.value(), strIsp);
                thruster.thrust = commonInfoParser.parseThrustInfo(it.value(), strThrust);
                thrusters.push_back(thruster);
            }
        }

        return thrusters;
    }
}
