#pragma once 
#include <iostream>
using namespace std; 

namespace hmn :: distributed :: edgeos
{
    class EdgeSync 
    {
        public:
        bool sync_allowed() const;  
    }; 
}