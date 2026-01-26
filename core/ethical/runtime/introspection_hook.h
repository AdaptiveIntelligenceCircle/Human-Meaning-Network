#pragma once
#include "decision_trace.h"

namespace hmn {

class IntrospectionHook 
{
public:
    DecisionTrace preDecision(const std::string& intent);
    void postDecision(DecisionTrace& trace, const std::string& outcome);
};

}
