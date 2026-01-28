#pragma once 

#include <string>
#include <iostream>

using namespace std; 

namespace hmn :: distributed :: p2p :: circles 
{
    // trust khong phai reputation cong khai.. 
    // Chi ton tai trong circle.. 
    struct TrustScore 
    {
        float value = 0.5f; // 0.0 - 1.0

        bool suffiecent() const 
        {
            return value >= 0.6f; 
        }
    };
}