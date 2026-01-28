#include "circle.h"
using namespace std; 

namespace hmn :: distributed :: p2p :: circles
{
    Circle :: Circle(const string &id) : circle_id(id){}

    bool Circle :: request_join(const string &peer_id)
    {
        // mac dinh khong mo - can danh gia thu cong / ethical layer.. 
        trust_map[peer_id] = TrustScore{}; 
        return false; 
    }

    void Circle :: leave(const string &peer_id)
    {
        trust_map.erase(peer_id); 
    }

    bool Circle ::allow_message(const string &peer_id) const 
    {
        auto it = trust_map.find(peer_id); 
        if (it == trust_map.end()) return false; 
        return it -> second.suffiecent(); 
    }
}