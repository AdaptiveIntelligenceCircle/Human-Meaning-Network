#pragma once 

namespace hmn 
{
    enum class LifeCyclePhase 
    {
        PRE_DECISION, 
        POST_DECISION, 
        PRE_ACTION, 
        POST_ACTION
    }; 

    class LifeCycleHook 
    {
        public: 
        void onPhase(LifeCyclePhase phase);
    }; 
}