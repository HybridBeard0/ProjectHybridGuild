"WinBelievers" = G3ActionTemplate //Gain believers in the village
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 11;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Preacher";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Preacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Preacher", 1 }
	};
	
	ActionName = "WinBelievers";
	DisplayName = "$WinBelievers";
	Description = "$WinBelieversDesc";
	Instruction = "$callToAction.StreetAreaVillage";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "WinBelievers";

	SourceScoreFormula = "2 + Intelligence + Intimidation * 0.5 + Motivation";
	Duration = 0.0385;
	BaseRewardXP = 25;
	CanFail = false;
	CriticalFactor = 1.0;
	
	// List of needs this action will fulfill. Only used as a reference.
	// FunctionAffectServiceNeeds is still necessary to apply the results
	ServiceNeeds = map
	{
		"RecreationNeed" = 0.5;
	};

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			QuarterSurrounding = -3;
			QuarterCity = -3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
		
	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.5,0};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};

	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + Source.Charisma + Source.Intimidation";
			MaxTransferred = 50;
		},
		FunctionAffectServiceNeeds
		{
			ApplyTo = "Self";
			ServiceNeeds = map
			{
				"RecreationNeed" = -1.0;
			};
		},
		SpreadEffect // (source == catholic) && (target == secular)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-SecularResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == catholic) && (target == protestant)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-ProtestantResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == secular)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-SecularResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == catholic)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-CatholicResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && (target == secular)
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-SecularResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && ((target == catholic) || (target == protestant))
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-ReligiousResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		}
	};
};

"WinBelieversCity" = G3ActionTemplate //Gain believers in the city
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 16;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "CityPreacher";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.CityPreacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CityPreacher", 1 }
	};
	
	ActionName = "WinBelieversCity";
	DisplayName = "$WinBelieversCity";
	Description = "$WinBelieversCityDesc";
	Instruction = "$callToAction.StreetAreaCity";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "WinBelievers";

	SourceScoreFormula = "2 + Intelligence + Intimidation * 0.5 + Motivation";
	Duration = 0.0385;
	BaseRewardXP = 25;
	CanFail = false;
	CriticalFactor = 1.0;

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			QuarterSurrounding = -3;
			QuarterCity = 3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};  
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
		
	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.5,0};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};

	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + (2 * (Source.Charisma + Source.Intimidation))";
			MaxTransferred = 50;
		},
		SpreadEffect // (source == catholic) && (target == secular)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-SecularCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == catholic) && (target == protestant)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-ProtestantCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == secular)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-SecularCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == catholic)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-CatholicCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && (target == secular)
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-SecularCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && ((target == catholic) || (target == protestant))
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-ReligiousCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		}
	};
};

"WinBelieversCityOnStage" = G3ActionTemplate //Gain believers on a rostrum
{
	GUIPresent = true;
	UICategory = "Religion";
	OrderIndex = 17;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "CityPreacher";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.CityPreacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CityPreacher", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "WinBelieversCityOnStage";
	DisplayName = "$WinBelieversCityOnStage";
	Description = "$WinBelieversCityDesc";
	Instruction = "$callToAction.OwnStage";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnStage";
	SelectionPromptNoTargetMessage = "$callToAction.OwnStage.PromptNoTarget";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"Occupied"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			MatchTargetTags = -3;
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;			
		},
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "WinBelieversCityOnStage"; },
		};
	};
	
	BaseRewardXP = 30;
	DestinationsPointOfInterestType = "WinBelievers";

	SourceScoreFormula = "2 + Intelligence + Intimidation * 0.5 + Motivation";
	
	Duration = 0.0385;
	CanFail = false;
	CriticalFactor = 1.0;
	
	EnterBuilding = "ForceEnter";
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.5,0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};  
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};

	OnStartResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"Occupied"};
			DisplayGroup = "closed";
			Duration = 0.0;
			DisplayName = "$effect.occupied";
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Occupied"};
		},
	};

	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + (2 * (Source.Charisma + Source.Intimidation))";
			MaxTransferred = 50;
		},
		SpreadEffect // (source == catholic) && (target == secular)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-SecularCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == catholic) && (target == protestant)
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversCatholic-ProtestantCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == secular)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-SecularCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == protestant) && (target == catholic)
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversProtestant-CatholicCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && (target == secular)
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-SecularCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
				}
			};
		},
		SpreadEffect // (source == secular) && ((target == catholic) || (target == protestant))
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "WinBelieversSecular-ReligiousCityResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
};

"GiveSermon" = G3ActionTemplate //Deliver a sermon in the village
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 10;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Preacher";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Preacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Preacher", 1 }
	};
	
	ActionName = "GiveSermon";
	DisplayName = "$GiveSermon";
	Description = "$GiveSermonDesc";
	Instruction = "$callToAction.StreetAreaVillage";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "PublicSermon";

	SourceScoreFormula = "(Intelligence + Charisma) * 2 + Motivation";
	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			QuarterCity = -3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.6,0.4,0.25};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + Source.Charisma + Source.Intimidation";
			MaxTransferred = 50;
		},
		SpreadEffect // source = catholic
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonCatholicResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 0.5";
				}
			};
		},
		SpreadEffect // source = protestant
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonProtestantResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 0.5";
				}
			};
		},
		SpreadEffect // source = secular
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonSecularResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		}
	};
};

"GiveSermonCity" = G3ActionTemplate //Deliver a sermon in the city
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 15;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "CityPreacher";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.CityPreacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CityPreacher", 1 }
	};
	
	ActionName = "GiveSermonCity";
	DisplayName = "$GiveSermonCity";
	Description = "$GiveSermonCityDesc";
	Instruction = "$callToAction.StreetAreaCity";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "PublicSermon";

	SourceScoreFormula = "(Intelligence + Charisma) * 2 + Motivation";
	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			QuarterCity = 3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
		
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.6,0.4,0.25};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + (2 * (Source.Charisma + Source.Intimidation))";
			MaxTransferred = 50;
		},
		SpreadEffect // source = catholic
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonCatholicCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 0.5";
				}
			};
		},
		SpreadEffect // source = protestant
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonProtestantCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 0.5";
				}
			};
		},
		SpreadEffect // source = secular
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "PublicSermonSecularCityResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Intelligence * 2 + ReligionStolidity";
				}
			};
		}
	};
};

"ChurchService" = G3ActionTemplate //Hold a church service in the village
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 12;
	GUIData = array
	{
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsEmployee = 1;
			IsTransporter = 0;
			BelongsToOwnFamily = 1;
			Filter = "Workplace.hasTag.Preacher";
		},
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Preacher";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$profession.Preacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Preacher", 1 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			Workplace = 3; // Make sure employees only perform this in their workplace instead of any fitting building.
			Burning = -3;
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "ChurchService"; },
		};
	};
	
	OnlyExecute = false;
	EnterBuilding = "TryEnter";
				
	ActionClassName = "BuildingSoundAction";
	DestinationsPointOfInterestType = "ChurchService";
		
	ActionName = "ChurchService";
	DisplayName = "$ChurchService";
	Description = "$ChurchServiceDesc";
	Instruction = "$callToAction.PickOwnPreacherHut";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.PickOwnPreacherHut";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoOwnPreacherHut";
	HideSelectionPromptCancelButton = true;

	SourceScoreFormula = "(Intelligence + (Charisma * 0.75)) * 2 + Motivation";
	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
		
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ChurchServiceOver"};
		},
		SpreadEffect // source = catholic --> no EMPLOYEE
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceCatholicResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
			};
		},
		SpreadEffect // source = catholic --> EMPLOYEE
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceCatholicEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				}
			};
		},
		SpreadEffect // source = protestant --> no EMPLOYEE
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceProtestantResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
			};
		},
		SpreadEffect // source = protestant --> EMPLOYEE
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceProtestantEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				}
			};
		},
		SpreadEffect // source = secular --> no EMPLOYEE
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceSecularResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				}
			};
		},
		SpreadEffect // source = secular --> EMPLOYEE
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			UniqueTag = "ChurchService";
			Tags = array{"ChurchService"};
			SpreadResult = "ChurchServiceSecularEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				}
			};
		},
	};
	
	MoralAlignmentShift = 0.008;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.7, 0.7, 0.25};
	};
};

"ChurchServiceOver" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ChurchServiceOver";
	DisplayName = "$ChurchService";
	Description = "$ChurchServiceDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ShowCombatText = true;

	SourceScoreFormula = "Intelligence + (Charisma * 0.75) + Motivation";
	TargetScoreFormula = "2";

	CanFail = true;
	CriticalFactor = 0.95;
	
	BudgetPost = "Religion";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "praying_looksky"; },
		};
	};
	
	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "75 + ((Intelligence + (Charisma * 0.75)) * 0.75)";
			MaxTransferred = 125;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "2";
		},
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "50 + ((Intelligence + (Charisma * 0.75)) * 0.5)";
			MaxTransferred = 90;
		},
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + ((Intelligence + (Charisma * 0.75)) * 0.2)";
			MaxTransferred = 45;
		},
	};
	CriticalFailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = 12;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-2";
		},
	};
};

"ChurchServiceCity" = G3ActionTemplate //Hold a church service in the city
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 17;
	GUIData = array
	{
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsEmployee = 1;
			IsTransporter = 0;
			BelongsToOwnFamily = 1;
			Filter = "Workplace.hasTag.CityPreacher";
		},
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "CityPreacher";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$profession.CityPreacher" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CityPreacher", 1 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			Workplace = 3; // Make sure employees only perform this in their workplace instead of any fitting building.
			Burning = -3;
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "ChurchService"; },
		};
	};
	
	OnlyExecute = false;
	EnterBuilding = "TryEnter";
				
	ActionClassName = "BuildingSoundAction";
	DestinationsPointOfInterestType = "ChurchService";
		
	ActionName = "ChurchServiceCity";
	DisplayName = "$ChurchServiceCity";
	Description = "$ChurchServiceCityDesc";
	Instruction = "$callToAction.PickOwnCityPreacherHut";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.PickOwnCityPreacherHut";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoOwnCityPreacherHut";
	HideSelectionPromptCancelButton = true;

	SourceScoreFormula = "(Intelligence + (Charisma * 0.75)) * 2 + Motivation";
	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
	
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ChurchServiceCityOver"};
		},
		SpreadEffect // source = catholic --> no EMPLOYEE
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceCatholicCityResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
			};
		},
		SpreadEffect // source = catholic --> EMPLOYEE
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceCatholicCityEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				},
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Catholic", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				}
			};
		},
		SpreadEffect // source = protestant --> no EMPLOYEE
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceProtestantCityResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
			};
		},
		SpreadEffect // source = protestant --> EMPLOYEE
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceProtestantCityEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				},
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Protestant", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) + Motivation)";
				}
			};
		},
		SpreadEffect // source = secular --> no EMPLOYEE
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceSecularCityResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "!Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				}
			};
		},
		SpreadEffect // source = secular --> EMPLOYEE
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			UniqueTag = "ChurchServiceCity";
			Tags = array{"ChurchServiceCity"};
			SpreadResult = "ChurchServiceSecularCityEmployeeResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence * 0.5";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				},
				SpreadTargetRule // target = catholic OR protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasTag.Religious", "hasNotTag.NPCGuard", "hasNotTag.IsPreacher", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence + ReligionStolidity";
					SourceScoreFormula = "Target.IsEmployee * ((Intelligence + (Charisma * 0.75)) * 2 + Motivation)";
				}
			};
		},
	};
	
	MoralAlignmentShift = 0.008;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1, 0.1, 0.025};
	};
};

"ChurchServiceCityOver" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ChurchServiceCityOver";
	DisplayName = "$ChurchServiceCity";
	Description = "$ChurchServiceCityDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ShowCombatText = true;

	SourceScoreFormula = "Intelligence + (Charisma * 0.75) + Motivation";
	TargetScoreFormula = "2";

	CanFail = true;
	CriticalFactor = 0.95;
	
	BudgetPost = "Religion";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "praying_looksky"; },
		};
	};
	
	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "75 + Intelligence + (Charisma * 0.75)";
			MaxTransferred = 125;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "2";
		},
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "50 + ((Intelligence + (Charisma * 0.75)) * 0.75)";
			MaxTransferred = 90;
		},
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + ((Intelligence + (Charisma * 0.75)) * 0.5)";
			MaxTransferred = 45;
		},
	};
	CriticalFailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = 12;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-2";
		},
	};
};

"HoldPublicPrayer" = G3ActionTemplate //Hold public prayer
{
	GUIPresent = true;
	UICategory = "Religion";
	OrderIndex = 25;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "HoldPublicPrayer";
	DisplayName = "$HoldPublicPrayer";
	Description = "$HoldPublicPrayerDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	SourceScoreFormula = "2 + Charisma + Intimidation * 0.5";
	
	BaseRewardXP = 50;

	Duration = 0.01;
	CanFail = false;
	
	Cooldown = 0.33;
	CooldownFamilyWide = true;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			Rich = 2;
			QuarterSurrounding = -3;
			QuarterCity = 2;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.8,0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"summoning", 0, -1, -1};
	};

	CriticalFactor = 1.0;
	
	SuccessResult =  array
	{
		SpreadEffect // source = catholic
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerSuccess";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasTag.Catholic", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception * 0.5";
				}
			};
		},
		SpreadEffect // source = catholic
		{
			Filter = "Source.hasTag.Catholic";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerFailure";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = catholic
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasNotTag.Catholic", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception * 0.5";
				}
			};
		},
		SpreadEffect // source = protestant
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerSuccess";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasTag.Protestant", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception * 0.5";
				}
			};
		},
		SpreadEffect // source = protestant
		{
			Filter = "Source.hasTag.Protestant";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerFailure";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target <> protestant
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasNotTag.Protestant", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception * 0.5";
				}
			};
		},
		SpreadEffect // source = secular
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerSuccess";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target = secular
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasNotTag.Religious", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception";
				},
			};
		},
		SpreadEffect // source = secular
		{
			Filter = "Source.hasNotTag.Religious";
			ApplyTo = "Self";
			SpreadResult = "HoldPublicPrayerFailure";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // target <> secular
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.NPCGuard", "hasTag.Religious", "hasNotTag.IsPreacher"};
					TargetScoreFormula = "Perception";
				},
			};
		},
	};
};