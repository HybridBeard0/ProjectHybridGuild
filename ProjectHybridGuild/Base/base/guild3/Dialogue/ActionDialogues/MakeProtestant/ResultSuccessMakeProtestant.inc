//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
@base/ReligionProtestantVisualEffect_Target,
DisplayEffect
{
	Tags = array{"Protestant", "Religious"};
	ApplyTo = "Target";
	DisplayGroup = "protestant";
	DisplayName = "$effect.Protestant";
	Duration = 0.0;
},
FunctionRemoveEffect
{
	ApplyTo = "Target";
	Tags = array{"Catholic"};
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