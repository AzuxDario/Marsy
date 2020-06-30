#include "ThrusterParser.h"

namespace Marsy::Parsers::DragonParser
{
    ThrusterParser::ThrusterParser()
    {

    }

    std::vector<Thruster> ThrusterParser::parseThrusters(const std::string &input)
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
        thruster.type = parseStringNullable(input, strType);
        thruster.amount = parseIntNullable(input, strAmount);
        thruster.pods = parseIntNullable(input, strPods);
        thruster.fuel1 = parseStringNullable(input, strFuel1);
        thruster.fuel2 = parseStringNullable(input, strFuel2);
        thruster.isp = parseIntNullable(input, strIsp);
        thruster.thrust = parseThrustInfo(input, strThrust);

        return thruster;
    }

    std::optional<ThrustInfo> ThrusterParser::parseThrustInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            ThrustInfoParser thrustInfoParser;
            return thrustInfoParser.parseThrustInfo(input);
        }
        else
        {
            return std::nullopt;
        }
    }

}
