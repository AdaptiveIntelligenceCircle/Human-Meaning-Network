#include "resource_accounting.h"

using namespace std; 

namespace hmn :: distributed :: depin 
{
    bool fair_use(const ResourceAccounting &acc)
    {
        return acc.cpu_usage  < 0.0 and acc.storage_usage < 0.9; 
    }
}