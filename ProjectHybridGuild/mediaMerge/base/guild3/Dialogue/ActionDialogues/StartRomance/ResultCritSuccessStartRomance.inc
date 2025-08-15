//Crit Success Effects here
DialogueSuccessType
{
	  Type = "CriticalSuccess";
},
FunctionCreateRomanceWithTarget
{
	// no members
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "FamilyMemberStartedLiaision";
},
FunctionUpdateRelationship
{
	AffectTargetFamily = "-10 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
},
FunctionTrackObjectiveProgress
{
	Amount = 18;
	ObjectiveTypename = "IncreaseSecurity";
};
FunctionPickRandom
{
	ApplyTo = "Target";
	ResultObjectIds = array{"RomPref.Nothing", "RomPref.MoreDistance", "RomPref.Present", "RomPref.Artist"};
};
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Source";
	Actions = array{"NPCDynRandomFollowUpShort"};
};
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Target";
	Actions = array{"NPCRandomFollowUpShort"};
};
