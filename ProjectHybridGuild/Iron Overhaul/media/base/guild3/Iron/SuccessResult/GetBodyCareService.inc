FunctionAffectServiceNeeds
{
    ApplyTo = "Self";
    ServiceNeeds = map
    {
        "RecreationNeed" = -1.0;
    };
},
FunctionRemoveEffect
{
    MatchAny = true;
    Tags = array{"Washed"};
    ApplyTo = "Self";
},
DisplayEffect
{
    Tags = array{"Washed"};
    ApplyTo = "Self";
    Duration = 360;
    DisplayGroup = "perfume";
    DisplayName = "$statusEffect.Washed";
},
ModifierEffect
{
    Tags = array{"Washed"};
    ApplyTo = "Self";
    ActorValue = "Charisma";
    Mod = 1.0;
    Recover = true;
    Duration = 360;
},
ModifierEffect
{
    Tags = array{"Washed"};
    ApplyTo = "Self";
    ActorValue = "ReputationBonus";
    Mod = 0.1;
    Duration = 360.0;
    Recover = true;
};
FunctionTriggerAction
{
    Filter = "hasTag.LoveDebuff";
    ApplyTo = "Self";
    Actions = array{"RomanceHealDebuff"};
},
FunctionRemoveEffect
{
    MatchAny = true;
    Tags = array{"Fleas","LoveDebuff","AuDeToilette"};
    ApplyTo = "Self";
},
FunctionTriggerAction
{
    Filter = "Target.hasItems.MassageOil.1";
    ApplyTo = "Source";
    ActionTarget = "Target";
    Actions = array{"UseMassageOil"};
},
FunctionTriggerAction
{
    Filter = "!Target.hasItems.Soap.1";
    ApplyTo = "Source";
    Actions = array{"GetBodyCareServiceExit"};
},
FunctionTriggerAction
{
    Filter = "Target.hasItems.Soap.1";
    ApplyTo = "Source";
    ActionTarget = "Target";
    Actions = array{"GetBodyCareServiceResult"};
},