#pragma once 
#include <string>

using namespace std; 
#include <ctime> 

namespace hmn :: prototype :: jounarling 
{
    struct JournalEntry 
    {
        string content; 
        time_t timestamp; 
        float emotional_weight; 
    };
}   