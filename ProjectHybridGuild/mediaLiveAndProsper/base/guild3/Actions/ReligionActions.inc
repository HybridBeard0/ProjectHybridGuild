//Actions to change the family religion
"BuyReligion" = G3ActionTemplate // 'Launch'-action for going to the baptismal font and then starting 'BuyCathlic', 'BuyNoReligion' or 'BuyProtestant'
{
	UICategory = "Religion";
	OrderIndex = 5;
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyReligion";
	DisplayName = "$action.BuyReligion";
	Description = "$action.BuyReligionDesc";
	Instruction = "$callToAction.BuildingChurch";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingChurch";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingChurch";
	HideSelectionPromptCancelButton = true;

	ActionActor = "Character";
	TargetActor = "Building";

	//BaseRewardXP = 50;
	
	//Cooldown = 1.0;
	SourceRun = true;
	
	CanFail = false;
	Duration = 99999.0; // No timeout. The action ends when the prompt is confirmed / canceled.
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
		TargetProfileBuilding
		{
			AutoSelect = true;
			IsCurrentBuilding = 3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Animations = array 
		{
			TargetSnapPointAnimation{ Animation = "idle1"; Repeat = -1; },
		};

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	OnDestinationReachedResult = array
	{
		ShowCustomPrompt
		{
			ForceHotStorage = true;
			UI = "ChangeReligionWindow";
		},
	};
};

"BuyCatholic" = G3ActionTemplate //Convert to the Catholic faith
{
	UICategory = "Religion";
	OrderIndex = 5;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyCatholic";
	DisplayName = "$action.BuyCatholic";
	Description = "$action.BuyCatholicDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 50;
	
	PriceFormula = "SocialLevel * 400";
	BudgetPot = "Diplomacy";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;

	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		@base/ReligionCatholicVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "CatholicPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionCatholic";
		},
		// Relationship change between my family and all secular families
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstNeutrals = false;
			SecondGroup = "NoReligion";
			SecondNeutrals = true;
			ChangeFormula = "First.SocialLevel * -2";
		},
	};
};

"BuyProtestant" = G3ActionTemplate //Convert to the Protestant faith
{
	UICategory = "Religion";
	OrderIndex = 7;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyProtestant";
	DisplayName = "$action.BuyProtestant";
	Description = "$action.BuyProtestantDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 50;
	
	PriceFormula = "SocialLevel * 400";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;
	
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		@base/ReligionProtestantVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "ProtestantPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionProtestant";
		},
		// Relationship change between my family and all secular families
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstNeutrals = false;
			SecondGroup = "NoReligion";
			SecondNeutrals = true;
			ChangeFormula = "First.SocialLevel * -2";
		},
	};
};

"BuyNoReligion" = G3ActionTemplate //Leave your religious faith
{
	UICategory = "Religion";
	OrderIndex = 6;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyNoReligion";
	DisplayName = "$action.BuyNoReligion";
	Description = "$action.BuyNoReligionDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 75;
	
	PriceFormula = "SocialLevel * 400";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;
	
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		// Relationship change between my family and all families of the same religion
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstSet = "Self";
			FirstNeutrals = false;
			SecondContext = "Source";
			SecondGroup = "Religion";
			SecondSet = "Self";
			SecondNeutrals = false;
			ChangeFormula = "First.SocialLevel * -2";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"BuyNoReligionExecution"};
		},
	};
};

"BuyNoReligionExecution" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "BuyNoReligionExecution";
	DisplayName = "$action.BuyNoReligion";
	Description = "$action.BuyNoReligionDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	CanFail = false;
	CriticalFactor = 1.0;
	EnterBuilding = "TryEnter";
	
	SuccessResult =  array
	{
		@base/ReligionSecularVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "SecularPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionNeutral";
		},
	};
};

//Actions for preacher
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
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
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

"MakeCatholic" = G3ActionTemplate //Convert someone to the Catholic faith
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 20;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Catholic";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionName = "MakeCatholic";
	DisplayName = "$MakeCatholic";
	Description = "$MakeCatholicDesc";
	Instruction = "$callToAction.AdultNotCatholic";

	@base/fMakeCatholic

	ActionActor = "Character";
	TargetActor = "Character";

	TargetTags = array{"Catholic"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			NPC = 3;
			NPCGuard = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				IsDynasty = -3;
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
	};

	ActionClassName = "SimpleExecutionAction";

//	Duration = 0.005;
	BaseRewardXP = 22;
	CanFail = true;
	CriticalFactor = 1.0;
	Cooldown = 0.01;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	DistanceFromTarget = 50;

	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,0.4,0};
	};

    Dialogue = array{ "ACTION", "d.act.MakeCatholic" };
};

"MakeProtestant" = G3ActionTemplate //Convert someone to the Protestant faith
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 22;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Protestant";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };	

	ActionName = "MakeProtestant";
	DisplayName = "$MakeProtestant";
	Description = "$MakeProtestantDesc";
	Instruction = "$callToAction.AdultNotProtestant";

	@base/fMakeProtestant

	ActionActor = "Character";
	TargetActor = "Character";

	TargetTags = array{"Protestant"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			NPC = 3;
			NPCGuard = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				IsDynasty = -3;
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
	};

	ActionClassName = "SimpleExecutionAction";

//	Duration = 0.005;
	BaseRewardXP = 22;
	CanFail = true;
	CriticalFactor = 1.0;
	Cooldown = 0.01;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	DistanceFromTarget = 50;
		
	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,0.4,0};
	};

	Dialogue = array{ "ACTION", "d.act.MakeProtestant" };
};

"MakeSecular" = G3ActionTemplate //Convert someone to the Secular faith
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 21;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "MakeSecular";
	DisplayName = "$MakeSecular";
	Description = "$MakeSecularDesc";
	Instruction = "$callToAction.AdultReligion";

	@base/fMakeSecular

	ActionActor = "Character";
	TargetActor = "Character";

	TargetTags = array{"Religious"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			NPC = 3;
			NPCGuard = -3;
			MatchTargetTags = 3;
			FamilyProfile = TargetProfileFamily
			{
				IsDynasty = -3;
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
	};

	ActionClassName = "SimpleExecutionAction";

//	Duration = 0.005;
	BaseRewardXP = 22;
	CanFail = true;
	CriticalFactor = 1.0;
	Cooldown = 0.01;
		
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,0.4,0};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	DistanceFromTarget = 50;

	Dialogue = array{ "ACTION", "d.act.MakeSecular" };
};

// special action for Catholics
"LetterFromInquisition" = G3ActionTemplate //Letter from the inquisition
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 30;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Catholic";
		},
	};
	UsableBy = array{ "$guiLeader" };
	
	ActionName = "LetterFromInquisition";
	DisplayName = "$LetterFromInquisition";
	Description = "$LetterFromInquisitionDesc";
	Instruction = "$callToAction.AdultProtestant";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Intelligence + Intimidation";
	TargetScoreFormula = "(Intelligence * 0.5) + (Perception * 0.75)";
	
	Duration = 0.0033;
	Cooldown = 1.5;
	BaseRewardXP = 138;
	CanFail = true;
	CriticalFactor = 1.0;
	PriceFormula = "100";
	CurrencyType = "Prestige";
		
	TargetTags = array{"Protestant"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
				Rich = 2;
				MyFamily = -3;
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
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				Rich = 2;
				MyFamily = -3;
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
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.7,-0.3,0.7}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	DistanceFromTarget = 2000;
	DistanceFromTargetMin = 250;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	SuccessResult =  array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = -2.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intimidation";
			Mod = -2.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = -0.5;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Duration = 270;
			Recover = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfLetterOfInquisitionSuccess";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-8";
			AffectTargetSocietyMembers = "-8";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfLetterOfInquisitionFailure";
		}
	};
};

// special action for Protestants
"InitiateIntrigue" = G3ActionTemplate //Sneaky intrigue
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 35;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Protestant";
		},
	};
	UsableBy = array{ "$guiLeader" };
	
	ActionName = "InitiateIntrigue";
	DisplayName = "$InitiateIntrigue";
	Description = "$InitiateIntrigueDesc";
	Instruction = "$callToAction.AdultCatholic";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Intelligence + Intimidation";
	TargetScoreFormula = "(Intelligence * 0.5) + (Perception * 0.75)";
	
	Duration = 0.0033;
	Cooldown = 1.5;
	BaseRewardXP = 138;
	CanFail = true;
	CriticalFactor = 1.0;
	PriceFormula = "100";
	CurrencyType = "Prestige";
		
	TargetTags = array{"Catholic"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
				Rich = 2;
				MyFamily = -3;
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
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				Rich = 2;
				MyFamily = -3;
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
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.5,-0.2}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	DistanceFromTarget = 2000;
	DistanceFromTargetMin = 250;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	SuccessResult =  array
	{
		FunctionTransferPrestige
		{
			Giver = "Target";
			Amount = 500;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "PrestigeGainMult";
			Mod = -1.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -1.0;
			Duration = 270;
			Recover = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfIntrigueSuccess";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-8";
			AffectTargetSocietyMembers = "-8";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfIntrigueFailure";
		}
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
