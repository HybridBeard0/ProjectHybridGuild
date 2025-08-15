"DonateSimpleFeast" = G3ActionTemplate //Boast about your achievements
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ArtefactName = "BucketOfFruits";
	
	ActionName = "DonateSimpleFeast";
	DisplayName = "$action.SimpleFeast";
	Description = "$action.SimpleFeastDesc";
	Instruction = "$callToAction.StreetArea";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	
	BaseRewardXP = 30;
	BaseRewardPrestige = 15;
	
	Duration = 0.04;
	SourceRun = false;
	IconName = "SimpleFeast";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};  

	DestinationsPointOfInterestType = "DonateFeast";
	
	CanFail = false;
	
	SourceScoreFormula = "Intelligence * 0.5 + Charisma * 0.5";
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
			QuarterSurrounding = -2;
			QuarterVillage = 2;
			QuarterCity = 2;
		}
	};
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.3,0.3};
	};

	CriticalFactor = 0.75;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 10;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
	SuccessResult = array
	{
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
};

"PromoteYourBusinessesIron" = G3ActionTemplate //Promote your businesses
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 15;
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Gleeman";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Gleeman" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gleeman", 1 }
	};
	
	ActionName = "PromoteYourBusinessesIron";
	DisplayName = "$action.PromoteYourBusinessesIron";
	Description = "$action.PromoteYourBusinessesIronDesc";
	Instruction = "$callToAction.PlayerBusiness";
	IconName = "PromoteBusinessWithMusicIron";
	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"PromoteOwnBusinessIron"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		}				
	};

	Cooldown = 0.0;
	Duration = 0.064; // 0.000011574 = 1 ingame sec | 0.00069444 = 1 ingame min | 0,0416664 = 1 ingame hour !(1 real sec = 0.016666667 ticks)!

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	CanFail = false;
	ShowCombatText = true;
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.2};
	};

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 100;
	EnterBuilding = "No";

	InteractionPriority = 5;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"gleeman_shawm", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_bagpipe", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle2", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum2", 0, -1, -1};
	}; 

//	Dialogue = array {"ACTION_MONOLOGUE", "d.act.PromoteOwnBusiness"}; // Category, id		

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
		},
	};
	OnDestinationReachedResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteOwnBusinessIron"};
		},

		// building has a front store
		DisplayEffect
		{
			Filter = "!Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusinessIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusinessIron";
			Duration = 360.0;
		},
		ModifierEffect // $effect.promotedBusiness
		{
			Filter = "!Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
			ActorValue = "Attractiveness";
			Mod = 35;
			Duration = 360;
			Recover = true;
		},

		// building has NO front store
		DisplayEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusinessIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkersIron";
			Duration = 360.0;
		},
		ForwardEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusinessIron"};
			Relation = "Self";
			Duration = 360;
			ResultObjectId = "PromoteOwnBusinessForewardIron";
		},
	};
	OnEndResult = array
	{
		FunctionRemoveForward
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "PromoteOwnBusinessForewardIron";
			RemoveTemporaryOnEnd = true;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array{"PromoteOwnBusinessIron"};
			RemoveTemporaryOnEnd = true;
		}
	};

	SuccessResult = array
	{
	};
};

"PromoteYourBusinessesWithPrayersIron" = G3ActionTemplate //Promote your businesses
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
	
	ActionName = "PromoteYourBusinessesWithPrayersIron";
	DisplayName = "$action.PromoteYourBusinesses.WithPrayers.Iron";
	Description = "$action.PromoteYourBusinesses.WithPrayers.IronDesc";
	Instruction = "$callToAction.PlayerBusiness";
	IconName = "PromoteBusinessWithPrayerIron";
	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"PromoteYourBusinessesWithPrayersIron"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		}				
	};

	Cooldown = 0.03;
	Duration = 0.034; // 0.000011574 = 1 ingame sec | 0.00069444 = 1 ingame min | 0,0416664 = 1 ingame hour !(1 real sec = 0.016666667 ticks)!

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	CanFail = true;
	ShowCombatText = true;
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.2};
	};

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 100;
	EnterBuilding = "No";

	InteractionPriority = 5;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_bible", 0, -1, -1};
	}; 

//	Dialogue = array {"ACTION_MONOLOGUE", "d.act.PromoteOwnBusiness"}; // Category, id		

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
		},
	};

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteYourBusinessesWithPrayersIron"};
		},

		// building has a front store
		DisplayEffect
		{
			Filter = "!Target.hasTag.NoFrontStore";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusinessIron";
			Duration = 360.0;
		},
		ModifierEffect // $effect.promotedBusiness
		{
			Filter = "!Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ActorValue = "Attractiveness";
			Mod = 35;
			Duration = 360;
			Recover = true;
		},

		// building has NO front store
		DisplayEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkersIron";
			Duration = 360.0;
		},
		ForwardEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteYourBusinessesWithPrayersIron"};
			Relation = "Self";
			Duration = 360;
			ResultObjectId = "PromoteOwnBusinessWithPrayersForewardIron";
		},
	};
};

"GiveFlowersIron" = G3ActionTemplate //Bouquet of flowers
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/AnyMemberOfOwnFamily
	};
	UsableBy = array{ "$qs.charactertype.0" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "GiveFlowers";
	ArtefactName = "GiveFlowersIron";
	DisplayName = "$GiveFlowersIron.iron.name";
	Description = "$GiveFlowersIron.iron.desc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	IconName = "GiveFlowersIron"
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "RelationshipScore / 25 + Charisma * 2 + Target.DoesHaveTag.RomPrefPresent";
	TargetScoreFormula = "Intelligence * 0.25";

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.04;
	BaseRewardXP = 14;
	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
		
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3; 
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
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
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"GiveFlowers", 5, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"AcceptPresent", 0, -1, -1};
	};
	
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,0.25,0.3};
	};

	CriticalFactor = 0.80;
	
	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "(35 + (Target.hasTag.RomPrefPresent * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Artist", "RomPref.MoreDistance", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		},
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "30 * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		},
	};
	
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-10 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},
		@base/LoveDebuff
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		},
	};
	
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5;
		},
		@base/LoveDebuff
		FunctionUpdateRelationship
		{
			AffectLiaison = "-15 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		},
	};
};

"High" = G3ActionTemplate //Dead drunk
{
	GUIPresent = false;
	CanFail = false;

	ActionName = "High";
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.high.iron.name";
	Description = "$action.high,iron,desc";
	ShowCombatText = false;
	
	CanBeCancelled = false;
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	Duration = 0.034; //~25 seconds
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drunk1", 0, -1, -1};
	};
};

"SendToApprenticeSchool" = G3ActionTemplate //Send to school
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 15;
	IconName = "ApprenticeTest";

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{				
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			DoesNotHaveTag = "Apprentice";
		}
	};
	UsableBy = array{ "$characters.Age.Adult" };

	CanFail = true;
	
	ActionName = "SendToApprenticeSchool";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$SendToApprenticeSchool.iron.name";
	Description = "$SendToApprenticeSchool.iron.desc";
	AskConfirmationOnCancel = true;
	Instruction = "$selectionPrompt.SelectSchool";
	
	PriceFormula = "200";
	BudgetPot = "Business";
	Duration = 0.02f;
	BaseRewardPrestige = 40;
	BaseRewardXP = 20;
	Cooldown = 1.004;

	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Intelligence";
	TargetScoreFormula = "8";
	
	MoralAlignmentShift = 0.6;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.2,0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectSchool";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoSchools";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"School"};
		}
	};
	
	EnterBuilding = "ForceEnter";
	
	CriticalFactor = 1.0;
	
CriticalSuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"Ace"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionPickRandom
		{
			ResultObjectIds =  array{"ApprenticeTest"};
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccessAce";
        },
	};


	SuccessResult = array
	{
		FunctionPickRandom
		{
			ResultObjectIds =  array{"ApprenticeTest"};
		},
		FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccess";
        }
	};

	FailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
	CriticalFailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
};


"SendToJourneymanSchool" = G3ActionTemplate //Send to school
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 15;
	IconName = "ApprenticeTest";

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{				
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			DoesHaveTag = "Apprentice";
			DoesNotHaveTag = "Journeyman";
		}
	};
	UsableBy = array{ "$characters.Age.Adult" };

	CanFail = true;
	
	ActionName = "SendToJourneymanSchool";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$SendToJourneymanSchool.iron.name";
	Description = "$SendToJourneymanSchool.iron.desc";
	AskConfirmationOnCancel = true;
	Instruction = "$selectionPrompt.SelectSchool";
	
	PriceFormula = "800";
	BudgetPot = "Business";
	Duration = 0.04f;
	BaseRewardPrestige = 100;
	BaseRewardXP = 50;
	Cooldown = 1.004;

	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Intelligence";
	TargetScoreFormula = "10";
	
	MoralAlignmentShift = 0.6;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.1,0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectSchool";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoSchools";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"School"};
		}
	};
	
	EnterBuilding = "ForceEnter";
	
	CriticalFactor = 1.0;
	
	CriticalSuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"Ace"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionPickRandom
		{
			ResultObjectIds =  array{"JourneymanTest"};
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccessAce";
        },
	};


	SuccessResult = array
	{
		FunctionPickRandom
		{
			ResultObjectIds =  array{"JourneymanTest"};
		},
		FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccess";
        }
	};

	FailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
	CriticalFailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
};

"SendToMasterSchool" = G3ActionTemplate //Send to school
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 15;
	IconName = "ApprenticeTest";

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{				
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			DoesHaveTag = "Journeyman";
			DoesNotHaveTag = "Master";
		}
	};
	UsableBy = array{ "$characters.Age.Adult" };

	CanFail = true;
	
	ActionName = "SendToMasterSchool";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$SendToMasterSchool.iron.name";
	Description = "$SendToMasterSchool.iron.desc";
	AskConfirmationOnCancel = true;
	Instruction = "$selectionPrompt.SelectSchool";
	
	PriceFormula = "1500";
	BudgetPot = "Business";
	Duration = 0.12f;
	BaseRewardPrestige = 200;
	BaseRewardXP = 200;
	Cooldown = 1.004;

	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Intelligence";
	TargetScoreFormula = "12";
	
	MoralAlignmentShift = 0.6;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.1,0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectSchool";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoSchools";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"School"};
		}
	};
	
	EnterBuilding = "ForceEnter";
	
	CriticalFactor = 1.0;
	
	CriticalSuccessResult = array
	{
		ModifierEffect
		{
			
			Tags = array{"Ace"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionPickRandom
		{
			ResultObjectIds =  array{"MasterTest"};
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccessAce";
        },
	};


	SuccessResult = array
	{
		FunctionPickRandom
		{
			ResultObjectIds =  array{"MasterTest"};
		},
		FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestSuccess";
        }
	};

	FailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
	CriticalFailureResult = array
	{
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "TestFailure";
        },
	};
};