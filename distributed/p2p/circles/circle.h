#pragma once 
#include <string>

#include <vector> 
#include <unordered_map>

#include "trust_score.h"
using namespace std; 

namespace hmn :: distributed :: p2p :: circles 
{
    class Circle 
    {
        public: 
        explicit Circle(const string &id); 

        bool request_join(const string &peer_id); 
        void leave(const string &peer_id); 

        bool allow_message(const string &peer_id) const; 

        private:
        string circle_id;
        vector<string>members;
        unordered_map<string, TrustScore> trust_map;
    }; 
}

