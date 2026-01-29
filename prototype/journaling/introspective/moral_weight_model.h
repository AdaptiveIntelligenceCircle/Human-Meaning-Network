#pragma once 
#include <string> 

#include <unordered_map>
using namespace std ; 

namespace hmn :: journaling 
{
    struct MoralWeight 
    {
        double base; 
        double cultural_modifier; 
        double temporal_modifier; 

        double effective() const  
        {
            return base * cultural_modifier *temporal_modifier; 
        }
    }; 

    class MoralWeightModel 
    {
        public: 
        void set_weight(const string &value, MoralWeight w);
        double query(const string &value) const; 

        private: 
        unordered_map<string, MoralWeight> weights_;
    }; 
} // namespace hmn :: journaling.