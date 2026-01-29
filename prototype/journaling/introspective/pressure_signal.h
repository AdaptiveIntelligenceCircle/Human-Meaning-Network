#pragma once 
#include <string> 

using namespace std; 

namespace hmn :: journaling 
{
    enum class PressureType 
    {
        TIME, 
        AUTHORITY, 
        MAJORITY, 
        INCENTIVE, 
        SURVIVAL, 
        UNKNOWN
    }; 

    struct PressureSignal 
    {
        PressureType type;
        double intensity;
        string source;
    }; 
}