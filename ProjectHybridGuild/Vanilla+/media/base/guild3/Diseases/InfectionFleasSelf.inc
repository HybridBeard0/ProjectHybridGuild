DisplayEffect
{
    Tags = array{"Fleas","Pest"};
    ApplyTo = "Self";
    DisplayGroup = "sick";
    DisplayName = "$effect.InfectedWithFleas";
    @base/MildDisease
},
VisualEffect
{
	Tags = array{"Fleas","Pest"};
    ApplyTo = "Self";
	VisualName = "Pests";
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	ActorValue = "MovementSpeedMult";
	Mod = -0.02;
	Recover = true;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	ActorValue = "BargainingBonus";
	Mod = -2;
	Recover = true;
	@base/MildDisease
},
DelayedExecutionEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	ResultObjectIds = array { "RecentlyCuredSelf" };
	@base/MildDisease
},
SpreadEffect
{
	UniqueTag = "InfectionFleas";
	ApplyTo = "Self";
	Tags = array{"Fleaspread"};
	SpreadTags = array{"FleeInfection", "Fleaspread"};
	SpreadResult = "InfectWithFleas";
	Radius = 250.0;
	@base/MildDisease
	SpreadChance = 0.9;
	SpreadFrequency = 5;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"IsInSameRoom", "Adult"};
			TargetScoreFormula = "Resistance";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"IsInSameRoom", "Child"};
			TargetScoreFormula = "Resistance";
		},
	};
}