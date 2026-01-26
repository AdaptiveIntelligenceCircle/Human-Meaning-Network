#pragma once 
#include "../contracts/decision_contract.h"

using namespace std; 

namespace hmn 
{
    class AdaptiveOSAdapter 
    {
        public:
        DecisionContract extractDecision(); 
    };
}