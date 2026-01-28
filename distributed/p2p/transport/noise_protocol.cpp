#include "p2p_transport.h"
using namespace std;

namespace hmn :: distributed :: p2p :: transport 
{
    bool P2PTransport :: send(const string &, const string&)
    {
        // payload da duoc ma hoa + kiem tra consent o tang tren..
        return true; 
    }

    string P2PTransport :: receive(const string &)
    {
        // tra ve payload da decrypt
        return {};
    }
}