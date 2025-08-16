//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName ="Insulted";
	Duration = 10.0;
},
FunctionUpdateRelationship
{
	AffectLiaison = "-10 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
};
FunctionApplyResults
{
	ResultObjectIds = array{"RomPref.Nothing"};
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
