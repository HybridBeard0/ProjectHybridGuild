DialogueSuccessType
{
	  Type = "Success";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "PlayerInsulted";
},
FunctionTriggerAction
{
	ApplyTo = "Target";
	Actions = array{"AttackCharacter"};
},
FunctionUpdateRelationship
{
	AffectTarget = "-10";
	AffectLiaison = "-50";
},
SpreadEffect
{
	ApplyTo = "Target";
	UniqueTag = "DuelInsultSuccess";
	Tags = array{"DuelInsultSuccess"};
	SpreadResult = "DuelInsultSpread";
	Radius = 300.0;
	Duration = 1;
	SpreadChance = 1;
	SpreadToEveryone = true;
	TickOnce = true;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"Outside", "IsConscious", "NotInCombat", "NotFleeing"};
			TargetScoreFormula = "Intelligence*0.25";
		}
	}; 
}
