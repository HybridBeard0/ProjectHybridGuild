GUIPresent = false;

ActionClassName = "SimpleExecutionAction";
IconName = "BuyBuildingOnSale";
DisplayName = "$action.MusicBoostBusiness";
Description = "$action.MusicBoostBusinessDesc";
Instruction = "$callToAction.BusinessNotPlayers";

ActionActor = "Character";
TargetActor = "Building";

SourceScoreFormula = "Entertainment * 2 + (Source.hasTag.eventbuffQuickChangeArtist) * 2";
//Duration = 0.0385;
Duration = -1;
BaseRewardXP = 30;
CanFail = false;
ShowCombatText = false;
SourceRun = true;

DesiredProfiles = array
{
    TargetProfileBuilding
    {	
        ExcludedTypes = array{"Statue", "Stage"};
        FamilyProfile = TargetProfileFamily
        {
            MyFamily = 3;
        };

        CityBuilding = -3;
        ResourceProducer = -3;
        Burning = -3;
        Business = 3;
        CloseToActor = 2;
    }
};

EnterBuilding = "ForceEnter";

MoralAlignmentShift = 0.05;
MoralAlignment = MoralAlignment
{
    Values = array{0.25,0.25,0.3};
};

CriticalFactor = 1.0;

OnStartResult =  array
{
    DisplayEffect
    {
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        DisplayGroup = "buffed";
        DisplayName = "$effect.MusicBoostBusiness";
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 30";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 30;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 25 && Source.Entertainment < 30";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 25;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 20 && Source.Entertainment < 25";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 20;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 15 && Source.Entertainment < 20";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 15;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 10 && Source.Entertainment < 15";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 10;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 5 && Source.Entertainment < 10";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 5;
        Recover = true;
    },
    ModifierEffect
    {
        Filter = "Source.Entertainment >= 0 && Source.Entertainment < 5";
        Tags = array{"MusicBoostBusiness"};
        ApplyTo = "Target";
        ActorValue = "Attractiveness";
        Mod = 0;
        Recover = true;
    },
};

OnEndResult =  array
{
    FunctionRemoveEffect
    {
        ApplyTo = "Target";
        MatchAny = true;
        Tags = array {"MusicBoostBusiness"};
    },
};