#include "circle_agent.h"

using namespace std; 

namespace hmn :: prototype :: circles :: agents 
{
    CircleAgent ::CircleAgent(const string &id)
    {
        circle_id = id; 
    }

    void CircleAgent :: observe_message(const string &)
    {
        message_count++; 
    }

    bool CircleAgent :: should_pause() const 
    {
        // qua nhieu tuong tac -> can cham lai..
        return message_count > 30; 
    }
}