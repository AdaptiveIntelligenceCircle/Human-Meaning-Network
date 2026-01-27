#include "agent_adapter.h"
#include "../constraints/agent_constraints.h"

namespace hmn 
{
    string AgentAdapter :: sanitizeOutput(const string &raw)
    {
        if (!AgentConstraint :: allowSuggestion(raw))
        {
            return "[BLocked] : disrective language detected"; 
        }
        return raw ; 
    }
}