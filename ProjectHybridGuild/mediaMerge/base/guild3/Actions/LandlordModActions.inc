// LandlordMod Actions
"MakePeaceBetweenEnemies" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";

	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 136;
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Sovereign" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	Cooldown = 1.0;
	Duration = 0.005;

	ActionName = "MakePeaceBetweenEnemies";
	DisplayName = "$MakePeaceBetweenEnemies";
	Description = "$MakePeaceBetweenEnemiesDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 50;
	CurrencyType = "Prestige";
	PriceFormula = "500";
	
	CanFail = false;
	CriticalFactor = 1;

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
		},
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

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.5,0.5};
	};
	
	OnlyExecute = true;
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Target";
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "50";
			AffectSource = "50";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "MakePeaceBetweenEnemiesSource";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Target";
			Description = "MakePeaceBetweenEnemiesTarget1";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Target";
			Description = "MakePeaceBetweenEnemiesTarget1femaleSovereign";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Context";
			Description = "MakePeaceBetweenEnemiesTarget2";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Context";
			Description = "MakePeaceBetweenEnemiesTarget2femaleSovereign";
		}
	};
};

"SparkAFeud" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";

	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 137;
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Sovereign" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	Cooldown = 1.0;
	Duration = 0.005;

	ActionName = "SparkAFeud";
	DisplayName = "$SparkAFeud";
	Description = "$SparkAFeudDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 50;
	CurrencyType = "Prestige";
	PriceFormula = "500";
	
	CanFail = false;
	CriticalFactor = 1;

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
		},
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

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,0,-0.5};
	};
	
	OnlyExecute = true;
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "-50";
			AffectSource = "-50";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Target";
			AffectSource = "-20";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "SparkAFeudSource";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Target";
			Description = "SparkAFeudTarget1";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Target";
			Description = "SparkAFeudTarget1femaleSovereign";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Context";
			Description = "SparkAFeudTarget2";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Context";
			Description = "SparkAFeudTarget2femaleSovereign";
		}
	};
};

"UseMatchmaker" = G3ActionTemplate
{
    GUIPresent = true;
    UICategory = "Romance";
    OrderIndex = 66;

    ActionClassName = "SimpleExecutionAction";
    GUIData = array
    {
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 0;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
		}
    };
	UsableBy = array{ "$gui.item.AdultTrueBloodline" };
	
    ActionName = "UseMatchmaker";
    DisplayName = "$action.UseMatchmaker";
    Description = "$action.UseMatchmakerDesc";
    Instruction = "$callToAction.StartRomance";
    ActionActor = "Character";
    TargetActor = "Character";
    
	EnterBuilding = "TryEnter";
    SuppressBuildingEnterBehavior = true;
    
    Cooldown = 0.015;
    
	PriceFormula = "(SocialLevel * 10) * ((25 * hasTag.BuffEasy) + (50 * hasTag.BuffNormal) + (75 * hasTag.BuffHard) + (100 * hasTag.BuffImpossible))";

	BudgetPot = "Expansion";
	BudgetPost = "Family";
	CanFail = false;

    MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,-0.1,0};
    };
        
    ShowSelectionPrompt = "NonRomanceCharacters";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
    
    DistanceFromTarget = 35;
    DistanceFromTargetMin = 35;
	
 	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			DynastyMember = -3; 
			NPCGuard = -3;
			Employee = -3;
			Married = -3;
			IsEngaged = -3;
			InLoveWithMe = 2;
			HighRomanticScore = 2;
			BloodlineRelated = -3;
			FamilyProfile = TargetProfileFamily
			{
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

	CriticalFactor = 1.0;
	SuccessResult = array
	{
		FunctionTransferPrestige
		{
			Giver = "Source";
			Receiver = "";
			Amount = "(Target.SocialLevel + 1) * ((25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible))";
		},
		FunctionCreateRomanceWithTarget
		{
			// no members
		},
		FunctionCreateEngagementWithTarget
		{
			// no members
		},
		FunctionMarryTarget
		{
			ApplyTo = "Source";
			Target = "Target";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "UseMatchmaker";
		}
	};
};

"ActivateForRent" = G3ActionTemplate //Activate "ForRent" for this residence
{
	GUIPresent = true;
	UICategory = "Family";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "ActivateForRent";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.ActivateForRent";
	Description = "$action.ActivateForRentDesc";
	Instruction = "$selectionPrompt.ActivateForRent";

	ActionActor = "Character";
	TargetActor = "Building";
	
	Cooldown = 0.0;
	Duration = 0.005;
	
	CanFail = false;
	CriticalFactor = 1;

	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			ActiveResidence = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
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
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "UseConstructionPlan"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated3";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated5";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated8";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated12";
			Duration = 0.0;
		}
	};
};

"DeactivateForRent" = G3ActionTemplate //Deactivate "ForRent" for this residence
{
	GUIPresent = true;
	UICategory = "Family";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "DeactivateForRent";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.DeactivateForRent";
	Description = "$action.DeactivateForRentDesc";
	Instruction = "$selectionPrompt.DeactivateForRent";

	ActionActor = "Character";
	TargetActor = "Building";
	
	Cooldown = 0.0;
	Duration = 0.005;
	
	CanFail = false;
	CriticalFactor = 1;

	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
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
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "UseConstructionPlan"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array { "ForRent" };
		},
	};
};

"NPCRentSleepPlace" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesNotHaveTag = "NoService"; // courted characters should not go to bed
		}
	};

	CanFail = false;

	ActionActor = "Character";
	IconName = "Idle";

	ActionName = "NPCRentSleepPlace";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";

	ActionClassName = "SimpleExecutionAction";

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	EnterBuilding = "TryEnter";

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			Filter = "(Date % 1.0) > 0.9166 || (Date % 1.0) < 0.25";
			ApplyTo = "Source";
			ActionTarget = "FromTargetProfile";
			Actions = array{"NPCRentSleepPlaceSleep"};
		}
	};
};

"NPCRentSleepPlaceSleep" = G3ActionTemplate
{
	ActionClassName = "SleepAction";
	GUIPresent = false;
	CanFail = false;
	
	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = 2;
			};
		};
	};
	
	ShowCombatText = false;
	AskConfirmationOnCancel = false;
	InterruptForSleep = false; // We don't want the sleep automation to interrupt manual sleep.
	
	ActionActor = "Character";
	TargetActor = "Building";

	IconName = "Sleep";
	ActionName = "NPCRentSleepPlaceSleep";
	DisplayName = "$action.Sleep";
	Description = "$action.SleepDesc";
	
	Cooldown = 0.001; //~1sec
	
	Duration = 0.25;
		
	EnterBuilding = "ForceEnter";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "GoToBed"; },
		};
	};
	
	CriticalFactor = 1.0;

	BudgetPost = "Services";
	BudgetPot = "Business";
	@base/ForRentInclude

	OnFinishResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"WakeUpAction"};
			CheckSourceProfile = false; // The WakeUpAction checks if the target is asleep. This gets executed after the target has already awoken, so ignore that check here.
		},
	};
};