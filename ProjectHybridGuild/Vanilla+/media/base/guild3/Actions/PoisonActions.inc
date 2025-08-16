"ApplyBlackWidowPoison" = G3ActionTemplate //Black widow poison
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	
	SourceScoreFormula = "Dexterity + (Stealth / 2)";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
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

	TargetActor = "Character";
	
	TargetScoreFormula = "Perception + Target.hasTag.eventbuffSenseForDanger * 10";
	
	ArtefactName = "BlackWidowPoison";
	BaseRewardXP = 26;
	Cooldown = 0.04167; //1 hour
	CooldownFamilyWide = true;

	ActionName = "ApplyBlackWidowPoison";
	DisplayName = "$BlackWidowPoison";
	Description = "$BlackWidowPoisonDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-1,-0.5,-0.75};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"poison_human", 0, -1, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonBlackWidowPoison"};
		},

		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.03;
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.08;
		},
	};
	
	FailureResult = array
	{				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-15";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "6";
			AffectLiaison = "-25";
		},
	};

	OnEndResult = array
	{
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertCharacter"};
		};
	};
};

"ApplyParalysisPoison" = G3ActionTemplate //Paralysis poison
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Dexterity + (Stealth / 2)";
	TargetScoreFormula = "Perception + Target.hasTag.eventbuffSenseForDanger * 10";	

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
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
	
	ArtefactName = "ParalysisPoison";
	BaseRewardXP = 22;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyParalysisPoison";
	DisplayName = "$ParalysisPoison";
	Description = "$ParalysisPoisonDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.4,-0.6};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"blowingpipe", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonParalysisPoison"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.06;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.05;
		},
	};
	
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-15";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "6";
			AffectLiaison = "-25";
		},
	};

	OnEndResult = array
	{
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertCharacter"};
		};
	};
};
	
"ApplyGhostlyFog" = G3ActionTemplate //Ghostly fog
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Charisma + (Stealth / 2)";
	TargetScoreFormula = "Intelligence + Target.hasTag.eventbuffSenseForDanger * 10";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = 1;
				SocialHigher = 1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = 1;
				SocialHigher = 1;
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
	
	ArtefactName = "GhostlyFog";
	BaseRewardXP = 18;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyGhostlyFog";
	DisplayName = "$GhostlyFog";
	Description = "$GhostlyFogDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.4,-0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"poison_human", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"courting_process_receive", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonGhostlyFog"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.05;
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.03;
		},
	};
	
	FailureResult = array
	{				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-15";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "6";
			AffectLiaison = "-25";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertCharacter"};
		};
	};
};

"UseFlowerOfDiscord" = G3ActionTemplate //Use flower of discord
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData // Leader in the action bar
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	UICategory = "Artifact";
	Cooldown = 0.0415;
	Duration = 0.005;

	ArtefactName = "FlowerOfDiscord";
	ActionName = "UseFlowerOfDiscord";
	DisplayName = "$UseFlowerOfDiscord";
	Description = "$UseFlowerOfDiscordDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1;

	EnterBuilding = "TryEnter";

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			SimilarSocialStandingToMine = 2;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				SocialHigher = -1;
				PoliticalImportance = 1;
				HigherRank = -1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
				TargetProfileBuilding // inside my residence
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						MyFamily = 3;
					};
				},
				TargetProfileBuilding // inside the residence of an ally
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						Alliance = 3;
					};
				},
				TargetProfileBuilding // inside a city building
				{
					IncludedTypes = array{"Cityhall", "Church", "cathedrale", "Arsenal"};
				},
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			Boat = -3;
			SimilarSocialStandingToMine = 2;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				SocialHigher = -1;
				PoliticalImportance = 1;
				HigherRank = -1;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
				TargetProfileBuilding // inside my residence
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						MyFamily = 3;
					};
				},
				TargetProfileBuilding // inside the residence of an ally
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						Alliance = 3;
					};
				},
				TargetProfileBuilding // inside a city building
				{
					IncludedTypes = array{"Cityhall", "Church", "cathedrale", "Arsenal"};
				},
			};
		}
	};

	ShowSelectionPrompt = "FamilySelectionNoTargetNoSource";
	SelectionPromptCallToAction = "$selectionPrompt.SelectFamily";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFamilies";

	ThirdPartyProfiles = array
	{
		TargetProfileFamily
		{
			MyFamily = -3;
			PoliticalImportance = 2;
			HigherRank = 1;
			Rich = 1;
		};
	};

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,-0.4,-0.4};
	};
	DistanceFromTarget = 100;
	DistanceFromTargetMin = 100;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"smear", 5, 71, -1};
	};
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "-20";
			AffectSource = "-20";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "UseFlowerOfDiscordVictim1";
		},
		FunctionSendMessage
		{
			ApplyTo = "Context";
			Description = "UseFlowerOfDiscordVictim2";
		}
	};
};

// poison effects

"ApplyPoisonBlackWidowPoison" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonBlackWidowPoison";
	DisplayName = "$BlackWidowPoison";
	Description = "$BlackWidowPoisonDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			Tags = array{"Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 2.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$BlackWidowPoison";
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.5;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = false;
		};
	};
};

"ApplyPoisonParalysisPoison" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonParalysisPoison";
	DisplayName = "$ParalysisPoison";
	Description = "$ParalysisPoisonDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$ParalysisPoison";
			Duration = 180.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Speed";
			Mod = -25.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Dexterity";
			Mod = -2.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Strength";
			Mod = -1.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
	};
};

"ApplyPoisonGhostlyFog" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonGhostlyFog";
	DisplayName = "$GhostlyFog";
	Description = "$GhostlyFogDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			Tags = array{"Poisoned", "GhostlyFog"};
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$GhostlyFog";
			Duration = 180;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			ActorValue = "Intelligence";
			Mod = -2.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = -1.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Alerted"};
		};
	};
};