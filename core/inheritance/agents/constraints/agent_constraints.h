#pragma once 
#include <string> 

using namespace std;

namespace hmn 
{
    class AgentConstraint
    {
        public: 
        static bool allowSuggestion(const string &content); 
    }; 
}   