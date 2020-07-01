#include "ThrusterParser.h"

namespace Marsy::Parsers::DragonParser
{
    ThrusterParser::ThrusterParser()
    {

    }

    std::vector<Thruster> ThrusterParser::parseThrusterVector(const std::string &input)
    {
        std::vector<Thruster> thrusters;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                thrusters.push_back(parseObject(it.value()));
            }
        }

        return thrusters;
    }

    Thruster ThrusterParser::parseObject(const json &input)
    {
        Thruster thruster;
        CommonInfoParser commonInfoParser;
        thruster.type = parseStringNullable(input, strType);
        thruster.amount = parseIntNullable(input, strAmount);
        thruster.pods = parseIntNullable(input, strPods);
        thruster.fuel1 = parseStringNullable(input, strFuel1);
        thruster.fuel2 = parseStringNullable(input, strFuel2);
        thruster.isp = parseIntNullable(input, strIsp);
        thruster.thrust = commonInfoParser.parseThrustInfo(input, strThrust);

        return thruster;
    }

}
