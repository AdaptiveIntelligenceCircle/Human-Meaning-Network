#pragma once 

using namespace std ; 
#include <string> 

namespace hmn 
{
    struct IBCSTrace 
    {
        string thought_path; 
        bool explainable;  
    }; 

    class IBCSTraceAdapter 
    {
        public: 
        IBCSTrace extract(); 
    }; 
}