#include "CommonInfoParser.h"

namespace Marsy
{
    CommonInfoParser::CommonInfoParser()
    {

    }

    std::optional<MassInfoModel> CommonInfoParser::parseMassInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            MassInfoParser massInfoParser;
            return massInfoParser.parseMassInfo(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<SizeInfoModel> CommonInfoParser::parseSizeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            SizeInfoParser sizeInfoParser;
            return sizeInfoParser.parseSizeInfo(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<ThrustInfoModel> CommonInfoParser::parseThrustInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            ThrustInfoParser thrustInfoParser;
            return thrustInfoParser.parseThrustInfo(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

    std::optional<VolumeInfoModel> CommonInfoParser::parseVolumeInfo(const json &input, const std::string &name)
    {
        if(input.contains(name) && !input[name].is_null() && input[name].is_object())
        {
            VolumeInfoParser volumeInfoParser;
            return volumeInfoParser.parseVolumeInfo(input[name]);
        }
        else
        {
            return std::nullopt;
        }
    }

}
