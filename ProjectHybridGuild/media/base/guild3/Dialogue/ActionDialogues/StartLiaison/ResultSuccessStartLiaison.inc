//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
FunctionCreateLiaisonWithTarget
{
	// no members
},
FunctionUpdateRelationship
{
	AffectLiaison = "(20 + ((Target.hasTag.RomPrefCloseApproach + Target.hasTag.RomPrefContraryGoodBehavior) * 3)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
},	
FunctionPickRandom
{
	ApplyTo = "Target";
	ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
},
FunctionTrackObjectiveProgress
{
	Amount = 10;
	ObjectiveTypename = "IncreaseSecurity";
},
FunctionSendMessage
{
	ApplyTo = "Source";
	Description = "StartLiaisonActionSuccess";
},
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Source";
	Actions = array{"NPCDynRandomFollowUpShort"};
},
FunctionTriggerAction
{
	Filter = "!IsControlledByHuman";
	ApplyTo = "Target";
	Actions = array{"NPCRandomFollowUpShort"};
},
