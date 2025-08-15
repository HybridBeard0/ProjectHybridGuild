DisplayEffect
{
    Tags = array{"Fleas","Pest"};
    ApplyTo = "Self";
    DisplayGroup = "sick";
    DisplayName = "$effect.InfectedWithFleas";
    Duration = 60.0;
},
VisualEffect
{
	Tags = array{"Fleas","Pest"};
    ApplyTo = "Self";
	VisualName = "Pests";
	Duration = 60; 
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	ActorValue = "MovementSpeedMult";
	Mod = -0.02;
	Duration = 60.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	ActorValue = "BargainingBonus";
	Mod = -2;
	Duration = 60.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Self";
	Duration = 60.0;
	ResultObjectIds = array { "RecentlyCuredSelf" };
},
SpreadEffect
{
	UniqueTag = "InfectionFleas";
	ApplyTo = "Self";
	Tags = array{"Fleaspread"};
	SpreadTags = array{"FleeInfection", "Fleaspread"};
	SpreadResult = "InfectWithFleas";
	Radius = 250.0;
	Duration = 540;
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