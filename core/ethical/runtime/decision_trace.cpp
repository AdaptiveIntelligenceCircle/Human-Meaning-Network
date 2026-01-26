#include "decision_trace.h"

using namespace std; 

namespace hmn 
{
    bool DecisionTrace :: explainable() const 
    {
        return !steps.empty() and !intent.empty(); 
    }
}