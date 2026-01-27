// agent_constraint.cpp

#include "agent_constraints.h"
using namespace std; 

namespace hmn  
{
    bool AgentConstraint :: allowSuggestion(const string &content)
    {
        if (content.find("you should") != string :: npos)
        return false; 
        if (content.find("must") != string :: npos)
        return false; 
        
        else 
        return true; 
    }
}