//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
VisualEffect
{
	ApplyTo = "Target";
	VisualName = "Compliment";
	Duration = 10.0;
},
FunctionUpdateRelationship
{
	AffectLiaison = "(15 + (Target.hasTag.RomPrefMoreDistance * 3)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
},
FunctionAffectNeeds
{
	ApplyTo = "Target";
	ProductType = 2;
	Amount = 0.01;
},
FunctionAffectNeeds
{
	ApplyTo = "Target";
	ProductType = 6;
	Amount = 0.01;
},
FunctionPickRandom
{
	ApplyTo = "Target";
	ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.Artist", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
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
