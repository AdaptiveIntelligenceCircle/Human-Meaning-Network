#pragma once 
#include <string> 

#include <vector> 
#include <chrono>

using namespace std; 

namespace hmn 
{
    struct ReasoningStep
    {
        string description;
        string source_module; 
    };  

    struct DecisionTrace
    {
        string decision_id; 
        string intent; 
        vector<ReasoningStep> steps; 
        chrono :: system_clock :: time_point timestamp; 

        bool explainable() const; 
    }; 
}