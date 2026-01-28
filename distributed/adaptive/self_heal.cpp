#include "self_heal.h"
using namespace std; 

namespace hmn :: distributed :: adaptive 
{
    bool SelfHeal :: should_pause(const GroupState &state) const 
    {
        return state.pressure_level > 0.6f and state.manipulation_risk; 
    }
}