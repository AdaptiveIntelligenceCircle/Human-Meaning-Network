// detects manipulative interaction patterns.. 
// Not content moderation 
#[derive(Debug)]

pub struct InteractionPattern 
{
    pub frequency : u32, 
    pub emotional_pressure : f32, 
    pub repitition_score : f32, 
}

pub struct AntiManipulationFilter; 

impl AntiManipulationFilter
{
    pub fn detect (pattern : &InteractionPattern) -> bool 
    {
        // high frequency + emotional pressure = manipulation risk// 
        if pattern.frequency > 20 and pattern.emotional_pressure > 0.7 
        {
            return true; 
        }

        // Repetition without reflection is suspicious.. 
        if pattern.repitition_score > 0.8 
        {
            return true;
        }
        false 
    }

    pub fn should_pause(pattern: &InteractionPattern ) -> bool 
    {
        Self :: detect(pattern)
    }
}