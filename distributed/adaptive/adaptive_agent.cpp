#include "adaptive_agent.h"
using namespace std; 
#include <iostream>

namespace hmn :: distributed :: adaptive
{
    AdaptiveAgent observe(const string &group_state)
    {
        // further extension
    }

    void AdaptiveAgent :: adjust(AdaptiveSignal signal)
    {
        string state; 
        
        if (state == "Stable")
        signal = AdaptiveSignal :: STABLE ;
        
        if (state == "Overload")
        signal = AdaptiveSignal :: OVERLOAD; 

        if (state == "Conflict")
        signal = AdaptiveSignal :: CONFLICT;
        
        if (state == "Meaning Dilution")
        signal = AdaptiveSignal :: MEANNING_DILUTION; 

        else 
        cout << "\n" << endl; 
    }
}   