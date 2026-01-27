#pragma once
#include "../introspection/ibcs_trace_adapter.h"

namespace hmn 
{

class EthicalBridge 
{
    public:
    bool approve(const IBCSTrace& trace);
};

}
