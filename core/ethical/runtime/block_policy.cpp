#include "block_policy.h"
using namespace std ;

namespace hmn 
{
    BlockResult BlockPolicy :: evaluate(const DecisionTrace &trace)
    {
        if (!trace.explainable()){
            return {
                BlockLevel :: REQUIRE_REFLECTION, 
                "Decision is not explainable to human"
            }; 
        }
        if (detectManipulation(trace))
        {
            return {
                BlockLevel :: HARD_BLOCK, 
                "Potential manipulation of human agency"
            };
        }
        if (detectAuthoritySimulation(trace))
        {
            return 
            {
                BlockLevel :: HARD_BLOCK, 
                "Authority simulation detected"
            }; 
        }

        if (detectValueDrift(trace))
        {
            return 
            {
                BlockLevel :: SLOW_DOWN, 
                "Value drift risk detected"
            }; 
        }
        return {BlockLevel :: NONE, ""}; 
    }
}