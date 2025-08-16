"MakeEvocation" = G3ActionTemplate //Summoning
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 65;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Intelligence + Target.FireProtection*0.5";
	TargetScoreFormula = "3/Level + 2/BuildingSecurity";

	ActionName = "MakeEvocation";
	DisplayName = "$action.MakeEvocation";
	Description = "$action.MakeEvocationDesc";
	Instruction = "$callToAction.PickACemetery";

	Duration = 0.083; //1/12
	Cooldown = 0.0415; //1/24
	BaseRewardXP = 155;
	CanFail = true;
	IsImmediatelyKnownByTarget = false;
	
	MoralAlignmentShift = 0.25;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.9,-0.5,0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.PickACemetery";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoCemetery";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Cemetery"};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "MakeEvocation"; },
		};
	};

	EnterBuilding = "ForceEnter";
	
	CriticalFactor = 0.6;
	
	CriticalSuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 2;
			MaxAmount = 6;
			SpecificItems = array{"Amber", "Brocade", "Ivory", "Pearl", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 4;
			SpecificItems = array{"Amber", "Brocade", "Ivory", "Pearl", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine"};
		},
		DisplayEffect
		{
			Tags = array{"MakeEvocationFailed"};
			ApplyTo = "Source";
			Duration = 300;
			DisplayGroup = "alarm";
			DisplayName = "$effect.MakeEvocationRumor";
		},
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "-8";
		},
		SpreadEffect
		{
			ApplyTo = "Source";
			UniqueTag = "MakeEvocationFailedEffect";
			Tags = array{"MakeEvocationFailed"};
			SpreadResult = "MakeEvocationRumor";
			Radius = 300.0;
			Duration = 300;
			SpreadChance = 0.5;
			SpreadFrequency = 4;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasNotTag.MakeEvocationRumor"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"MakeEvocationFailed"};
			ApplyTo = "Source";
			Duration = 300;
			DisplayGroup = "alarm";
			DisplayName = "$effect.MakeEvocationRumor";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
		},
		SpreadEffect
		{
			ApplyTo = "Source";
			UniqueTag = "MakeEvocationFailedEffect";
			Tags = array{"MakeEvocationFailed"};
			SpreadResult = "MakeEvocationRumor";
			Radius = 300.0;
			Duration = 300;
			SpreadChance = 0.5;
			SpreadFrequency = 4;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasNotTag.MakeEvocationRumor"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
	CriticalFailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"MakeEvocationFailed"};
			ApplyTo = "Source";
			Duration = 300;
			DisplayGroup = "alarm";
			DisplayName = "$effect.MakeEvocationRumor";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
		},
		SpreadEffect
		{
			ApplyTo = "Source";
			UniqueTag = "MakeEvocationFailedEffect";
			Tags = array{"MakeEvocationFailed"};
			SpreadResult = "MakeEvocationRumor";
			Radius = 300.0;
			Duration = 300;
			SpreadChance = 0.5;
			SpreadFrequency = 4;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasNotTag.MakeEvocationRumor"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		},
		DisplayEffect
		{
			Tags = array{"EvocationDamage"};
			ApplyTo = "Source";
			Duration = 300;
			DisplayGroup = "sick";
			DisplayName = "$effect.Corrupted";
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"EvocationDamage"};
			ActorValue = "Health";
			Mod = -20;
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"EvocationDamage"};
			ActorValue = "Strength";
			Mod = -2;
			Duration = 300;
			Recover = true;
		},
	};
};