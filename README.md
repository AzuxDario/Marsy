# Marsy
<p align="center">
<a href="https://github.com/AzuxDario/Marsy/pulls?q=is%3Apr+is%3Aclosed"><img src="https://img.shields.io/github/issues-pr-closed-raw/AzuxDario/Marsy" alt="Closed pull requests"></img></a>
<a href="https://github.com/AzuxDario/Marsy/blob/master/LICENSE"><img src="https://img.shields.io/github/license/AzuxDario/Marsy" alt="License"></img></a>
</p>

Here will be C++ wrapper for [SpaceX API](https://github.com/r-spacex/SpaceX-API).

Marsy is a library that allow you to deserialize and manage data returned by [SpaceX API](https://github.com/r-spacex/SpaceX-API). Marsy currently support V4 of API.

# Usage
To use it just add source files to your project.

Library uses C++17 features. You need to remember it, when you compile your program.

## There's few things that Marsy doesn't provide:
### Internet connection
Marsy doesn't handle internet connection, so you need to provide implementation of `IConnection` interface.  Enum `ResponseStatus` is to help you handle different statuses returned by API. Service will parse returned JSON only when status is `ResponseStatus::ok`.

It's because C++ doesn't have internet connection in STL yet. I did not want to include big library or use different system APIs to provide support for more than one platform e.g. (WinAPI, POSIX etc.)

### Dates parsing
Marsy doesn't parse dates returned by API. They're stored as strings.

# Sample code
```cpp
#include <iostream>
#include <memory>

// Implementation isn't provided by Marsy.
#include "Connection/Implementation/MyConnector.h"
#include "Services/Capsules/CapsuleService.h"

using Marsy::Models::CapsuleModel::Capsule;
using Marsy::Services::CapsuleService::CapsuleService;

int main()
{
    std::shared_ptr<IConnector> conn = std::make_shared<MyConnector>();
    CapsuleService capsuleService(conn);
    Capsule capsule = capsuleService.getCapsule("5e9e2c5bf35918ed873b2664");
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

Next I'll focus on [queries](https://github.com/r-spacex/SpaceX-API/blob/master/docs/v4/queries.md), which are used in the API. 

# External libraries
 * [JSON](https://github.com/nlohmann/json)