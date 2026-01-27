#pragma once 
#include <string>

using namespace std; 

namespace hmn 
{
    class AgentAdapter 
    {
        public: 
        string sanitizeOutput(const string &raw); 
    }; 
}