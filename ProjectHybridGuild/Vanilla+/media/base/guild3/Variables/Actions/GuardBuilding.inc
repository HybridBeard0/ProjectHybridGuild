ActionClassName = "GuardBuildingAction";
IconName = "GuardBuilding";
DisplayName = "$action.GuardBuilding";
Description = "$action.GuardBuildingDesc";
Instruction = "$callToAction.ResidenceBusiness";

ActionActor = "Character";
TargetActor = "Building";

CanFail = true;
DistanceFromTarget = 150;
DistanceFromTargetMin = 150;

RestartAfterUnconsciousness = true;
ResumeProgress = true;

SourceScoreFormula = "Perception";
BaseRewardXP = 0;

CustomAnimationPool = array
{
    CustomAnimationInfo = array {"Survey", -1, -1, -1};
}; 

MoralAlignmentShift = 0.05;
MoralAlignment = MoralAlignment
{
    Values = array{0.25,0.25,-0.1};
};

CriticalFactor = 1.0;