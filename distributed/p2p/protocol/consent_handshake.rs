// Minimal consensus handshake foe HMN circles..
// No majority rule. No coercion.. 

#[derive(Debug, Clone)]

pub struct ConsentSignal 
{
    pub peer_id : String, 
    pub consent : bool, 
}

pub struct ConsensusHandshake; 

impl ConsensusHandshake 
{
    // all existing members must consent.. 
    pub fn unanimous(consents : &[ConsentSignal]) -> bool 
    {
        consents.iter().all(|c| c.consent)
    }

    // Used for sensitive actions (new member, data share..)
    pub fn allow_action(consents: &[ConsentSignal]) -> bool 
    {
        Self :: unanimous(consents)
    }
}