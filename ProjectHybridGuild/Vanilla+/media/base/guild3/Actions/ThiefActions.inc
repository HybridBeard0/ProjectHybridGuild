"PlayDiceGameCoordinate" = G3ActionTemplate // Play a game of dice (with location)
{
	GUIPresent = false;
	IconName = "PlayDiceGame";
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$profession.Thief" };
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "ThiefHideout", 1 }
	};

	ActionName = "PlayDiceGameCoordinate";
	ActionClassName = "AmbushAction";
	DisplayName = "$PlayDiceGameCoordinate";
	Description = "$PlayDiceGameDesc";
	Instruction = "$callToAction.StreetArea";
	
	ActionActor = "Character";
	TargetActor = "Coordinate";

	AskConfirmationOnCancel = false;
	
	Duration = 0.12;
	ShowCombatText = false;
	CanFail = false;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
			QuarterCity = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Survey", -1, -1, -1};
	}; 
	
	// Let the action know that the 'payload' action of the ambush is "PlayDiceGame". 
	// It will then make sure to find a victim that matches the target profiles of "PlayDiceGame"
	MainTemplateName = "PlayDiceGame";
	
	// In the third party profiles, we define ADDITIONAL requirements for valid victims.
	// The victims must fulfill the requirements of "PlayDiceGame" AND (one of) these third party profiles.
	ThirdPartyProfiles = array
	{				
		TargetProfileCharacter
		{
			MaxDistance = 1200;
		};
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PlayDiceGame"};
		}
	};
};

"PlayDiceGame" = G3ActionTemplate //Play a game of dice
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 25;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "Thief";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Thief" };
	
	ActionName = "PlayDiceGame";
	DisplayName = "$PlayDiceGame";
	Description = "$PlayDiceGameDesc";
	Instruction = "$callToAction.CharacterConsciousAndAdult";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs1", 0, -1, -1};
	}; 

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs1", 0, -1, -1};
	};
	
	SourceScoreFormula = "(25 * (1 + Source.Luck)) + Intelligence + Entertainment + Motivation";
	TargetScoreFormula = "(5 * (1 + Target.Luck)) + Intelligence + (Target.hasTag.eventbuffSenseForDanger) * 10)";
	
	Duration = 0.0125;
	Cooldown = 0.0001;
	BaseRewardXP = 60;
	CanFail = true;
	CriticalFactor = 0.9;

	DistanceFromTarget = 100;
	DistanceFromTargetMin = 60;
	InteractionPriority = 0;
	
	TargetTags = array{"Swindled"};
	DesiredProfiles = array
	{
		TargetProfileCharacter // human
		{
			IsSourceHuman = 3;
			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = -2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter // no human
		{
			IsSourceHuman = -3;
			Adult = 3;
			Boat = -3;
			MaxDistance = 1500;
			CloseToActor = 2;
			MatchTargetTags = -2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
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
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.25,0};
	};

	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Amount = 50;
			PercentageOfWealthTaken = 0.05;
			MaxTransferred = 100;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},

		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 270.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 5;
			Amount = -0.01;
		},
	};
	
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Amount = 40;
			PercentageOfWealthTaken = 0.03;
			MaxTransferred = 75;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},

		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 270.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-2";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 5;
			Amount = -0.01;
		},
	};
	
	FailureResult = array
	{
		FunctionTransferMoney
		{
			Amount = 15;
			IsDiceDependent = true;
			Giver = "Source";
			Receiver = "Target";
		},
		
		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 540.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 5;
			Amount = 0.01;
		},
	};
	
	CriticalFailureResult = array
	{
		FunctionTransferMoney
		{
			Amount = 30;
			IsDiceDependent = true;
			Giver = "Source";
			Receiver = "Target";
		},
		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 1080.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "2";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 5;
			Amount = 0.01;
		},
	};
};

"PickPocketCoordinate" = G3ActionTemplate //Pickpocketing (with location)
{
	GUIPresent = false;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$profession.Thief" };
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "ThiefHideout", 1 }
	};

	ActionName = "PickPocketCoordinate";
	ActionClassName = "AmbushAction";
	DisplayName = "$PickPocketCoordinate";
	Description = "$PickPocketDesc";
	Instruction = "$callToAction.StreetArea";
	
	ActionActor = "Character";
	TargetActor = "Coordinate";

	AskConfirmationOnCancel = false;
	ReturnAndDropAllOnAutomation = true;
	
	Duration = 0.12;
	ShowCombatText = false;
	CanFail = false;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
			QuarterCity = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Survey", -1, -1, -1};
	}; 
	
	// Let the action know that the 'payload' action of the ambush is "PickPocket". 
	// It will then make sure to find a victim that matches the target profiles of "PickPocket"
	MainTemplateName = "PickPocket";
	
	// In the third party profiles, we define ADDITIONAL requirements for valid victims.
	// The victims must fulfill the requirements of "PickPocket" AND (one of) these third party profiles.
	ThirdPartyProfiles = array
	{				
		TargetProfileCharacter
		{
			MaxDistance = 1200;
		};
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PickPocket"};
		}
	};
};

"PickPocket" = G3ActionTemplate //Pickpocketing
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 30;
	
	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Thief";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Thief" };
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "PickPocket";
	DisplayName = "$PickPocket";
	Description = "$PickPocketDesc";
	Instruction = "$callToAction.CharacterConsciousAndAdult";

	SourceScoreFormula = "4 + Stealth + Dexterity * 1 + Motivation + Source.hasTag.eventbuffQuickChangeArtist * 3";
	TargetScoreFormula = "Perception + Intimidation * 0.5 + Target.hasTag.eventbuffSenseForDanger * 10";

	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	ReturnAndDropAllOnAutomation = true;
	
	CanFail = true;	
	BaseRewardXP = 56;

	BudgetPot = "Business";
	BudgetPost = "Family";
	
	TargetTags = array{"Alerted"};
	DesiredProfiles = array
	{
		TargetProfileCharacter // human player
		{
			IsSourceHuman = 3;
			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = -2;
			Employee = 2;
			NPC = 1;
			IsMyVIPGuard = -3;
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
			};
		},
		TargetProfileCharacter // non-human player
		{
			IsSourceHuman = -3;
			Adult = 3;
			Boat = -3;
			MaxDistance = 1500;
			CloseToActor = 2;
			MatchTargetTags = -2;
			Employee = 2;
			NPC = 1;
			IsMyVIPGuard = -3;
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
			};
		}
	};

	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,-0.6,-0.2};
	};
	
	CriticalFactor = 0.85;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 170;
			PercentageOfWealthTaken = 0.08;
			MaxTransferred = 350;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			Giver = "Target";
			MinAmount = 1;
			MaxAmount = 4;
		},
	};
	
	SuccessResult = array
	{				
		FunctionTransferMoney
		{
			Amount = 100;
			PercentageOfWealthTaken = 0.07;
			MaxTransferred = 200;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			Giver = "Target";
			MinAmount = 0;
			MaxAmount = 2;
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
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 1;
			Amount = 0.01;
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertCharacter"};
		};
	};
	
	FailureResult = array
	{
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertCharacter"};
		};
	};
	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertCharacter"};
		};
	};
};

"StealHouse" = G3ActionTemplate //"Break into Building"
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 35;

	ActionClassName = "SimpleExecutionAction";
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/Henchmen,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Thief";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$profession.Thief" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "ThiefHideout", 2 }
	};
	
	ActionName = "StealHouse";
	DisplayName = "$action.StealHouse";
	Description = "$action.StealHouseDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";
	ActionActor = "Character";
	TargetActor = "Building";

	Duration = 0.08; //year
	BaseRewardXP = 100;

	SourceScoreFormula = "2 + Stealth * 0.75 + Dexterity * 0.5 + Motivation + (Source.hasTag.LockPicking*5) + (Source.hasTag.eventbuffQuickChangeArtist) * 3";
	
	TargetScoreFormula = "Level + BuildingSecurity";

	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	ReturnAndDropAllOnAutomation = true;
	
	CanFail = true;
	
	EnterBuilding = "ForceEnterStealthy";

	TargetTags = array{"Alerted", "FreemasonsGift"};			
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			ActiveResidence = 2;
			Burning = -3;
			Business = 1;				 
			CloseToActor = 2;
			Guarded = -2;
			CityBuilding = -3;
			ResourceProducer = -3;  
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				Alliance = -3;
				Feud = 1;
				Rich = 2;	
			};
		};
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.6,-0.5};
	};

	CriticalFactor = 0.85;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 250;
			PercentageOfWealthTaken = 0.125;
			MaxTransferred = 1000;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionTransferEvidence
		{
			Receiver = "Source";
			Giver = "Target";
			IsDiceDependent = false;
			CreateEvidenceOfCurrentAction = false;
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			Giver = "Target";
			MinAmount = 2;
			MaxAmount = 5;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "PlayerBuildingRobbed";
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
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 120;
			PercentageOfWealthTaken = 0.075;
			MaxTransferred = 450;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionTransferEvidence
		{
			Receiver = "Source";
			Giver = "Target";
			IsDiceDependent = true;
			CreateEvidenceOfCurrentAction = false;
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			Giver = "Target";
			MinAmount = 1;
			MaxAmount = 3;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "PlayerBuildingRobbed";
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
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		},
	};
	
	FailureResult = array
	{
		FunctionTransferEvidence
		{
			Receiver = "Source";
			Giver = "Target";
			IsDiceDependent = true;
			CreateEvidenceOfCurrentAction = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "StealHouseFailure";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		},
	};
	
	CriticalFailureResult = array
	{
		FunctionTransferEvidence
		{
			Receiver = "Source";
			Giver = "Target";
			IsDiceDependent = false;
			CreateEvidenceOfCurrentAction = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "StealHouseFailure";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		},
	};
	
	OnEndResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{ "ForcedExit" };
		},
	};
};

"Heist" = G3ActionTemplate //"Heist family"
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 36;

	ActionClassName = "SimpleExecutionAction";
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/Henchmen,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Thief";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$profession.Thief" };
	
	IconName = "HireStealHouse";
	ActionName = "Heist";
	DisplayName = "$action.Heist";
	Description = "$action.HeistDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";
	ActionActor = "Character";
	TargetActor = "Building";

	Duration = 0.12; //year
	BaseRewardXP = 100;

	Cooldown = 2.0;
	CooldownFamilyWide = true;

	SourceScoreFormula = "2 + Stealth * 0.75 + Dexterity * 0.5 + Motivation + (Source.hasTag.LockPicking*5) + (Source.hasTag.eventbuffQuickChangeArtist) * 3";
	TargetScoreFormula = "Level + BuildingSecurity";

	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	
	CanFail = true;
	
	EnterBuilding = "ForceEnterStealthy";

	TargetTags = array{"Alerted", "FreemasonsGift"};			
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			ActiveResidence = 3;
			Burning = -3;
			Business = -3;		 
			CloseToActor = 2;
			Guarded = -2;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				IsDynasty = 3;
				GoodRelationWithMe = -2;
				SocialHigher = 1;
				Feud = 1;
				Rich = 2;
			};
		};
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.6,-0.5};
	};

	CriticalFactor = 0.85;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 650;
			PercentageOfWealthTaken = 0.3;
			MaxTransferred = 20000;
			IsDiceDependent = false;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "HeistSuccess";
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
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 350;
			PercentageOfWealthTaken = 0.15;
			MaxTransferred = 15000;
			IsDiceDependent = false;
			Giver = "Target";
			Receiver = "Source";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "HeistSuccess";
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
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		},
	};
	
	FailureResult = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "HeistFailure";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		},
	};
	
	CriticalFailureResult = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "HeistFailure";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		},
	};
	
	OnEndResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{ "ForcedExit" };
		};
	};
};