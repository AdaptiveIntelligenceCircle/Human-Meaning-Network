#include "introspection_entry.h"
#include "pressure_signal.h"

using namespace std; 
#include <vector> 

namespace hmn :: journaling 
{
    class IntrospectionEngine
    {
        public: 
        void submit(const IntrospectionEntry &entry)
        {
            entries_.push_back(entry); 
        }

        bool requires_human_attention() const 
        {
            int high_tension = 0; 
            for (const auto &e : entries_)
            {
                if (e.moral_tension_score > 0.7 
                or e.external_pressure_score > 0.7)
                {
                    high_tension++; 
                }
            }
            return high_tension >=3; 
        }

        private: 
        vector<IntrospectionEntry> entries_; 
    };
}