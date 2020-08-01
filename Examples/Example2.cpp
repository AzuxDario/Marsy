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