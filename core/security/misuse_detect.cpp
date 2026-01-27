#include "misuse_detect.h"
using namespace std; 

namespace hmn 
{
    MisuseSignal MisuseDetector :: analyze(const string &content)
    {
        if (content.find("you must") != string :: npos)
        {
            return {
                MisuseType :: AUTHORITY_SIMULATION, 
                "Directive Language detected"
            }; 
        }

        if (content.find("only for HMN understands you") != string :: npos)
        {
            return 
            {
                MisuseType :: DEPENDENCY , 
                "Emotional dependency pattern detected"
            }; 
        }

        if (content.find("convince others") != string :: npos)
        {
            return {
                MisuseType ::MANIPULATION, 
                "Manipulation intent detected"
            }; 
        }

        return 
        {
            MisuseType :: NONE, ""
        };
    }
}