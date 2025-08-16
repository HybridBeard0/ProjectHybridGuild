"KidnapCharacter" = G3ActionTemplate //Kidnap character
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 60;

	ActionClassName = "PostCombatAction";
	DisplayName = "$action.KidnapCharacterAction";
	Description = "$action.KidnapCharacterActionDesc";
	Instruction = "$callToAction.Character.Adult.Unconscious.NotAllied.NotPlayers";
	
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };
	
	ActionName = "KidnapCharacter";
	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Strength";
	TargetScoreFormula = "Dexterity*0.5";

	PriceFormula = "10000";
	BudgetPot = "Business";
	BaseRewardXP = 490;
	BaseRewardPrestige = 300;
	
	Duration = 0.005;
	Cooldown = 1;
	CooldownFamilyWide = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;
	CanFail = true; 
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Unconscious = 3;
			CloseToActor = 2;
			Boat = -3;
			NPCGuard = -3;  
			DoesNotHaveAnyTags = array{ "NoKidnap" };
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.9,-0.6,-0.9};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs1", 0, -1, -1};
	};
	
	CriticalFactor = 0.80;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Giver = "Target";
			Amount = 100;
		},
		FunctionKidnapTarget
		{
			//Nothing needed
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 20;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"CharacterKidnapped"};
		}
	};
	
	SuccessResult = array
	{
		SpreadEffect // victim is NPC, employee or dynasty character: look for one NPC witness
		{
			ApplyTo = "Source";
			UniqueTag = "KidnapCharacterRepLossNPC";
			Tags = array{"KidnapCharacterRepLossNPC"};
			SpreadResult = "MediumRepLossNPCResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.NPC"};
					TargetScoreFormula = "0";
				}
			}; 
		},
		SpreadEffect // victim is dynasty character: look for a family member of the murdered character
		{
			ApplyTo = "Target";
			UniqueTag = "KidnapCharacterRepLossDynasty";
			Tags = array{"KidnapCharacterRepLossDynasty"};
			SpreadResult = "SevereRepLossDynastyResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "MyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily && !IsEmployee"; // 0 success chance in case the victim is an NPC or an employee
				}
			}; 
		},
		SpreadEffect // victim is employee: look for a family member of the murdered character
		{
			ApplyTo = "Target";
			UniqueTag = "KidnapCharacterRepLossEmployee";
			Tags = array{"KidnapCharacterRepLossEmployee"};
			SpreadResult = "SmallRepLossDynastyResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "MyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily && IsEmployee"; // 0 success chance in case the victim is NOT an employee and/or NOT part of a dynasty
				}
			};
		},
		FunctionTransferEvidence
		{
			Receiver = "Target";
			Giver = "Target";
			IsDiceDependent = false;
			CreateEvidenceOfCurrentAction = true;
		},
		FunctionKidnapTarget
		{
			//Nothing needed
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 20;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"CharacterKidnapped"};
		}				
	};
	
	FailureResult = array
	{
		FunctionTransferEvidence
		{
			Receiver = "Target";
			Giver = "Target";
			IsDiceDependent = false;
			CreateEvidenceOfCurrentAction = true;
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"MediumRepLossDynastyResult"};
		};
		SpreadEffect // look for one NPC witness
		{
			ApplyTo = "Target";
			UniqueTag = "KidnapCharacterRepLossNPC";
			Tags = array{"KidnapCharacterRepLossNPC"};
			SpreadResult = "SmallRepLossNPCResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.NPC"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily"; // 0 success chance in case the victim is an NPC, because reputation has been already updated
				}
			};
		},
		FunctionRemoveUnconsciousness
		{
			ApplyTo = "Target";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"CombatFlee"};
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionTransferEvidence
		{
			Receiver = "Target";
			Giver = "Target";
			IsDiceDependent = false;
			CreateEvidenceOfCurrentAction = true;
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"SevereRepLossDynastyResult"};
		};
		SpreadEffect // look for one NPC witness
		{
			ApplyTo = "Target";
			UniqueTag = "KidnapCharacterRepLossNPC";
			Tags = array{"KidnapCharacterRepLossNPC"};
			SpreadResult = "MediumRepLossNPCResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.NPC"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily"; // 0 success chance in case the victim is an NPC, because reputation has been already updated
				}
			};
		},
		FunctionTransferPrestige
		{
			Receiver = "Target";
			Giver = "Source";
			Amount = 100;
		},
		FunctionRemoveUnconsciousness
		{
			ApplyTo = "Target";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"CombatFlee"};
		}
	};
};

"ChainHostage" = G3ActionTemplate //Chain the hostage up in your back room
{
	OrderIndex = 3;
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			BelongsToOwnFamily = 1;
			ContainHostage = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	ActionName = "ChainHostage";
	DisplayName = "$action.ChainHostage";
	Description = "$action.ChainHostageDesc";
	Instruction = "$selectionPrompt.SelectResidence";
	ActionActor = "Character";
	TargetActor = "Building";
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoResidence";

	//PriceFormula = "100";
	Duration = 0.04;
	BaseRewardXP = 14;

	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	EnterBuilding = "TryEnter";

	CanFail = false;
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,0,0.1};
	};

	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			Residence = 3;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};				
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "ChainHostage"; },
		};
	};
	
	SuccessResult = array
	{
		FunctionChainHostage{}
	};
};		

"Sabotage" = G3ActionTemplate //Sabotage building
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 75;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	ActionName = "Sabotage";
	DisplayName = "$Sabotage";
	Description = "$SabotageDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";

	ActionActor = "Character";
	TargetActor = "Building";

	EnterBuilding = "ForceEnter";
	SuppressBuildingEnterBehavior = true;

	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			CityBuilding = -3;
			ResourceProducer = -3;
			Business = 2;
			CityBuilding = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				PoliticalImportance = 1;
				Rich = 1;
			};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Intruder"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "destroy1"; },
		};
	};
	
	SourceScoreFormula = "Dexterity";
	TargetScoreFormula = "Level + BuildingSecurity";

	CanFail = true;

	PriceFormula = "1000";
	BudgetPot = "Other";
	Duration = 0.01; //  0.5 week
	BaseRewardXP = 175;
	Cooldown = 0.2;
	IsImmediatelyKnownByTarget = false;
	IsAggression = true;

	MoralAlignmentShift = 0.09;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.8,-1};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Sabotage"};
			ApplyTo = "Target";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.sabotaged";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Sabotage"};
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = -0.5;
			Recover = true;
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Sabotage"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -5;
			Recover = true;
			@base/DebuffBuilding
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-5";
			AffectTargetEnemies = "5";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 8;
			Amount = 0.01;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ForcedExit"};
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-10 + min(Source.Stealth / 2, 5)";
			AffectTargetAllies = "-5 + min(Source.Stealth / 4, 3)";
			AffectTargetEnemies = "5 - min(Source.Stealth / 4, 3)";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ForcedExit"};
		}
	};
};

"Vandalize" = G3ActionTemplate //Vandalism
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 70;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };
	
	ActionName = "Vandalize";

	DisplayName = "$action.Vandalize";
	Description = "$action.VandalizeDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";
	
	ActionActor = "Character";
	TargetActor = "Building";

	EnterBuilding = "ForceEnter";
	SuppressBuildingEnterBehavior = true;

	SourceScoreFormula = "Dexterity";
	TargetScoreFormula = "Level + BuildingSecurity";

	CanFail = true;
	
	PriceFormula = "500";
	BudgetPot = "Other";
	UICategory = "Fighting";
	Duration = 0.006; //  1 month
	Cooldown = 0.15;
	BaseRewardXP = 152;
	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	
	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				PoliticalImportance = -1;
				Rich = 1;
			};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Intruder"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "destroy1"; },
		};
	};

	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,-0.6,-0.5};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Vandalize"};
			ApplyTo = "Target";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.Vandalized";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Vandalize"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -15;
			Recover = true;
			@base/DebuffBuilding
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10 + min(Source.Stealth / 2, 5)";
			AffectTargetAllies = "-5 + min(Source.Stealth / 4, 3)";
			AffectTargetEnemies = "5 - min(Source.Stealth / 4, 3)";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.05;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 8;
			Amount = 0.01;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ForcedExit"};
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
			AffectTargetAllies = "-4";
			AffectTargetEnemies = "4";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ForcedExit"};
		}
	};
};

"GoSpyBuilding" = G3ActionTemplate //Spy on a building
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 50;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	ActionName = "GoSpyBuilding";
	DisplayName = "$action.SpyBuilding";
	Description = "$action.SpyBuildingDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Dexterity + Perception + (Source.hasTag.LockPicking*5)";
	
	TargetScoreFormula = "Level + BuildingSecurity";

	PriceFormula = "350";
	BudgetPot = "Diplomacy";
	BaseRewardXP = 150;
	DistanceFromTarget = 300;

	IsImmediatelyKnownByTarget = false;

	CanFail = true;
	
	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{
		// for neighborhood
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			ActiveResidence = 1;
			Burning = -3;
			Business = 1;
			Buyable = 1;
			CloseToActor = 1;
			Guarded = 1;
			Open = 1;
			ResourceProducer = 1;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
				PoliticalImportance = 1;
				Rich = 1;
			};
		},
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,0,-0.3};
	};
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"SpyBuilding"};
		}
	};
	
	//On Failure do nothing
};

"SpyBuilding" = G3ActionTemplate //Spy on a building
{
	GUIPresent = false;

	ActionClassName = "SpyAction";
	
	ActionName = "SpyBuilding";
	DisplayName = "$action.SpyBuilding";
	Description = "$action.SpyBuildingDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Building";

	Duration = 1; // year
	BaseRewardXP = 145;

	IsImmediatelyKnownByTarget = false;
	DistanceFromTarget = 400.0;

	CanFail = false;
	
	ShowCombatText = false;			
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};
};

"EscortCharacter" = G3ActionTemplate //Escort someone
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 60;

	ActionClassName = "EscortCharacterAction";

	GUIData = array
	{
		@base/Henchmen,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Mercenary";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen", "$profession.Lansquenet" };
	
	ShowCombatText = false;

	ActionName = "EscortCharacter";
	DisplayName = "$action.EscortCharacter";
	Description = "$action.EscortCharacterDesc";
	Instruction = "$callToAction.CharacterAdult";
	
	ActionActor = "Character";
	TargetActor = "Character";

	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Perception";

	Duration = -1;	// no time limit
	BaseRewardXP = 0;
	
	DistanceFromTarget = 150;

	CanFail = false;
	
	RestartAfterUnconsciousness = true;
	ResumeProgress = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};
	
	TargetTags = array{"Hand"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Leader = 2;
			MatchTargetTags = 1;
			Guarded = -1;
			Employee = -3;
			Transporter = -3;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		}
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 4;
			Amount = -0.01;
		},
	};
};

"StealthKillCharacter" = G3ActionTemplate //Eliminate someone
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 65;

	ActionClassName = "StealthAction";
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	ActionName = "StealthKillCharacter";
	DisplayName = "$action.StealthKillCharacter";
	Description = "$action.StealthKillCharacterDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayersNotAllies";
	ActionActor = "Character";
	TargetActor = "Character";

	Duration = 0.003;
	Cooldown = 0.75;
	CooldownFamilyWide = true;
	BaseRewardXP = 450;
	PriceFormula = "20000";
	BudgetPot = "Diplomacy";
	BudgetPost = "Fighting";

	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	SourceScoreFormula = "Dexterity * 0.25 + Stealth * 0.5";

	TargetScoreFormula = "Perception";

	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	CanFail = true;
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			OfficeHolder = 1;
			Leader = 1;
			NPC = -2;
			InLoveWithMe = -2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-1,0,-0.5};
	};
	
	CriticalFactor = 1.0;

	SuccessResult = array
	{
		SpreadEffect // victim is NPC, employee or dynasty character: look for one NPC witness
		{
			ApplyTo = "Source";
			UniqueTag = "KillCharacterRepLossNPC";
			Tags = array{"KillCharacterRepLossNPC"};
			SpreadResult = "MediumRepLossNPCResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.NPC"};
					TargetScoreFormula = "0";
				}
			}; 
		},
		SpreadEffect // victim is dynasty character: look for a family member of the murdered character
		{
			ApplyTo = "Target";
			UniqueTag = "KillCharacterRepLossDynasty";
			Tags = array{"KillCharacterRepLossDynasty"};
			SpreadResult = "SevereRepLossDynastyResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "MyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily && !IsEmployee"; // 0 success chance in case the victim is an NPC or an employee
				}
			}; 
		},
		SpreadEffect // victim is employee: look for a family member of the murdered character
		{
			ApplyTo = "Target";
			UniqueTag = "KillCharacterRepLossEmployee";
			Tags = array{"KillCharacterRepLossEmployee"};
			SpreadResult = "SmallRepLossDynastyResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "MyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily && IsEmployee"; // 0 success chance in case the victim is NOT an employee and/or NOT part of a dynasty
				}
			};
		},
		FunctionKill
		{
			ApplyTo = "Target";
			Killer = "Source";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.05;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 4;
			Amount = 0.01;
		},
	};			
	FailureResult = array
	{
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"MediumRepLossDynastyResult"};
		};
		SpreadEffect // look for one NPC witness
		{
			ApplyTo = "Target";
			UniqueTag = "KillCharacterRepLossNPC";
			Tags = array{"KillCharacterRepLossNPC"};
			SpreadResult = "SmallRepLossNPCResult";
			Radius = 750.0;
			Duration = 1;
			SpreadChance = 1.0;
			SpreadFrequency = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			UseOwnSourceForAppliedEffects = true; // Effects that are applied to the witness shall be applied directly from the killer (instead of from the victim)
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.NPC"};
					TargetScoreFormula = "0";
					SourceScoreFormula = "HasFamily"; // 0 success chance in case the victim is an NPC, because reputation has been already updated
				}
			};
		},
	};
};

"FindEvidence" = G3ActionTemplate //Find evidence
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 45;

	ActionClassName = "TalkToNeighborhoodAction";

	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	ActionName = "FindEvidence";
	ActionActor = "Character";
	TargetActor = "Coordinate";
	DisplayName = "$action.FindEvidence";
	Description = "$action.FindEvidenceDesc";
	
	SourceScoreFormula = "Charisma";
	
	Duration = 0.1667; // 2 months
	BaseRewardXP = 80;
	PriceFormula = "200";
	BudgetPot = "Diplomacy";
	CanFail = true;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.25,0};
	};
	
	CriticalFactor = 1.0; //no critical
	
	Instruction = "$callToAction.Neighborhood";
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			CloseToActor = 2;
			OnStreet = 3;
			QuarterSurrounding = -3;
			Inhabitated = 3;
		}
	};
	
	SuccessResult = array
	{
		FunctionTransferEvidence
		{
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 20;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "-10";
		}
	};
};

"StartHenchmenConquerBuilding" = G3ActionTemplate //Conquer building
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 80;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByHenchmen" };

	DisplayName = "$action.ConquerBuilding";
	Description = "$action.ConquerBuildingDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";
	
	ActionName = "StartHenchmenConquerBuilding";
	ActionActor = "Character";
	TargetActor = "Building";
	
	ShowCombatText = false;
	
	Cooldown = 1;
	PriceFormula = "3000";
	BudgetPot = "Diplomacy";
	
	NeedSkillToPerform = true;

	CanFail = false;
	
	TargetTags = array{"FreemasonsGift", "NoConquer"};
	DesiredProfiles = array
	{
		// for neighborhood
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ResourceProducer = -3;
			ActiveResidence = 1;
			Burning = -3;
			Guarded = -1;
			DynastyMember = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
			};
		},			
	};

	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,0,-0.6};
	};

	OnStartResult = array
	{
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"HenchmenConquerBuilding"};
		}
	};
};

"HenchmenConquerBuilding" = G3ActionTemplate //Conquer building
{
	UICategory = "Fighting";
	ActionClassName = "ConquerBuildingAction";
	ActionName = "HenchmenConquerBuilding";
	DisplayName = "$action.ConquerBuilding";
	Description = "$action.ConquerBuildingDesc";
	ActionActor = "Character";
	TargetActor = "Building";
	
	BaseRewardXP = 276;
	BaseRewardPrestige = 750;
	
	IsAggression = true;
	IsImmediatelyKnownByTarget = true;

	CanFail = false;
	
	// Results are applied from code for 2 reasons:
	// - Some messages and relationship changes need to be applied when the old owner
	//   of the building loses ownership. This is only half-way in the conquering process.
	//   (the second half is the new owner acquiring ownership of the now neutral building)
	// - The results should be applied only once, even if multiple henchmen are executing
	//   the conquer building action at the same time (on the same building).
};

"PoisonNeighborhood" = G3ActionTemplate //Poison well
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 55;

	ActionClassName = "SimpleExecutionAction";

	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	TargetActor = "Building";
	SourceRun = true;
	PriceFormula = "2500";
	BudgetPot = "Diplomacy";
	Duration = 0.0012;
	Cooldown = 1.0;
	CooldownFamilyWide = true;

	ActionName = "PoisonNeighborhood";
	DisplayName = "$action.PoisonNeighborhood";
	Description = "$action.PoisonNeighborhoodDesc";
	Instruction = "$callToAction.Well";
	
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	TargetScoreFormula = "1";

	BaseRewardXP = 340;
	
	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"dumpdown_liquid", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "antidote/antidote" }; };
	};
	
	DistanceFromTarget = 55;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 1;
			IncludedTypes = array{"Well"};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "PoisonNeighborhood"; },
		};
	};

	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.7;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.9,-0.9,-0.9};
	};
	
	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"SpreadingDisease", "Poison"};
			Duration = 540;
			DisplayGroup = "poison";
			DisplayName = "$action.PoisonNeighborhood";
		},
		FunctionPickRandom
		{
			ResultObjectIds =  array{"PoisonWellSpreadCold", "PoisonWellSpreadCold", "PoisonWellSpreadCold", "PoisonWellSpreadLeprosy", "PoisonWellSpreadLeprosy", "PoisonWellSpreadPlague"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
};