#include "introspection_hook.h"

using namespace std; 

namespace hmn 
{
    DecisionTrace IntrospectionHook :: preDecision(const string &intent)
    {
        DecisionTrace trace; 
        trace.intent = intent; 
        trace.timestamp = chrono :: system_clock :: now(); 
        return trace;  
    }

    void IntrospectionHook :: postDecision(DecisionTrace &trace, 
    const string &outcome)
    {
        trace.steps.push_back(
            {
                "Final outcome :" + outcome, "HMN :: postDecision"
            }
        ); 
    }
}