#pragma once 
#include <iostream> 
#include <optional>

#include <vector> 
#include <string> 
using namespace std;

namespace hmn :: jounarling 
{
    using timestamp = uint64_t; 
    using EntityID = string; 
    
    struct ContextSnapshot 
    {
        string environment; 
        string situation; 
    }; 

    struct ActionSummary 
    {
        string description; 
        string outcome; 
    }; 

    struct ReasoningSummary 
    {
        // abstracted, post - processed reasoning.
        vector<string> considerations; 
    }; 

    struct ConflictTag 
    {
        string a; 
        string b; 
    };

    struct ValueTag 
    {
        string name; // autonomy , safety
    };

    struct IntrospectionEntry
    {
        timestamp time; 
        EntityID subject; 

        ContextSnapshot context;
        ActionSummary action; 
        ReasoningSummary reasoning; 

        vector<ValueTag> values_involved; 
        vector<ConflictTag> conflicts_detected; 

        double moral_tension_score; // 0.0- 1.0
        double external_pressure_score; // 0.0 - 1.0

        optional<string> human_reference; 
    }; 
}

