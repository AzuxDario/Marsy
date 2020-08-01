#include <iostream>
#include <vector>

#include "Connection/Interface/IConnector.h"
#include "Connection/Implementation/CurlConnector.h"

#include "Builders/Queries/QueryBuilder.h"
#include "Services/Response/Response.h"
#include "Services/Capsules/CapsuleService.h"
#include "Services/Company/CompanyService.h"
#include "Services/Core/CoreService.h"
#include "Services/Crew/CrewService.h"
#include "Services/Dragon/DragonService.h"
#include "Services/Landpads/LandpadService.h"
#include "Services/Launches/LaunchService.h"
#include "Services/Launchpads/LaunchpadService.h"
#include "Services/Payloads/PayloadService.h"
#include "Services/Roadster/RoadsterService.h"
#include "Services/Rockets/RocketService.h"
#include "Services/Ships/ShipService.h"
#include "Services/Starlink/StarlinkService.h"

using namespace Marsy;

int main()
{
    QueryRequest request;
    std::shared_ptr<IConnector> conn = std::make_shared<CurlConnector>();

    CapsuleService capsuleService(conn);
    ServiceResponse<CapsuleModel> capsuleResponse = capsuleService.getCapsule("5e9e2c5bf35918ed873b2664");
    ServiceQueryResponse<CapsuleModel> capsuleQuery = capsuleService.getCapsuleQuery(request);

    CompanyService companyService(conn);
    ServiceResponse<CompanyModel> companyResponse = companyService.getCompany();

    CoreService coreService(conn);
    ServiceVectorResponse<CoreModel> coreResponse = coreService.getCoreVector();
    ServiceQueryResponse<CoreModel> coreQuery = coreService.getCoreQuery(request);

    CrewService crewService(conn);
    ServiceVectorResponse<CrewModel> crewResponse = crewService.getCrewVector();
    ServiceQueryResponse<CrewModel> crewQuery = crewService.getCrewQuery(request);

    DragonService dragonService(conn);
    ServiceVectorResponse<DragonModel> dragonResponse = dragonService.getDragonVector();
    ServiceQueryResponse<DragonModel> dragonQuery = dragonService.getDragonQuery(request);

    LandpadService landpadService(conn);
    ServiceVectorResponse<LandpadModel> landpadResponse = landpadService.getLandpadVector();
    ServiceQueryResponse<LandpadModel> landpadQuery = landpadService.getLandpadQuery(request);

    LaunchService launchService(conn);
    ServiceVectorResponse<LaunchModel> launchResponse = launchService.getLaunchVector();
    ServiceQueryResponse<LaunchModel> launchQuery = launchService.getLaunchQuery(request);
    ServiceResponse<LaunchModel> launchNext = launchService.getNextLaunch();

    LaunchpadService launchpadService(conn);
    ServiceVectorResponse<LaunchpadModel> launchpadResponse = launchpadService.getLaunchpadVector();
    ServiceQueryResponse<LaunchpadModel> launchpadQuery = launchpadService.getLaunchpadQuery(request);

    PayloadService payloadService(conn);
    ServiceVectorResponse<PayloadModel> payloadResponse = payloadService.getPayloadVector();
    ServiceQueryResponse<PayloadModel> payloadQuery = payloadService.getPayloadQuery(request);

    RoadsterService roadsterService(conn);
    ServiceResponse<RoadsterModel> roadsterQuery = roadsterService.getRoadster();

    RocketService rocketService(conn);
    ServiceVectorResponse<RocketModel> rocketResponse = rocketService.getRocketVector();
    ServiceQueryResponse<RocketModel> rocketQuery = rocketService.getRocketQuery(request);

    ShipService shipService(conn);
    ServiceVectorResponse<ShipModel> shipResponse = shipService.getShipVector();
    ServiceQueryResponse<ShipModel> shipQuery = shipService.getShipQuery(request);

    StarlinkService starlinkService(conn);
    ServiceVectorResponse<StarlinkModel> starlinkResponse = starlinkService.getStarlinkVector();
    ServiceQueryResponse<StarlinkModel> starlinkQuery = starlinkService.getStarlinkQuery(request);
    return 0;
}