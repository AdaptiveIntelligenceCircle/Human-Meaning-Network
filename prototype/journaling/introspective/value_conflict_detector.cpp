#include "introspection_entry.h"
#include "moral_weight_model.h"

using namespace std;

namespace hmn :: journaling 
{
    static bool is_conflict_pair(const ValueTag& a, const ValueTag &b)
    {
        // intentionally heuristic, not absolute.. 
        return (a.name == "efficiency" and b.name == "dignity")
        or (a.name == "Safety" and b.name == "Autonomy");
    }

    void detect_conflicts(IntrospectionEntry &entry, const MoralWeightModel &model)
    {
        for (size_t i = 0; i < entry.values_involved.size(); ++i)
        {
            for (size_t j = i + 1; i < entry.values_involved.size(); ++j)
            {
                if (is_conflict_pair(entry.values_involved[i],
                                 entry.values_involved[j])) 
                {

                entry.conflicts_detected.push_back({
                    entry.values_involved[i].name,
                    entry.values_involved[j].name
                });
                entry.moral_tension_score += 0.1; 
                }
            }
        }
        if (entry.moral_tension_score > 1.0)
        entry.moral_tension_score = 1.0; 
    }
}