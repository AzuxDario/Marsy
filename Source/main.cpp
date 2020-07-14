#include <iostream>

#include "Connection/Interface/IConnector.h"

#include "Parsers/Capsules/CapsuleParser.h"
#include "Parsers/Dragons/DragonParser.h"

using Marsy::Parsers::CapsuleParser::CapsuleParser;
using Marsy::Models::CapsuleModel::Capsule;
using Marsy::Parsers::DragonParser::DragonParser;
using Marsy::Models::DragonModel::Dragon;

int main()
{
    /*std::string dzejson = R"({"reuse_count":1,"water_landings":1,"land_landings":0,"last_update":"Reentered after three weeks in orbit","launches":["5eb87cdeffd86e000604b330"],"serial":"C101","status":"retired","id":"5e9e2c5bf35918ed873b2664"})";
    CapsuleParser capsuleParser;
    Capsule capsule = capsuleParser.parseCapsule(dzejson);
    std::cout << "serial " << capsule.serial.value() << std::endl;
    std::cout << "reuseCount " << capsule.reuseCount.value() << std::endl;
    std::cout << "waterLandings " << capsule.waterLandings.value() << std::endl;
    std::cout << "landLandings " << capsule.landLandings.value() << std::endl;
    std::cout << "lastUpdate " << capsule.lastUpdate.value() << std::endl;
    for(auto i : capsule.launches.value())
    {
        std::cout << "launches " << i << std::endl;
    }
    std::cout << "id " << capsule.id.value() << std::endl;*/

    std::string dragonik = R"({
    "heat_shield": {
        "material": "PICA-X",
        "size_meters": 3.6,
        "temp_degrees": 3000,
        "dev_partner": "NASA"
    },
    "launch_payload_mass": {
        "kg": 6000,
        "lb": 13228
    },
    "launch_payload_vol": {
        "cubic_meters": 25,
        "cubic_feet": 883
    },
    "return_payload_mass": {
        "kg": 3000,
        "lb": 6614
    },
    "return_payload_vol": {
        "cubic_meters": 11,
        "cubic_feet": 388
    },
    "pressurized_capsule": {
        "payload_volume": {
            "cubic_meters": 11,
            "cubic_feet": 388
        }
    },
    "trunk": {
        "trunk_volume": {
            "cubic_meters": 14,
            "cubic_feet": 494
        },
        "cargo": {
            "solar_array": 2,
            "unpressurized_cargo": true
        }
    },
    "height_w_trunk": {
        "meters": 7.2,
        "feet": 23.6
    },
    "diameter": {
        "meters": 3.7,
        "feet": 12
    },
    "first_flight": "2010-12-08",
    "flickr_images": [
        "https://www.spacex.com/sites/spacex/files/styles/media_gallery_large/public/2015_-_04_crs5_dragon_orbit13.jpg?itok=9p8_l7UP",
        "https://www.spacex.com/sites/spacex/files/styles/media_gallery_large/public/2012_-_4_dragon_grapple_cots2-1.jpg?itok=R2-SeuMX",
        "https://farm3.staticflickr.com/2815/32761844973_4b55b27d3c_b.jpg",
        "https://farm9.staticflickr.com/8618/16649075267_d18cbb4342_b.jpg"
    ],
    "name": "Dragon 1",
    "type": "capsule",
    "active": true,
    "crew_capacity": 0,
    "sidewall_angle_deg": 15,
    "orbit_duration_yr": 2,
    "dry_mass_kg": 4200,
    "dry_mass_lb": 9300,
    "thrusters": [
        {
            "type": "Draco",
            "amount": 18,
            "pods": 4,
            "fuel_1": "nitrogen tetroxide",
            "fuel_2": "monomethylhydrazine",
            "isp": 300,
            "thrust": {
                "kN": 0.4,
                "lbf": 90
            }
        }
    ],
    "wikipedia": "https://en.wikipedia.org/wiki/SpaceX_Dragon",
    "description": "Dragon is a reusable spacecraft developed by SpaceX, an American private space transportation company based in Hawthorne, California. Dragon is launched into space by the SpaceX Falcon 9 two-stage-to-orbit launch vehicle. The Dragon spacecraft was originally designed for human travel, but so far has only been used to deliver cargo to the International Space Station (ISS).",
    "id": "5e9d058759b1ff74a7ad5f8f"
})";
    DragonParser dragonParser;
    Dragon drago = dragonParser.parseDragon(dragonik);
    std::string id = drago.id.value_or("Shuka");
    return 0;
}