DisplayEffect
{
    Tags = array{"Unlearned"};
    ApplyTo = "Self";
    Duration = 2800;
    DisplayGroup = "craft";
    DisplayName = "$effect.iron.unlearned";
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"Unlearned"};
    ActorValue = "Productivity";
    Mod = -0.3;
    Duration = 2800;
    Recover = true;
},