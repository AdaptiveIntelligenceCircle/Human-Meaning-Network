#pragma once 

#include "group_state.h"
using namespace std; 

namespace hmn :: distributed :: adaptive 
{
    class SelfHeal 
    {
        public: 
        bool should_pause(const GroupState &state) const; 
    }; 
}