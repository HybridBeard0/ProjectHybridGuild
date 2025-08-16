"PlunderGraves" = G3ActionTemplate //Plunder graves
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 10;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			Filter = "Workplace.hasTag.Gravedigger";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "1 + Intelligence + Target.FireProtection*0.5";
	TargetScoreFormula = "3/Level + 2/BuildingSecurity";

	ActionName = "PlunderGraves";
	DisplayName = "$action.PlunderGraves";
	Description = "$action.PlunderGravesDesc";
	Instruction = "$callToAction.PickACemetery";

	Duration = 0.0830; //1/24
	Cooldown = 0.0415; //1/24
	BaseRewardXP = 85;
	CanFail = true;
	IsImmediatelyKnownByTarget = false;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.5,-0.3};
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
			TargetProfileSnapPoint{ Context = "PlunderGraves"; },
		};
	};
	
	EnterBuilding = "ForceEnter";

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"summoning", 0, -1, -1};
	};
	
	CriticalFactor = 0.95;
	
	CriticalSuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Obligation", "Purse", "GemRing", "SilverRing", "GoldChain", "Rapier", "RubinStaff", "Pistol", "Diamond", "StoneSoldier", "Platemail"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Obligation", "Purse", "Torch", "Dagger", "BoneBracelet", "OakwoodRing", "SlateBoard", "SpinningTop", "Shield", "LeatherGloves", "WalkingStick"};
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
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 2;
			MaxAmount = 5;
			SpecificItems = array{"Bone"};
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
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Remains"};
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
			@base/DebuffCharacter
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
			@base/DebuffCharacter
			Recover = true;
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDeleteRemains"};
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};