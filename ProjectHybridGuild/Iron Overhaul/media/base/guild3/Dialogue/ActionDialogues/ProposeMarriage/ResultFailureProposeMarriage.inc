//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
FunctionUpdateRelationship
{
	AffectLiaison = "-15 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
},				
FunctionApplyResults
{
	ResultObjectIds = array{"RomPref.Nothing"};
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName = "Insulted";
	Duration = 5.0;
},

@base/LoveDebuff

FunctionSendMessage
{
	ApplyTo = "Source";
	Description = "ProposeMarriageActionFailed";
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
