#pragma once 

#include "decision_trace.h"
#include <string> 

using namespace std; 

namespace hmn
{
    enum class BlockLevel 
    {
        NONE, 
        SLOW_DOWN, 
        REQUIRE_REFLECTION, 
        HARD_BLOCK
    }; 

    struct BlockResult 
    {
        BlockLevel level; 
        string reason ; 
    };

    class BlockPolicy 
    {
        public:
        static BlockResult evaluate(const DecisionTrace &trace); 

        private: 
        static bool detectManipulation(const DecisionTrace &trace); 
        static bool detectAuthoritySimulation(const DecisionTrace &trace); 
        static bool detectValueDrift(const DecisionTrace &trace); 
    }; 
}