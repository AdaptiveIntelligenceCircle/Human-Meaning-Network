// trust decay logic for HMN circles... 
// Trust is local, slow-changing, and never infinite,..

#[derive(Debug, Clone)]

pub struct TrustState 
{
    pub value : f32,  // 0.0 - 1.0
    pub last_interaction : u64, // timestamp (seconds).. 
}

impl TrustState 
{
    pub fn decay (&mut self, now : u64)
    {
        let elapsed = now.saturating_sub(self.last_interaction); 

        // decay rate : very slow, human-scale.. 
        let decay_factor = (elapsed as f32) * 0.00001; 
        self.value -= decay_factor; 
        if self.value < 0.0{
            self.value = 0.0; 
        }
    }

    pub fn reinforce(&mut self, delta : f32){
        // no instant trust jumps. 
        self.value += delta.min(0.05) ;
        if self.value > 1.0 
        {
            self.value = 1.0; 
        }
    }
    pub fn sufficient (&self) -> bool 
    {
        self.value >= 0.6
    }
}