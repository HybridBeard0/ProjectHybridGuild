
FunctionRemoveEffect
{
    MatchAny = true;
    Tags = array{ "LoveDebuff" };
    ApplyTo = "Self";
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"LoveDebuff"};
    ActorValue = "Charisma";
    Mod = -1;
    Duration = 600.0;
    Recover = true;
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"LoveDebuff"};
    ActorValue = "Perception";
    Mod = -1;
    Duration = 600.0;
    Recover = true;
},
ModifierEffect
{
    ApplyTo = "Self";
    Tags = array{"LoveDebuff"};
    ActorValue = "Intelligence";
    Mod = -1;
    Duration = 600.0;
    Recover = true;
},
DisplayEffect
{
    Tags = array{"LoveDebuff"};
    ApplyTo = "Self";
    DisplayGroup = "wound";
    DisplayName = "$effect.rejected";
    Duration = 600.0;
},