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
ModifierEffect
{
	ApplyTo = "Source";
	Tags = array{"StartRomance"};
	ActorValue = "Charisma";
	Mod = -1;
	Duration = 20.0;
	Recover = true;
},
DisplayEffect
{
	Tags = array{"Rejected"};
	ApplyTo = "Source";
	DisplayGroup = "wound";
	DisplayName = "$effect.rejected";
	Duration = 20.0;
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
