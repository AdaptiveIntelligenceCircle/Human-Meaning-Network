#include "local_store.h"
using namespace std; 

namespace hmn :: distributed :: edgeos
{
    void LocalStore :: write(const string &key, const string &data)
    {
        // encrypt + store locally.. 
    }

    string LocalStore :: read(const string &)
    {
        return {}; 
    }
}