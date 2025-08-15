//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName = "Insulted";
	Duration = 5.0;
},
FunctionUpdateRelationship
{
	AffectTarget = "-10";
},
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
},