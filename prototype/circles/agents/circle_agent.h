#pragma once 
#include <string> 

#include <vector> 
using namespace std; 

namespace hmn ::prototype :: circles :: agents 
{
    class CircleAgent 
    {
        public: 
        explicit CircleAgent(const string &id); 

        void observe_message(const string &message); 
        bool should_pause() const; 

        private: 
        string circle_id; 
        int message_count = 0; 
    }; 
}