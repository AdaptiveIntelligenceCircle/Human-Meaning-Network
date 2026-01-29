#include <iostream>
using namespace std;

#include <string>
#include <unordered_map>

namespace hmn :: journaling 
{
    class BiasTrace 
    {
        public:
        void record(const string &bias_type)
        {
            bias_counter_[bias_type]++; 
        }

        double bias_intensity(const string &bias_type) const 
        {
            auto it = bias_counter_.find(bias_type);
            if (it == bias_counter_.end()) return 0.0; 
            return it -> second / normalization_; 
        }

        private: 
        unordered_map<string, int> bias_counter_; 
        const double normalization_ = 100.0; 
    }; 
}