#include "meaning_filter.h"

using namespace std; 

namespace hmn 
{
    bool MeaningFilter :: preserveHumanMeaning(const IBCSTrace &trace)
    {
        return trace.explainable and !trace.thought_path.empty(); 
    }
}