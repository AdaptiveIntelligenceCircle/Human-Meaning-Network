#include "ethical_gate.h"

namespace hmn 
{
    BlockResult EthicalGate :: inspect(const DecisionTrace &trace)
    {
        return BlockPolicy :: evaluate(trace); 
    }
}