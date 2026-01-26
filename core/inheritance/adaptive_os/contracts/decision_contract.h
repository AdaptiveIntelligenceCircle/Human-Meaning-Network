#pragma once 
#include <string>

#include <vector> 
using namespace std; 

namespace hmn 
{
    struct DecisionContract 
    {
        string intent; 
        string context; 
        bool requires_human_ack = false;
    }; 
}