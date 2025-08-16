//-------------------POLITICAL POWER PROPOSALS-------------------//
        "PowerCityGuards" = G3ActionTemplate //Organise the city guards
        {
            GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 115;
			
            GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.Captain", "$gui.politics.office.ArsenalMaster", "$gui.politics.office.DungeonMaster" };

			ShowCombatText = false;
			
            ActionActor = "Character";
            Duration = 0.005;
			CanPerformShackled = true;

            ActionName = "PowerCityGuards";
			ActionClassName = "PoliticalPowerAction";
            DisplayName = "$action.PowerCityGuards";
            Description = "$action.PowerCityGuardsDesc";
            Instruction = "";
			
            CanFail = false; // cannot fail, only opens the window, success will be dependant on the other office holders and your reputation with them

            MoralAlignmentShift = 0.3;
			MoralAlignment = MoralAlignment
            {
                Values = array{0.3,0.75,0.5};
            };
        };      

		"PowerCityRecord" = G3ActionTemplate //Influence public opinion
		{
			GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 75;

			GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.CouncilAssistant", "$gui.politics.office.TownClerk" };
			
			ShowCombatText = false;
			
			ActionActor = "Character";
			Duration = 0.005;
			CanPerformShackled = true;
			
			ActionName = "PowerCityRecord";
			ActionClassName = "PoliticalPowerAction";
			DisplayName = "$action.PowerCityRecord";
			Description = "$action.PowerCityRecordDesc";
			Instruction = "";
			
			CanFail = false; // cannot fail, only opens the window, success will be dependant on the other office holders and your reputation with them
			
			MoralAlignmentShift = 0.4;
			MoralAlignment = MoralAlignment
			{
				Values = array{0.5,0.8,0.4};
			};
		};      
		
		"BanishedAction" = G3ActionTemplate
		{
			// This action gets executed by the "victim" after it was successfully voted to be banished by using PowerHeretic.
			// If it has costs attached, it will ask players for confirmation, which is not what we want.
			GUIPresent = false;
			CanFail = false;
			
			ActionName = "BanishedAction";
			ActionActor = "Character";
			ActionClassName = "BanishedAction";

			PriceFormula = "0";
			BudgetPot = "Diplomacy";
			CurrencyType = "Prestige";

			ShowCombatText = false;

			AskConfirmationOnCancel = false;
			CanBeCancelled = false;
		};
		
        "PowerHeretic" = G3ActionTemplate //Banish an individual
        {
            GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 125;

            GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.Mayor", "$gui.politics.office.CityLegate", "$gui.politics.office.Treasurer" };
            
			ShowCombatText = false;
			
            ActionActor = "Character";
            Duration = 0.005;
			CanPerformShackled = true;

			PriceFormula = "250";
			BudgetPot = "Diplomacy";
			CurrencyType = "Prestige";

            ActionName = "PowerHeretic";
			ActionClassName = "PoliticalPowerAction";
            DisplayName = "$action.PowerHeretic";
            Description = "$action.PowerHereticDesc";
            Instruction = "";

			CanFail = false; // cannot fail, only opens the window, success will be dependant on the other office holders and your reputation with them
			
            MoralAlignmentShift = 0.2;
			MoralAlignment = MoralAlignment
            {
                Values = array{0.8,-0.7,0.6};
            };
		};      

		"PowerPrisons" = G3ActionTemplate //Prison sentence
		{
			GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 100;

			GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.CouncilGuardian", "$gui.politics.office.GateGuardian" };
		
			ShowCombatText = false;
			
			ActionActor = "Character";
			Duration = 0.005;
			CanPerformShackled = true;
		
			ActionName = "PowerPrisons";
			ActionClassName = "PoliticalPowerAction";
			DisplayName = "$action.PowerPrisons";
			Description = "$action.PowerPrisonsDesc";
			Instruction = "";
			
			CanFail = false; // cannot fail, only opens the window, success will be dependant on the other office holders and your reputation with them
		
			MoralAlignmentShift = 0.3;
			MoralAlignment = MoralAlignment
			{
				Values = array{0.3,0.6,0.5};
			};
		};
		
		"PowerSovereignLawmaker" = G3ActionTemplate //Change laws in your fiefdom
		{
			GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 135;

			GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.Sovereign" };
			
			ShowCombatText = false;
			
			CanPerformShackled = true;
			
			ActionActor = "Character";
			ActionName = "PowerSovereignLawmaker";
			ActionClassName = "PoliticalPowerAction";
			DisplayName = "$action.PowerSovereignLawmaker";
			Description = "$action.PowerSovereignLawmakerDesc";

			CanFail = false;
		
			MoralAlignmentShift = 0.3;
			MoralAlignment = MoralAlignment
			{
				Values = array{0.5,-0.5,-0.45};
			};
		};
		
		"PowerLawmaker" = G3ActionTemplate //Proposal to change city laws
		{
			GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 70;

			GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$ui.GameplayConceptTutorial.Reputation11" };
			
			ShowCombatText = false;
			
			CanPerformShackled = true;
			
			ActionActor = "Character";
			ActionName = "PowerLawmaker";
			ActionClassName = "PoliticalPowerAction";
			DisplayName = "$action.PowerLawmaker";
			Description = "$action.PowerLawmakerDesc";

			CanFail = false;
		
			MoralAlignmentShift = 0.3;
			MoralAlignment = MoralAlignment
			{
				Values = array{0.5,0.5,0.45};
			};
		};
		
		"PowerExpropriate" = G3ActionTemplate //Expropriate someone
        {
            GUIPresent = true;
			UICategory = "Diplomacy";
			OrderIndex = 105;

            GUIData = array
			{
				@base/OfficeHolder
			};
			UsableBy = array{ "$gui.politics.office.Mayor", "$gui.politics.office.CityLegate", "$gui.politics.office.Treasurer" };
            
			ShowCombatText = false;
			
			CanPerformShackled = true;
        	
			ActionActor = "Character";
            ActionName = "PowerExpropriate";
            ActionClassName = "PoliticalPowerAction";
            DisplayName = "$action.PowerExpropriate";
            Description = "$action.PowerExpropriateDesc";

			PriceFormula = "250";
			BudgetPot = "Diplomacy";
			CurrencyType = "Prestige";

            CanFail = false; // cannot fail, only opens the window, success will be dependant on the other office holders and your reputation with them
        
            MoralAlignmentShift = 0.2;
			MoralAlignment = MoralAlignment
            {
                Values = array{0.75,-0.6,0.3};
            };
       };

//-------------------SIMPLE EXECUTION ACTIONS-------------------//
"PublicShaming" = G3ActionTemplate //Spread rumours
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 85;

	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.CouncilAssistant", "$gui.politics.office.TownClerk" };
	
	ActionName = "PublicShaming";
	DisplayName = "$PublicShaming";
	Description = "$PublicShamingDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence+Charisma";
	TargetScoreFormula = "0.5 * (Intelligence+Charisma)";
	
	DestinationsPointOfInterestType = "Execution";
	InteractionPriority = 0;
	
	Duration = 0.0025;
	BaseRewardXP = 102;
	CanFail = true;
	PriceFormula = "100";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
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
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectCharacter";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,-0.25,0.25};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	}; 
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	Dialogue = array{"ACTION", "d.act.PublicShaming"};
};

"PublicPraise" = G3ActionTemplate //PublicPraise
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 80;

	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.CouncilAssistant", "$gui.politics.office.TownClerk" };
	
	ActionName = "PublicPraise";
	DisplayName = "$PublicPraise";
	Description = "$PublicPraiseDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	DestinationsPointOfInterestType = "PublicEntertainment";
	InteractionPriority = 0;
	
	EnterBuilding = "TryEnter";
	
	Duration = 0.0025;
	BaseRewardXP = 102;
	CanFail = true;
	CriticalFactor = 0.9;
	PriceFormula = "100";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = -2;
				Alliance = 2;
				GoodRelationWithMe = 2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectCharacter";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.25,0.25};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	}; 
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	Dialogue = array{"ACTION", "d.act.PublicPraise"};
};

"AuditBooks" = G3ActionTemplate //AuditBooks
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 90;

	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.CouncilInformer", "$gui.politics.office.Informer" };
	
	ActionName = "AuditBooks";
	DisplayName = "$AuditBooks";
	Description = "$AuditBooksDesc";
	Instruction = "$callToAction.CompetitorBusiness";

	ActionActor = "Character";
	TargetActor = "Building";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Intelligence * (1 + BargainingBonus)";
	TargetScoreFormula = "BuildingSecurity";
	
	Duration = 0.025;
	Cooldown = 1.0;
	BaseRewardXP = 145;
	CanFail = true;
	CriticalFactor = 0.9;
	EnterBuilding = "ForceEnter";
	PriceFormula = "150";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsSourceHuman = 3;

			ExcludedTypes = array{"Statue", "Stage"};
			Business = 3;
			ResourceProducer = -3;
			CityBuilding = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				PoliticalImportance = 1;
				HigherRank = 1;
			};
		},
		TargetProfileBuilding
		{
			IsSourceHuman = -3;

			ExcludedTypes = array{"Statue", "Stage"};
			Business = 3;
			ResourceProducer = -3;
			CityBuilding = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				PoliticalImportance = 1;
				HigherRank = 1;
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
			TargetSnapPointAnimation{ Animation = "idle_readbook1"; Prop = "book2/book2"; },
		};
	};
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.25,-0.25,-0.25};
	};

	CriticalSuccessResult =  array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
			AffectTargetAllies = "-2";
			AffectTargetSocietyMembers = "-2";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"ForceClosureLong"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "PoliticalPowerAuditBooks";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	SuccessResult =  array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
			AffectTargetAllies = "-2";
			AffectTargetSocietyMembers = "-2";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"ForceClosureShort"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "PoliticalPowerAuditBooks";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
			AffectTargetSocietyMembers = "-3";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-4";
			AffectTargetSocietyMembers = "-4";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"FakeEvidence" = G3ActionTemplate //Falsify evidence
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 95;

	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.CouncilInformer", "$gui.politics.office.Informer" };
	
	ActionName = "FakeEvidence";
	DisplayName = "$FakeEvidence";
	Description = "$FakeEvidenceDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "FakeEvidenceAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Dexterity + Perception";
	TargetScoreFormula = "(Perception + Intelligence) * 0.5";
	
	Duration = 0.0025;
	Cooldown = 0.75;
	BaseRewardXP = 138;
	CanFail = true;
	CriticalFactor = 1.0;
	EnterBuilding = "TryEnter";
	PriceFormula = "100";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectCharacter";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.25,-0.25,-0.25};
	};

	SuccessResult =  array
	{
		FunctionGenerateEvidence
		{
			Giver = "Target";
			Receiver = "Source";
			Crimes = array{"ApplyParalysisPoison", "Smear", "PickPocket", "ApplyGhostlyFog", "GoSpyBuilding", "PlayMusic", "PlayDiceGame", "Vandalize", "Sabotage", "BreakBone", "ThrowStinkBomb", "KidnapCharacter", "StealHouse"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 25;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "FakeEvidenceSuccess";
		}
	};
	FailureResult = array
	{
		FunctionTransferPrestige
		{
			Giver = "Source";
			Amount = 20;
		}
	};
};

"PromoteBusiness" = G3ActionTemplate //Promote a business
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 110;
	
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Captain", "$gui.politics.office.ArsenalMaster", "$gui.politics.office.DungeonMaster" };
	
	ActionName = "PromoteBusiness";
	DisplayName = "$PromoteBusiness";
	Description = "$PromoteBusinessDesc";
	Instruction = "$callToAction.Business";

	ActionActor = "Character";
	TargetActor = "Building";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Charisma + Perception";
	TargetScoreFormula = "2 / BuildingSecurity";
	
	Duration = 0.025;
	Cooldown = 0.4;
	BaseRewardXP = 145;
	CanFail = true;
	CriticalFactor = 0.9;
	PriceFormula = "200";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	DistanceFromTarget = 120;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			Business = 3;
			ResourceProducer = -3;
			CityBuilding = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 2;
				Alliance = 2;
				Feud = -2;
				GoodRelationWithMe = 2;
				PoliticalImportance = 1;
				HigherRank = 1;
			};
		}
	};
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.5,0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"town_crier1", 0, -1, -1};
	}; 
	
	CriticalSuccessResult =  array
	{
		DisplayEffect
		{
			Tags = array{"promotedBusiness"};
			ApplyTo = "Target";
			@base/BuffBuilding
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusiness";
		},
		ModifierEffect
		{
			Tags = array{"promotedBusiness"};
			ApplyTo = "Target";
			@base/BuffBuilding
			ActorValue = "Attractiveness";
			Mod = 15;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "15";
		}
	};
	
	SuccessResult =  array
	{
		DisplayEffect
		{
			Tags = array{"promotedBusiness"};
			ApplyTo = "Target";
			Duration = 360;
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusiness";
		},
		ModifierEffect
		{
			Tags = array{"promotedBusiness"};
			ApplyTo = "Target";
			Duration = 360;
			ActorValue = "Attractiveness";
			Mod = 10;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "10";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-7";
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
		}
	};
};

"MarkAsOutlaw" = G3ActionTemplate //Publicly mark someone as an outlaw
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 120;
	
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Captain", "$gui.politics.office.ArsenalMaster", "$gui.politics.office.DungeonMaster" };
	
	ActionName = "MarkAsOutlaw";
	DisplayName = "$MarkAsOutlaw";
	Description = "$MarkAsOutlawDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "Intimidation+Charisma";
	TargetScoreFormula = "0.5 * (Intelligence+Charisma)";
	
	Duration = 0.0025;
	Cooldown = 0.75;
	BaseRewardXP = 192;
	CanFail = true;
	PriceFormula = "250";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	TargetTags = array{"Outlawed"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			MatchTargetTags = -2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			MatchTargetTags = -2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectCharacter";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,-0.3,-0.3};
	};

	Dialogue = array{"ACTION", "d.act.MarkAsOutlaw"};
};

"AwardKeyToCity" = G3ActionTemplate //Award the key to the city
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 130;
	
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Mayor", "$gui.politics.office.CityLegate", "$gui.politics.office.Treasurer" };
	
	ActionName = "AwardKeyToCity";
	DisplayName = "$AwardKeyToCity";
	Description = "$AwardKeyToCityDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "Intelligence+Charisma";
	
	Duration = 0.0025;
	Cooldown = 0.5;
	BaseRewardXP = 182;
	PriceFormula = "200";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = -2;
				Alliance = 2;
				GoodRelationWithMe = 2;
				SocialHigher = 1;
				PoliticalImportance = 1;
				HigherRank = 1;
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
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectCharacter";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	MoralAlignmentShift = 0.4;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.75,0.4};
	};
	
	Dialogue = array{ "ACTION", "d.act.AwardKeyToCity" };
};

"SendAwayGuard" = G3ActionTemplate //Send away city guard
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 150;
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.CouncilGuardian", "$gui.politics.office.GateGuardian" };
	
	ActionName = "SendAwayGuard";
	DisplayName = "$SendAwayGuard";
	Description = "$SendAwayGuardDesc";
	Instruction = "$callToAction.CharacterGuard";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "1";
	
	Duration = 0.0025;
	Cooldown = 0.25;
	BaseRewardXP = 50;
	CanFail = false;

	PriceFormula = "30";
	BudgetPot = "Diplomacy";
	CurrencyType = "Prestige";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			CityGuard = 3;
			CloseToActor = 2;
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
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.CharacterGuard";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.75,0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"smear", 0, -1, -1};
	}; 
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"GoMarket"};
		}
	};
};

"GoToOfficeMeeting" = G3ActionTemplate {
	ActionName = "GoToOfficeMeeting";
	ActionClassName = "GoToBuilding";
	GUIPresent = false;
	ShowCombatText = false;

	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$action.GoToOfficeMeeting";
	Description = "$action.GoToOfficeMeetingDesc";
	
	EnterBuilding = "TryEnter";

	CanFail = false;
	AskConfirmationOnCancel = false;
	RestartAfterUnconsciousness = true;
	
	CriticalFactor = 1.0;
	
	OnStartResult = array {
		FunctionSendMessage {
			ApplyTo = "Source";
			Description = "CharacterGoToOfficeMeeting";
		},		
	};
	
	SuccessResult = array {
        FunctionTriggerAction {
            ApplyTo = "Source";
			CheckSourceProfile = false;
			ActionTarget = "FromTargetProfile";
            Actions = array{ "WaitForOfficeMeeting" };
        },
	};
};
"WaitForOfficeMeeting" = G3ActionTemplate {
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "WaitForOfficeMeeting";
	DisplayName = "$action.WaitForOfficeMeeting";
	Description = "$action.WaitForOfficeMeetingDesc";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	Duration = 0.1; // About 2.4 hours.
};
