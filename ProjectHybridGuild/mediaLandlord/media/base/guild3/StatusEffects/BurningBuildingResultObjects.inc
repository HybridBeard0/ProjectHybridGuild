ResultObject
{
	Id = "StartFireLow";
	DisplayName = "$Burning";
	Results = array
	{
		ModifierEffect
		{
			Tags = array{"FireDamage"};
			ApplyTo = "Target";
			ActorValue = "FireLevel";
			Mod = 25;
		},
		DisplayEffect
		{
			Tags = array{"FireDamage"};
			ApplyTo = "Target";
			DisplayGroup = "fire";
			DisplayName = "$effect.burning";
		}
	};
},

ResultObject
{
	Id = "StopFire";
	DisplayName = "$effect.drenched";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array{"FireDamage", "FireSpread"};
		},
		ModifierEffect
		{
			Tags = array{"FireProtection"};
			ApplyTo = "Target";
			ActorValue = "FireProtection";
			Mod = 50.0;
			Duration = 360.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"FireProtection"};
			ApplyTo = "Target";
			DisplayGroup = "drenched";
			DisplayName = "$effect.drenched";
			Duration = 360.0;
		}
	};
},

ResultObject
{
	Id = "FireSpreadLow";
	DisplayName = "$Burning";
	Results = array
	{
		FunctionRemoveEffect //When switching from one fire spread intensity to the other, remove the old spread
		{
			ApplyTo = "Target";
			Tags = array{"FireSpread"};
		},
		SpreadEffect
		{
			UniqueTag = "BurnHousesAndBusinesses";
			Tags = array{"FireSpread"};
			SpreadTags = array{"FireDamage", "FireSpread"};
			SpreadResult = "StartFireLow";
			Radius = 150.0;
			Duration = 0;
			SpreadFrequency = 8;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"Business"};
					TargetScoreFormula = "(Level + 4 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				},
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"House"};
					TargetScoreFormula = "(Level + 4 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				}
			}; 
		}
	};
},

ResultObject
{
	Id = "FireSpreadMed";
	DisplayName = "$Burning";
	Results = array
	{
		FunctionRemoveEffect //When switching from one fire spread intensity to the other, remove the old spread
		{
			ApplyTo = "Target";
			Tags = array{"FireSpread"};
		},
		SpreadEffect
		{
			UniqueTag = "BurnHousesAndBusinesses";
			Tags = array{"FireSpread"};
			SpreadTags = array{"FireDamage", "FireSpread"};
			SpreadResult = "StartFireLow";
			Radius = 250.0;
			Duration = 0;
			SpreadFrequency = 6;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"Business"};
					TargetScoreFormula = "(Level + 2 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				},
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"House"};
					TargetScoreFormula = "(Level + 2 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				}				
			}; 
		}
	};
},


ResultObject
{
	Id = "FireSpreadHigh";
	DisplayName = "$Burning";
	Results = array
	{
		FunctionRemoveEffect //When switching from one fire spread intensity to the other, remove the old spread
		{
			ApplyTo = "Target";
			Tags = array{"FireSpread"};
		},
		SpreadEffect
		{
			UniqueTag = "BurnHousesAndBusinesses";
			Tags = array{"FireSpread"};
			SpreadTags = array{"FireDamage", "FireSpread"};
			SpreadResult = "StartFireLow";
			Radius = 350.0;
			Duration = 0;
			SpreadFrequency = 3;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"Business"};
					TargetScoreFormula = "(Level + 1.5 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				},
				SpreadTargetRule
				{
					TargetType = "Building";
					TargetProperties = array{"House"};
					TargetScoreFormula = "(Level + 1.5 * FireProtection) * (1 + Health.ratio)";
					SourceScoreFormula = "FireLevel * 0.1";
				}
			}; 
		}
	};
}