//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
@base/ReligionSecularVisualEffect_Target,
FunctionRemoveEffect
{
	ApplyTo = "Target";
	Tags = array{"Catholic", "Protestant", "Religious"};
	MatchAny = true;
},
FunctionSpawnCombatText
{
	ApplyTo = "Target";
	Text = "$feedback.EffectHealedcatholic";
	Positive = true;
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