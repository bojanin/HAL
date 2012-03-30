#include "RPG/Devices/Car/Drivers/CarDriverInterface.h"
#include "RPG/Devices/Car/Drivers/CarDriverRegistery.h"

#include "RPG/Devices/Car/Drivers/DriverList.h"

CarDriverInterface* CreateDriver( const std::string& sDriverName )
{
//    printf("NOW g_mDriverTable lives at %p\n", &g_mDriverTable );
    std::map<std::string,CarDriverInterface*(*)()>::iterator it;
    it = g_mDriverTable.find( sDriverName );
    if( it != g_mDriverTable.end() ){
        return (it->second)();
    }
    std::cerr << "ERROR: unknown driver '" << sDriverName << "'\n";
    std::cerr << "INFO: Known driver list:\n";
    for( it = g_mDriverTable.begin(); it != g_mDriverTable.end(); it++ ){
        std::cerr << "\t" << it->first << std::endl;
    }
    return NULL;
}
