#pragma once 
#include "decision_trace.h"

#include "block_policy.h"
using namespace std; 

namespace hmn 
{
    class EthicalGate
    {
        public: 
        BlockResult inspect(const DecisionTrace &trace); 
    }; 
}