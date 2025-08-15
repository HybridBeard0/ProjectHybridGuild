"GuildAmbassador" = G3ActionTemplate //GuildAmbassador
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "GuildAmbassador";
	DisplayName = "$GuildAmbassador";
	Description = "";

	IconName = "ArsenalEvent";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
};

// ALCHIMISTS
"GatherMandrake" = G3ActionTemplate //Gather a Mandrake
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 35;

	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Alchimists";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Intelligence";
	TargetScoreFormula = "1";

	ActionName = "GatherMandrake";
	DisplayName = "$GatherMandrake";
	Description = "$GatherMandrakeDesc";
	Instruction = "$callToAction.PickABrushwood";

	Duration = 0.063;
	BaseRewardXP = 25;
	CanFail = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.PickABrushwood";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBrushwood";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Brushwood"};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "GatherMandrake"; },
		};
	};
	
	EnterBuilding = "TryEnter";
	
	CriticalFactor = 1.0;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs2", 0, -1, -1};
	};

	OnStartResult = array
	{
		FunctionEndAction
		{
			Filter = "Source.hasNotTag.Alchimists";
			ApplyTo = "Self";
			Type = "Cancel";
		}
	};
	OnDestinationReachedResult = array
	{
		FunctionEndAction
		{
			Filter = "Source.hasNotTag.Alchimists";
			ApplyTo = "Self";
			Type = "Cancel";
		}
	};

	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Mandrake"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			ActionTarget = "FromTargetProfile";
			Actions = array{"NPCBringHomeMandrake"};
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
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"MandrakeDamage"};
			ActorValue = "Health";
			Mod = -33;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// CRATFSMENGUILD
"MotivateWorkers" = G3ActionTemplate //Motivate your workers
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 21;

	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "CraftmensGuild";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "MotivateWorkers";
	DisplayName = "$MotivateWorkers";
	Description = "$MotivateWorkersDesc";
	Instruction = "$callToAction.PlayerBusiness";

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";
	
	Duration = 0.015;
	BaseRewardXP = 28;
	CanFail = false;
	CriticalFactor = 1.0;
	
	SourceRun = true;
		
	TargetTags = array{"MotivateWorkersSuccess"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{	
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -2;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Master"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "idle_readbook1"; Prop = "book2/book2"; },
		};
	};
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,0.4,0.3};
	};

	OnStartResult = array
	{
		FunctionEndAction
		{
			Filter = "Source.hasNotTag.CraftmensGuild";
			ApplyTo = "Self";
			Type = "Cancel";
		}
	};
	OnDestinationReachedResult = array
	{
		FunctionEndAction
		{
			Filter = "Source.hasNotTag.CraftmensGuild";
			ApplyTo = "Self";
			Type = "Cancel";
		}
	};

	SuccessResult =  array
	{
		//Remove negative effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "OverseeWorkersFailure" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersFailure";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersCritFailure";
		},

		//add positive effects
		ModifierEffect //only add the tag to the building for target selection
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMaster";
			Tags = array{"MotivateWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 360;
			Recover = true;
		},
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMaster";
			Tags = array{"MotivateWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 360;
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkers";
		},
		ForwardEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMaster";
			ApplyTo ="Target";
			Tags = array{"MotivateWorkersSuccess"};
			Relation = "Self";
			Duration = 360;
			ResultObjectId = "MotivateWorkersSuccess";
		},

		ModifierEffect //only add the tag to the building for target selection
		{
			Filter = "Source.hasTag.eventbuffExemplaryMaster";
			Tags = array{"MotivateWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 500;
			Recover = true;
		},
		DisplayEffect
		{
			Filter = "Source.hasTag.eventbuffExemplaryMaster";
			Tags = array{"MotivateWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 500;
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkers";
		},
		ForwardEffect
		{
			Filter = "Source.hasTag.eventbuffExemplaryMaster";
			ApplyTo ="Target";
			Tags = array{"MotivateWorkersSuccess"};
			Relation = "Self";
			Duration = 500;
			ResultObjectId = "MotivateWorkersSuccessExemplaryMaster";
		},

		FunctionUpdateRelationship
		{
			AffectSourceEnemySocietyMembers = "-1";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// MERCHANTGUILD
"FarTradeTrip" = G3ActionTemplate //Profitable trade mission
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 47;

	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "FarTradeAction";
	ActionName = "FarTradeTrip";
	ActionActor = "Character";
	DisplayName = "$FarTradeTrip";
	Description = "$FarTradeTripDesc";
	
	SourceScoreFormula = "Intelligence * 0.5 + BargainingBonus * 0.1 + Luck - BadLuck + Source.hasTag.eventbuffAdventurer";
	TargetScoreFormula = "Source.Intimidation";
	
	PriceFormula = "8000";
	BudgetPost = "Trading";
	BaseRewardXP = 300;
	BaseRewardPrestige = 600;
	
	Duration = 0.6;
	Cooldown = 0.33;
	CooldownFamilyWide = true;
	
	CanBeCancelled = false;
	CanFail = true; //only DoLongshore can fail, this one can't
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.7,0.5,0.4};
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{	
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 4;
			MaxAmount = 24;
			SpecificItems = array{"Amber", "Brocade", "Ivory", "Pearl", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "FarTradeTripSuccess";
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
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 2;
			MaxAmount = 18;
			SpecificItems = array{"Dagger", "Cauldron", "ClayVase", "Beaker", "BoneBracelet", "ThrowingKnife", "CopperBracelet", "Torch", "OilLamp"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "FarTradeTripFailure";
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
};

// THIEVES
"DistractEveryone" = G3ActionTemplate //Distract the residents
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 35;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "DistractEveryone";
	DisplayName = "$DistractEveryone";
	Description = "$DistractEveryoneDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	SourceScoreFormula = "Strength + Intimidation";
	
	BaseRewardXP = 50;

	Duration = 0.01;
	CanFail = false;
	
	Cooldown = 0.33;
	CooldownFamilyWide = true;
	SourceRun = true;
	
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
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.2,0.3};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Threaten", 0, -1, -1};
	};

	CriticalFactor = 1.0;
	
	SuccessResult =  array
	{
		SpreadEffect
		{
			Filter = "";
			ApplyTo = "Self";
			SpreadResult = "DistractEveryoneInReach";
			Radius = 3000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Adult", "NotMyFamily", "Outside", "NotInCombat", "IsConscious", "NotFleeing", "hasNotTag.Distracted", "hasNotTag.DistractGuard", "hasNotTag.Thieves"};
					TargetScoreFormula = "Intelligence";
				},
			};
		},
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "-10";
		},
	};
};

// FREEMASONS
"FreemasonsGift" = G3ActionTemplate //Secure a building
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 50;
	
	ActionClassName = "SimpleExecutionAction";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Building";
	
	Cooldown = 0.5;
	CooldownFamilyWide = true;
	Duration = 0.01;

	ActionName = "FreemasonsGift";
	DisplayName = "$FreemasonsGift";
	Description = "$FreemasonsGiftDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 35;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "summoning"; },
		};
	};
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
			
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"FreemasonsGift"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$statusEffect.FreemasonsGift";
			Duration = 1800.0;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};