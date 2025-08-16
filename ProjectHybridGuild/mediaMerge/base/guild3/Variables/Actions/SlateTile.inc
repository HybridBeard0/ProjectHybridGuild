ActionActor = "Character";
TargetActor = "Building";

UICategory = "Artifact";
Cooldown = 0.0415;
Duration = 0.005;

DisplayName = "$ApplySlateTile";
Description = "$ApplySlateTileDesc";
Instruction = "$callToAction.ResidenceBusinessPlayers";

BaseRewardXP = 25;

CanFail = false;
CriticalFactor = 1;

SourceScoreFormula = "1";
TargetScoreFormula = "1";

TargetTags = array{"SlateTile"};
DesiredProfiles = array
{
    TargetProfileBuilding
    {
        ExcludedTypes = array{"Statue", "Stage"};
        FamilyProfile = TargetProfileFamily
        {
            MyFamily = 3;
        };
        MatchTargetTags = -3;
        CityBuilding = -3;
    }
};

TargetSnapPoint = TargetSnapPoint
{
    Required = true;
    ShouldReserve = true;
    ShouldOccupy = true;
    
    Profiles = array
    {
        TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
    };
    Animations = array
    {
        TargetSnapPointAnimation{ Animation = "HammerOnBuilding"; },
    };
};

EnterBuilding = "TryEnter";
SuppressBuildingEnterBehavior = true;

MoralAlignmentShift = 0;
MoralAlignment = MoralAlignment
{
    Values = array{0,0,0};
};