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
        core.serial = parseStringNullable(input, "serial");
        core.block = parseIntNullable(input, "block");
        core.status = parseCoreStatus(input, "status");
        core.reuseCount = parseIntNullable(input, "reuse_count").value_or(core.reuseCount.value());
        core.rtlsAttemps = parseIntNullable(input, "rtls_attempts").value_or(core.rtlsAttemps.value());
        core.rtlsLandings = parseIntNullable(input, "rtls_landings").value_or(core.rtlsLandings.value());
        core.asdsAttemds = parseIntNullable(input, "asds_attempts").value_or(core.asdsAttemds.value());
        core.asdsLandings = parseIntNullable(input, "asds_landings").value_or(core.asdsLandings.value());
        core.lastUpdate = parseStringNullable(input, "last_update");
        core.launches = parseArrayOfStringNullable(input, "launches");
        core.id = parseStringNullable(input, "id");

        return core;
    }

    std::optional<CoreStatus> CoreParser::parseCoreStatus(const json &input, const std::string &name)
    {
        std::string status = parseString(input, name);
        if(status == "active")
        {
            return CoreStatus::active;
        }
        else if(status == "inactive")
        {
            return CoreStatus::inactive;
        }
        else if(status == "unknown")
        {
            return CoreStatus::unknown;
        }
        else if(status == "expended")
        {
            return CoreStatus::expended;
        }
        else if(status == "lost")
        {
            return CoreStatus::lost;
        }
        else if(status == "retried")
        {
            return CoreStatus::retried;
        }
        else
        {
            return std::nullopt;
        }
        
    }
}
