#pragma once 
#include <string>

#include <iostream>
using namespace std; 

namespace hmn :: distributed :: p2p :: transport 
{
    // p2p transport khong tu quyet dinh gui gi..
    // chi gui neu tang tren cho phep.. 
    class P2PTransport 
    {
        public:
        bool send(const string &peer_id, const string &payload); 

        string receive(const string &peer_id); 
    }; 
}