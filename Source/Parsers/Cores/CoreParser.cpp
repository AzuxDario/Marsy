#include "CoreParser.h"

namespace Marsy::Parsers::CoreParser
{
    CoreParser::CoreParser()
    {

    }

    Core CoreParser::parseCore(const std::string &input)
    {
        json j = json::parse(input);
        return parseObject(j);
    }

    std::vector<Core> CoreParser::parseCores(const std::string &input)
    {
        std::vector<Core> cores;
        json j = json::parse(input);

        if(j.is_array())
        {
            for (json::iterator it = j.begin(); it != j.end(); ++it)
            {
                cores.push_back(parseObject(it.value()));
            }
        }

        return cores;
    }

    Core CoreParser::parseObject(const json &input)
    {
        Core core;
        core.serial = parseStringNullable(input, strSerial);
        core.block = parseIntNullable(input, strBlock);
        core.status = parseCoreStatus(input, strStatus);
        core.reuseCount = parseIntNullable(input, strReuseCount).value_or(core.reuseCount.value());
        core.rtlsAttemps = parseIntNullable(input, strRtlsAttepmts).value_or(core.rtlsAttemps.value());
        core.rtlsLandings = parseIntNullable(input, strRtlsLandings).value_or(core.rtlsLandings.value());
        core.asdsAttemds = parseIntNullable(input, strAsdsAttempts).value_or(core.asdsAttemds.value());
        core.asdsLandings = parseIntNullable(input, strAsdsLandings).value_or(core.asdsLandings.value());
        core.lastUpdate = parseStringNullable(input, strLastUpdate);
        core.launches = parseArrayOfStringNullable(input, strLaunches);
        core.id = parseStringNullable(input, strId);

        return core;
    }

    std::optional<CoreStatus> CoreParser::parseCoreStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == strStatusActive)
        {
            return CoreStatus::active;
        }
        else if(status == strStatusInactive)
        {
            return CoreStatus::inactive;
        }
        else if(status == strStatusUnknown)
        {
            return CoreStatus::unknown;
        }
        else if(status == strStatusExpended)
        {
            return CoreStatus::expended;
        }
        else if(status == strStatusLost)
        {
            return CoreStatus::lost;
        }
        else if(status == strStatusRetired)
        {
            return CoreStatus::retired;
        }
        else
        {
            return std::nullopt;
        }
        
    }
}
