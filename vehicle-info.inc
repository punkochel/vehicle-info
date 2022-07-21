#if defined __vehicle_info_included
    #endinput
#endif
#define __vehicle_info_included

#define MAX_VEHICLE_MODELS 212
#define MAX_VEHICLE_NAME 28

enum e_VehicleCategory {
    OFF_ROAD,
    SALOONS,
    SPORT,
    INDUSTRIAL,
    STATION_WAGONS,
    UNIQUE,
    PUBLIC_SERVICE,
    LOWRIDERS,
    RADIOC,
    HELICOPTERS,
    BOATS,
    TRAILERS,
    AIRPLANE,
    CONVERTIBLES,
    BIKES
};

enum e_VehicleType {
    CAR,
    HELICOPTE,
    BOAT,
    TRAILER,
    MOTORBIKE,
    TRAIN,
    PLANE,
    BIKE,
    RC
};

static vi_VehicleMaxSpeed[] = {
    88, 82, 104, 61, 74, 91, 62, 82, 55, 88,
    72, 123, 94, 62, 59, 107, 86, -1, 64, 83,
    81, 86, 78, 55, 75, -1, 96, 92, 87, 112,
    -1, 73, 53, 62, 93, -1, 83, 88, 80, 94,
    76, 42, 77, 71, 62, 91, -1, -1, 62, -1,
    -1, 108, -1, -1, -1, 88, 59, 53, 87, 76,
    -1, 90, 62, 80, -1, -1, 82, 78, 80, -1,
    87, 62, -1, -1, 83, 96, -1, 104, 66, 78,
    102, 40, 87, 68, -1, 55, 36, -1, -1, 78,
    87, 83, 78, -1, 120, 98, 91, -1, 60, 68,
    78, -1, 120, 120, 96, 78, 100, 92, 60, 44,
    57, -1, -1, -1, 67, 79, 87, 87, 91, -1,
    -1, 90, 99, 85, 72, 89, 88, 83, 98, 83,
    34, 39, 62, 93, 94, 88, 96, -1, -1, 55,
    83, 113, 91, 84, 82, 82, 83, 80, -1, 86,
    81, 87, 67, -1, 80, 88, 62, 62, 87, 99,
    94, 86, 99, -1, 49, 92, 89, 96, 81, -1,
    -1, 52, 34, 62, 34, 88, 88, -1, 72, 88,
    85, 85, 76, 48, -1, 85, 80, 92, 60, 91,
    -1, -1, -1, -1, -1, -1, 98, 98, 98, 88,
    84, 62, 94, 95, 82, 84, -1, -1, -1, 60,
    -1, -1
};

static vi_VehicleName[MAX_VEHICLE_MODELS][MAX_VEHICLE_NAME+1 char] = {
    !"Landstalker", !"Bravura", !"Buffalo", !"Linerunner", !"Perenniel",
    !"Sentinel", !"Dumper", !"Firetruck", !"Trashmaster", !"Stretch",
    !"Manana", !"Infernus", !"Voodoo", !"Pony", !"Mule", !"Cheetah",
    !"Ambulance", !"Leviathan", !"Moonbeam", !"Esperanto", !"Taxi",
    !"Washington", !"Bobcat", !"Mr Whoopee", !"BF Injection", !"Hunter",
    !"Premier", !"Enforcer", !"Securicar", !"Banshee", !"Predator", !"Bus",
    !"Rhino", !"Barracks", !"Hotknife", !"Article Trailer", !"Previon",
    !"Coach", !"Cabbie", !"Stallion", !"Rumpo", !"RC Bandit", !"Romero",
    !"Packer", !"Monster", !"Admiral", !"Squallo", !"Seasparrow", !"Pizzaboy",
    !"Tram", !"Article Trailer 2", !"Turismo", !"Speeder", !"Reefer",
    !"Tropic", !"Flatbed", !"Yankee", !"Caddy", !"Solair",
    !"Topfun Van (Berkley's RC)", !"Skimmer", !"PCJ-600", !"Faggio",
    !"Freeway", !"RC Baron", !"RC Raider", !"Glendale", !"Oceanic", !"Sanchez",
    !"Sparrow", !"Patriot", !"Quad", !"Coastguard", !"Dinghy", !"Hermes",
    !"Sabre", !"Rustler", !"ZR-350", !"Walton", !"Regina", !"Comet", !"BMX",
    !"Burrito", !"Camper", !"Marquis", !"Baggage", !"Dozer", !"Maverick",
    !"SAN News Maverick", !"Rancher", !"FBI Rancher", !"Virgo", !"Greenwood",
    !"Jetmax", !"Hotring Racer", !"Sandking", !"Blista Compact",
    !"Police Maverick", !"Boxville", !"Benson", !"Mesa", !"RC Goblin",
    !"Hotring Racer", !"Hotring Racer", !"Bloodring Banger", !"Rancher",
    !"Super GT", !"Elegant", !"Journey", !"Bike", !"Mountain Bike", !"Beagle",
    !"Cropduster", !"Stuntplane", !"Tanker", !"Roadtrain", !"Nebula",
    !"Majestic", !"Buccaneer", !"Shamal", !"Hydra", !"FCR-900", !"NRG-500",
    !"HPV1000", !"Cement Truck", !"Towtruck", !"Fortune", !"Cadrona",
    !"FBI Truck", !"Willard", !"Forklift", !"Tractor", !"Combine Harvester",
    !"Feltzer", !"Remington", !"Slamvan", !"Blade", !"Freight (Train)",
    !"Brownstreak (Train)", !"Vortex", !"Vincent", !"Bullet", !"Clover",
    !"Sadler", !"Firetruck LA", !"Hustler", !"Intruder", !"Primo", !"Cargobob",
    !"Tampa", !"Sunrise", !"Merit", !"Utility Van", !"Nevada", !"Yosemite",
    !"Windsor", !"Monster \"A\"", !"Monster \"B\"", !"Uranus", !"Jester",
    !"Sultan", !"Stratum", !"Elegy", !"Raindance", !"RC Tiger", !"Flash",
    !"Tahoma", !"Savanna", !"Bandito", !"Freight Flat Trailer (Train)",
    !"Streak Trailer (Train)", !"Kart", !"Mower", !"Dune", !"Sweeper",
    !"Broadway", !"Tornado", !"AT400", !"DFT-30", !"Huntley", !"Stafford",
    !"BF-400", !"Newsvan", !"Tug", !"Petrol Trailer", !"Emperor", !"Wayfarer",
    !"Euros", !"Hotdog", !"Club", !"Freight Box Trailer (Train)",
    !"Article Trailer 3", !"Andromada", !"Dodo", !"RC Cam", !"Launch",
    !"Police Car (LSPD)", !"Police Car (SFPD)", !"Police Car (LVPD)",
    !"Police Ranger", !"Picador", !"S.W.A.T.", !"Alpha", !"Phoenix",
    !"Glendale Shit", !"Sadler Shit", !"Baggage Trailer \"A\"",
    !"Baggage Trailer \"B\"", !"Tug Stairs Trailer", !"Boxville",
    !"Farm Trailer", !"Utility Trailer"
};

static vi_VehicleCategory[] = {
    OFF_ROAD,       SALOONS,        SPORT,          INDUSTRIAL,
    STATION_WAGONS, SALOONS,        UNIQUE,         PUBLIC_SERVICE,
    INDUSTRIAL,     UNIQUE,         SALOONS,        SPORT,
    LOWRIDERS,      INDUSTRIAL,     INDUSTRIAL,     SPORT,
    PUBLIC_SERVICE, HELICOPTERS,    STATION_WAGONS, SALOONS,
    PUBLIC_SERVICE, SALOONS,        INDUSTRIAL,     UNIQUE,
    OFF_ROAD,       HELICOPTERS,    SALOONS,        PUBLIC_SERVICE,
    UNIQUE,         SPORT,          BOATS,          PUBLIC_SERVICE,
    PUBLIC_SERVICE, PUBLIC_SERVICE, UNIQUE,         TRAILERS,
    SALOONS,        PUBLIC_SERVICE, PUBLIC_SERVICE, CONVERTIBLES,
    INDUSTRIAL,     RADIOC,         UNIQUE,         INDUSTRIAL,
    OFF_ROAD,       SALOONS,        BOATS,          HELICOPTERS,
    BIKES,          UNIQUE,         TRAILERS,       SPORT,
    BOATS,          BOATS,          BOATS,          INDUSTRIAL,
    INDUSTRIAL,     UNIQUE,         STATION_WAGONS, INDUSTRIAL,
    AIRPLANE,       BIKES,          BIKES,          BIKES,
    RADIOC,         RADIOC,         SALOONS,        SALOONS,
    BIKES,          HELICOPTERS,    OFF_ROAD,       BIKES,
    BOATS,          BOATS,          SALOONS,        SPORT,
    AIRPLANE,       SPORT,          INDUSTRIAL,     STATION_WAGONS,
    CONVERTIBLES,   BIKES,          INDUSTRIAL,     UNIQUE,
    BOATS,          UNIQUE,         UNIQUE,         HELICOPTERS,
    HELICOPTERS,    OFF_ROAD,       PUBLIC_SERVICE, SALOONS,
    SALOONS,        BOATS,          SPORT,          OFF_ROAD,
    SPORT,          HELICOPTERS,    INDUSTRIAL,     INDUSTRIAL,
    OFF_ROAD,       RADIOC,         SPORT,          SPORT,
    SALOONS,        OFF_ROAD,       SPORT,          SALOONS,
    UNIQUE,         BIKES,          BIKES,          AIRPLANE,
    AIRPLANE,       AIRPLANE,       INDUSTRIAL,     INDUSTRIAL,
    SALOONS,        SALOONS,        SALOONS,        AIRPLANE,
    AIRPLANE,       BIKES,          BIKES,          PUBLIC_SERVICE,
    INDUSTRIAL,     UNIQUE,         SALOONS,        SALOONS,
    PUBLIC_SERVICE, SALOONS,        UNIQUE,         INDUSTRIAL,
    UNIQUE,         CONVERTIBLES,   LOWRIDERS,      LOWRIDERS,
    LOWRIDERS,      UNIQUE,         UNIQUE,         UNIQUE,
    SALOONS,        SPORT,          SALOONS,        INDUSTRIAL,
    PUBLIC_SERVICE, UNIQUE,         SALOONS,        SALOONS,
    HELICOPTERS,    SALOONS,        SALOONS,        SALOONS,
    INDUSTRIAL,     AIRPLANE,       INDUSTRIAL,     CONVERTIBLES,
    OFF_ROAD,       OFF_ROAD,       SPORT,          SPORT,
    SALOONS,        STATION_WAGONS, SALOONS,        HELICOPTERS,
    RADIOC,         SPORT,          LOWRIDERS,      LOWRIDERS,
    OFF_ROAD,       TRAILERS,       TRAILERS,       UNIQUE,
    UNIQUE,         OFF_ROAD,       UNIQUE,         LOWRIDERS,
    LOWRIDERS,      AIRPLANE,       INDUSTRIAL,     OFF_ROAD,
    SALOONS,        BIKES,          INDUSTRIAL,     UNIQUE,
    TRAILERS,       SALOONS,        BIKES,          SPORT,
    UNIQUE,         SPORT,          TRAILERS,       TRAILERS,
    AIRPLANE,       AIRPLANE,       RADIOC,         BOATS,
    PUBLIC_SERVICE, PUBLIC_SERVICE, PUBLIC_SERVICE, PUBLIC_SERVICE,
    INDUSTRIAL,     PUBLIC_SERVICE, SPORT,          SPORT,
    SALOONS,        INDUSTRIAL,     TRAILERS,       TRAILERS,
    TRAILERS,       INDUSTRIAL,     TRAILERS,       TRAILERS
};

static vi_VehicleType[] = {
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       HELICOPTE, CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       CAR,       HELICOPTE, CAR,       CAR,
    CAR,       CAR,       BOAT,      CAR,       CAR,       CAR,       CAR,
    TRAILER,   CAR,       CAR,       CAR,       CAR,       CAR,       RC,
    CAR,       CAR,       CAR,       CAR,       BOAT,      HELICOPTE, MOTORBIKE,
    TRAIN,     TRAILER,   CAR,       BOAT,      BOAT,      BOAT,      CAR,
    CAR,       CAR,       CAR,       CAR,       PLANE,     MOTORBIKE, MOTORBIKE,
    MOTORBIKE, RC,        RC,        CAR,       CAR,       MOTORBIKE, CAR,
    CAR,       CAR,       BOAT,      BOAT,      CAR,       CAR,       PLANE,
    CAR,       CAR,       CAR,       CAR,       BIKE,      CAR,       CAR,
    BOAT,      CAR,       CAR,       HELICOPTE, HELICOPTE, CAR,       CAR,
    CAR,       CAR,       BOAT,      CAR,       CAR,       CAR,       HELICOPTE,
    CAR,       CAR,       CAR,       RC,        CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       CAR,       BIKE,      BIKE,      PLANE,
    PLANE,     PLANE,     CAR,       CAR,       CAR,       CAR,       CAR,
    PLANE,     PLANE,     MOTORBIKE, MOTORBIKE, MOTORBIKE, CAR,       CAR,
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       CAR,       TRAIN,     TRAIN,     CAR,
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       HELICOPTE, CAR,       CAR,       CAR,       CAR,       PLANE,
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       CAR,       HELICOPTE, RC,        CAR,       CAR,       CAR,
    CAR,       TRAIN,     TRAIN,     RC,        CAR,       CAR,       CAR,
    CAR,       CAR,       PLANE,     CAR,       CAR,       CAR,       MOTORBIKE,
    CAR,       CAR,       TRAILER,   CAR,       MOTORBIKE, CAR,       CAR,
    CAR,       TRAIN,     TRAILER,   PLANE,     PLANE,     RC,        BOAT,
    CAR,       CAR,       CAR,       CAR,       CAR,       CAR,       CAR,
    CAR,       CAR,       CAR,       TRAILER,   TRAILER,   TRAILER,   CAR,
    TRAILER,   TRAILER
};

/*
    Max speed
*/
stock GetVehicleModelMaxSpeed(model)
{
    if (!(399 < model < 611))
        return -1;

    return vi_VehicleMaxSpeed[model - 400];
}

stock GetVehicleMaxSpeed(vehicleid)
{
    return GetVehicleModelMaxSpeed(GetVehicleModel(vehicleid));
}

/*
    Name
*/
stock GetVehicleModelName(model, name[], size = sizeof(name))
{
    if (!(399 < model < 611))
        return -1;

    return strunpack(name, vi_VehicleName[model - 400], size);
}

stock GetVehicleName(vehicleid, name[], size = sizeof(name))
{
    return GetVehicleModelName(GetVehicleModel(vehicleid), name, size);
}

/*
    Category
*/
stock GetVehicleModelCategory(model)
{
    if (!(399 < model < 611))
        return -1;

    return vi_VehicleCategory[model - 400];
}

stock GetVehicleCategory(vehicleid)
{
    return GetVehicleModelCategory(GetVehicleModel(vehicleid));
}

/*
    Type
*/
stock GetVehicleModelType(model)
{
    if (!(399 < model < 611))
        return -1;

    return vi_VehicleType[model - 400];
}

stock GetVehicleType(vehicleid)
{
    return GetVehicleModelType(GetVehicleModel(vehicleid));
}

/*
    Other
*/
stock GetVehicleSpeed(vehicleid)
{
    return floatround((floatsqroot(floatpower(ac_x, 2.0) + floatpower(ac_y, 2.0) + floatpower(ac_z, 2.0)) * 179.28625) * 0.56);
}