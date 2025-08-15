//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
@base/ReligionCatholicVisualEffect_Target,
DisplayEffect
{
	Tags = array{"Catholic", "Religious"};
	ApplyTo = "Target";
	DisplayGroup = "catholic";
	DisplayName = "$effect.Catholic";
	Duration = 0.0;
},
FunctionRemoveEffect
{
	ApplyTo = "Target";
	Tags = array{"Protestant"};
	MatchAny = true;
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
