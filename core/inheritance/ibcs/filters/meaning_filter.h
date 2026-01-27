#pragma once 

#include "../introspection/ibcs_trace_adapter.h"

namespace hmn 
{
    class MeaningFilter 
    {
        public: 
        static bool preserveHumanMeaning(const IBCSTrace &trace); 
    }; 
}