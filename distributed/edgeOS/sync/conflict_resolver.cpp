#include "edge_sync.h"
using namespace std; 

namespace hmn :: distributed :: edgeos 
{
    bool EdgeSync :: sync_allowed() const 
    {
        // default : no auto sync.. 
        return false; 
    }
}