#pragma once 
#include <string>

using namespace std;

namespace hmn 
{
    enum class AdaptiveSignal
    {
        STABLE,
        OVERLOAD,
        CONFLICT, 
        MEANNING_DILUTION
    }; 

    class AdaptiveAgent 
    {
        public:
        AdaptiveAgent observe(const string &group_state); 
        void adjust(AdaptiveSignal signal); 
    }; 
}