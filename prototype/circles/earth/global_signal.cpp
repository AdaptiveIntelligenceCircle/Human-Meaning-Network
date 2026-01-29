#include "earth_context.h"

using namespace std; 

namespace hmn :: prototype :: circles :: earth 
{
    EarthContext get_current_context()
    {
        // prototype : static placeholder.. 
        return {
            .climate_stress = 0.6f, 
            .social_tension = 0.7f
        };
    }
}