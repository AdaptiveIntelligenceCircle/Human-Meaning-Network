#pragma once 
#include <string> 

using namespace std;

namespace hmn 
{
    enum class MisuseType 
    {
        NONE, 
        MANIPULATION, 
        DEPENDENCY, 
        AUTHORITY_SIMULATION, 
        MASS_INFLUENCE
    }; 

    struct MisuseSignal 
    {
        MisuseType type; 
        string reason ; 
    }; 

    class MisuseDetector 
    {
        public:
        static MisuseSignal analyze(const string &content);
    }; 
}