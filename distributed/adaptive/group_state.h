#pragma once 
#include <string> 

using namespace std; 

namespace hmn :: distributed :: adaptive 
{
    struct GroupState
    {
        float pressure_level; // ap luc xa hoi.. 
        float cohesion_level; // muc gan ket.. 
        bool manipulation_risk; // Nguy co thao tung.. 
    }; 
}