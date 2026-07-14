#include <string>
#include <map>
#include <unordered_map>
#include <iostream>
#include <ostream>
#include <cstdio>

class HALORing
{
        char MicrosoftHALO[9]="HALO";
        bool HALO;
};
void NoMirage();
void NoHALOArmour();
void NoHALOGuns();
void NoHALOEnemies();

int main(int argc, char *argv[])
{
        std::map<std::string, int> HALORing;
        std::map<std::string, int> Space;
        HALORing["GRAVO-CENTRIFUGAL HABITABLE RING"];
        std::unordered_map<std::string, int> HALOMirageTransversionMedium;
        std::unordered_map<std::string, int> HALOEnvironment;

        HALOEnvironment["atmosphere"];
        HALOEnvironment["glowing ground"];
        HALOEnvironment["paths"];
        HALOEnvironment["trees"];
        HALOEnvironment["boulders"];

        return 0;
}
