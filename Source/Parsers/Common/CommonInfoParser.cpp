#include "CommonInfoParser.h"

namespace Marsy::Parsers::CommonParser
{
    CommonInfoParser::CommonInfoParser()
    {

    }

    std::optional<MassInfo> CommonInfoParser::parseMassInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            MassInfoParser massInfoParser;
            return massInfoParser.parseMassInfo(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<SizeInfo> CommonInfoParser::parseSizeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SizeInfoParser sizeInfoParser;
            return sizeInfoParser.parseSizeInfo(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<ThrustInfo> CommonInfoParser::parseThrustInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            ThrustInfoParser thrustInfoParser;
            return thrustInfoParser.parseThrustInfo(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<VolumeInfo> CommonInfoParser::parseVolumeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            VolumeInfoParser volumeInfoParser;
            return volumeInfoParser.parseVolumeInfo(input[name].dump());
        }
        else
        {
            return std::nullopt;
        }
    }

}
