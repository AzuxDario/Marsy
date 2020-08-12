# Marsy

[![License](https://img.shields.io/github/license/AzuxDario/Marsy.svg)](https://github.com/AzuxDario/Marsy/blob/master/LICENSE)
[![Stars](https://img.shields.io/github/stars/AzuxDario/Marsy.svg)](https://github.com/AzuxDario/Marsy/stargazers)
[![Issues](https://img.shields.io/github/issues/AzuxDario/Marsy.svg)](https://github.com/AzuxDario/Marsy/issues)

Marsy is a library that allow you to deserialize and manage data returned by [SpaceX API](https://github.com/r-spacex/SpaceX-API). Marsy currently support V4 of API.

- [Usage](#usage)
    - [Start](#start)
    - [Queries](#queries)
    - [Size of binary in debug mode](#size-of-binary-in-debug-mode)
- [Things you should be aware of](#things-you-should-be-aware-of)
    - [Asynchronous](#asynchronous)   
    - [Internet connection](#internet-connection)
    - [Dates parsing](#dates-parsing)
- [Sample code](#sample-code)
- [What next will be done](#what-next-will-be-done)
- [External libraries](#external-libraries)

# Usage
## Start
To use it just add source files to your project.

You can use functions provided by services or write your own services on top of provided parsers. Remember to look [here](#things-you-should-be-aware-of) before start.

Library uses C++17 features. You need to remember it, when you compile your program.

## Queries
SpaceX API uses [queries](https://github.com/r-spacex/SpaceX-API/blob/master/docs/v4/queries.md) to filter data. They're based on [mongoose-paginate](https://github.com/aravindnc/mongoose-paginate-v2).

You can build simple `query` with `QueryBuilder` or make one on your own based on `nlohmann::json` [documentation](https://github.com/nlohmann/json).

You can build simple `options -> select` with `SortBuilder` or make one on your own based on `nlohmann::json` [documentation](https://github.com/nlohmann/json).

Currently Marsy doesn't provide query builder for these: `options -> select`, `options -> populate`  You need to write them based on `nlohmann::json` [documentation](https://github.com/nlohmann/json).

| Field | Type  | Docs |
|---|---|---|
| `query` | `nlohmann::json` | [link](https://docs.mongodb.com/manual/tutorial/query-documents/) |
| `options -> select` | `nlohmann::json` | [link](https://mongoosejs.com/docs/api.html#query_Query-select) |
| `options -> sort` | `nlohmann::json` | [link](https://mongoosejs.com/docs/api.html#query_Query-sort) |
| `options -> populate` | `nlohmann::json` | [link](https://mongoosejs.com/docs/api.html#query_Query-populate) |

## Size of binary in debug mode
Since Marsy includes [JSON](https://github.com/nlohmann/json) in several classes, output program can be huge when compiled in debug mode (I achieved 60MB binaries). Remember to roll it out as release, when you done with testing.

# Things you should be aware of
## Asynchronous
Currently functions are synchronous. Don't call them from UI thread. Use second thread or features like `std::future`.

## Internet connection
Marsy doesn't handle internet connection, so you need to provide implementation of `IConnection` interface.  Enum `ResponseStatus` is to help you handle different statuses returned by API. Service will parse returned JSON only when status is `ResponseStatus::ok`.

There are 2 reasons why I made is as it is:
 * C++ doesn't have internet connection in STL yet. I did not want to include big library or use different system APIs to provide support for more than one platform e.g. (WinAPI, POSIX etc.),
 * maybe you already have library with internet connection in your project or you want to use one that you like the most.

**However**
I made `IConnector` implementation based on curl and curlcpp. You can find it [here](https://github.com/AzuxDario/Marsy-CurlConnector).

## Dates parsing
Marsy doesn't parse dates returned by API. They're stored as strings.

# Sample code
```cpp
#include <iostream>
#include <memory>

#include "Connection/Implementation/CurlConnector.h"
#include "Services/Capsules/CapsuleService.h"

using namespace Marsy;

int main()
{
    std::shared_ptr<IConnector> conn = std::make_shared<CurlConnector>();
    CapsuleService capsuleService(conn);
    ServiceResponse<CapsuleModel> capsuleResponse = capsuleService.getCapsule("5e9e2c5bf35918ed873b2664");
    CapsuleModel capsule = capsuleResponse.object;
    std::cout << "serial " << capsule.serial.value() << std::endl;
    std::cout << "reuseCount " << capsule.reuseCount.value() << std::endl;
    std::cout << "waterLandings " << capsule.waterLandings.value() << std::endl;
    std::cout << "landLandings " << capsule.landLandings.value() << std::endl;
    std::cout << "lastUpdate " << capsule.lastUpdate.value() << std::endl;
    for(auto i : capsule.launches.value())
    {
        std::cout << "launches " << i << std::endl;
    }
    std::cout << "id " << capsule.id.value() << std::endl;
}
```

# What next will be done

Library testing and optimization. Also I want to make IConnector implementation based on curl in different repo.

# External libraries
 * [JSON](https://github.com/nlohmann/json)