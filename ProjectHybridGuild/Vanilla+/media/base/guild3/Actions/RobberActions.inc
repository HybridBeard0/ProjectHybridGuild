"PalmistryCoordinate" = G3ActionTemplate // Palmistry (with location)
{
	GUIPresent = false;
	IconName = "Palmistry";
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$Robber" };
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 }
	};

	ActionName = "PalmistryCoordinate";
	ActionClassName = "AmbushAction";
	DisplayName = "$action.PalmistryCoordinate";
	Description = "$action.Palmistry";
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
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Survey", -1, -1, -1};
	}; 
	
	// Let the action know that the 'payload' action of the ambush is "Palmistry". 
	// It will then make sure to find a victim that matches the target profiles of "Palmistry"
	MainTemplateName = "Palmistry";
	
	// In the third party profiles, we define ADDITIONAL requirements for valid victims.
	// The victims must fulfill the requirements of "Palmistry" AND (one of) these third party profiles.
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
			Actions = array{"Palmistry"};
		}
	};
};

"Palmistry" = G3ActionTemplate //Palmistry
{
	GUIPresent = true;
	UICategory = "Rogue";
	BudgetPost = "Rogue";
	OrderIndex = 22;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "Robber";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$Robber" };
			
	ActionName = "Palmistry";
	DisplayName = "$action.Palmistry";
	Description = "$action.PalmistryDesc";
	Instruction = "$callToAction.CharacterConsciousAndAdult";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	}; 

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	
	SourceScoreFormula = "(25 * (1 + Source.Luck)) + Intelligence + Entertainment + Motivation";
	TargetScoreFormula = "(5 * (1 + Target.Luck)) + Intelligence + Target.hasTag.eventbuffSenseForDanger * 10";

	Duration = 0.01;
	Cooldown = 0.0001;
	BaseRewardXP = 25;
	CanFail = true;
	CriticalFactor = 0.9;

	DistanceFromTarget = 60;
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
	
	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.25,0.25,0.2};
	};

	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Amount = 35;
			PercentageOfWealthTaken = 0.025;
			MaxTransferred = 60;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "2";
		},
		
	};
	
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Amount = 15;
			PercentageOfWealthTaken = 0.02;
			MaxTransferred = 50;
			IsDiceDependent = true;
			Giver = "Target";
			Receiver = "Source";
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		
		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 270.0;
		},
	};
	
	FailureResult = array
	{
		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 540.0;
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
	};
	
	CriticalFailureResult = array
	{
		TagEffect
		{
			Tags = array{"Swindled"};
			ApplyTo = "Target";
			Duration = 1080.0;
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "-2";
		},
	};
	
};

"PublicEntertainment" = G3ActionTemplate //Jugglery
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 20;
	
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "Robber";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$Robber" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 }
	};
	
	ActionName = "PublicEntertainment";
	DisplayName = "$PublicEntertainment";
	Description = "$PublicEntertainmentDesc";
	Instruction = "$callToAction.StreetArea";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "PublicEntertainment";

	SourceScoreFormula = "Entertainment * 2";
	
	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,0.3,0.2};
	};

	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			Rich = 1;
			GoodRelationWithMe = -1;
			QuarterSurrounding = -3;
			QuarterCity = 1;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"public_entertainment1", 0, -1, -1};
	};  
	
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PublicEntertainmentOver"};
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "PublicEntertainment";
			Tags = array{"PublicEntertainment"};
			SpreadResult = "PublicEntertainmentResult";
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
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 5;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 6;
			Amount = 0.01;
		}
	};
};

"PublicEntertainmentOver" = G3ActionTemplate //End of the performance
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "PublicEntertainmentOver";
	DisplayName = "$FinaleOfShow";
	Description = "$FinaleOfShowDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;

	SourceScoreFormula = "Entertainment + Motivation";
	TargetScoreFormula = "2";

	CanFail = true;
	CriticalFactor = 0.95;
	BudgetPost = "Rogue";

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Curtsy", 0, -1, -1};
	};
	
	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "20 + (Source.Entertainment * 0.75)";
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "3";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"PublicEntertainmentOver"};
			Duration = 2;
		}
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "9 + (Source.Entertainment * 0.5)";
		}
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "5 + (Source.Entertainment * 0.2)";
		}
	};
	CriticalFailureResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-2";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"PublicEntertainmentOver"};
			Duration = 2;
		}
	};
};

"PublicEntertainmentOnStage" = G3ActionTemplate //Jugglery on a rostrum
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 21;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "Robber";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$Robber" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "PublicEntertainmentOnStage";
	DisplayName = "$PublicEntertainmentOnStage";
	Description = "$PublicEntertainmentDesc";
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
		}				
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "PublicEntertainmentOnStage"; },
		};
	};

	BaseRewardXP = 35;
	
	DestinationsPointOfInterestType = "PublicEntertainment";

	SourceScoreFormula = "Entertainment * 2";
				
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,0.4,0};
	};

	Duration = 0.0385; //2 weeks
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
	
	EnterBuilding = "ForceEnter";

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
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PublicEntertainmentOnStageOver"};
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "PublicEntertainmentOnStage";
			Tags = array{"PublicEntertainmentOnStage"};
			SpreadResult = "PublicEntertainmentResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 5;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 6;
			Amount = 0.01;
		}
	};
};

"PublicEntertainmentOnStageOver" = G3ActionTemplate //End of the performance
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "PublicEntertainmentOnStageOver";
	DisplayName = "$FinaleOfShow";
	Description = "$FinaleOfShowDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;

	SourceScoreFormula = "Entertainment + Motivation";
	TargetScoreFormula = "1";

	CanFail = true;
	CriticalFactor = 0.95;
	BudgetPost = "Rogue";
	
	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "20 + (Source.Entertainment * 0.75)";
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "3";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"PublicEntertainmentOnStageOver"};
			Duration = 2;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "9 + (Source.Entertainment * 0.5)";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "5 + (Source.Entertainment * 0.2)";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	FailureResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-2";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"PublicEntertainmentOnStageOver"};
			Duration = 2;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
};

"AmbushAndAttack" = G3ActionTemplate
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 25;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			HasProfession = "Robber";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$Robber" };
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 }
	};

	ActionName = "AmbushAndAttack";
	ActionClassName = "AmbushAction";
	
	DisplayName = "$action.Ambush";
	Description = "$action.AmbushDesc";
	Instruction = "$callToAction.StreetAreaRural";

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
			QuarterCity = -3;
			WellGuarded = -2;
			Inhabitated = 2;
			Rich = 2;
			CloseToActor = 2;
			OnMainStreet = 2;
			OnStreet = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Ambush_idle", -1, -1, -1};
	}; 

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "ambush/ambush" }; };
	};
	
	// Let the action know that the 'payload' action of the ambush is "AttackAmbushedCharacter". 
	// It will then make sure to find a victim that matches the target profiles of "AttackAmbushedCharacter"
	MainTemplateName = "AttackAmbushedCharacter";
	
	// In the third party profiles, we define ADDITIONAL requirements for valid victims.
	// The victims must fulfill the requirements of "AttackAmbushedCharacter" AND (one of) these third party profiles.
	TargetTags = array{"ResupplyGuard"};
	ThirdPartyProfiles = array
	{				
		TargetProfileCharacter
		{
			Adult = 3;
			NPCGuard = -3;
			MatchTargetTags = -3; // avoid attacking transport guards
			CloseToActor = 3;
			DoesNotHaveAnyTags = array{ "InAmbushAction", "eventbuffSenseForDanger" };
			FamilyProfile = TargetProfileFamily 
			{
				Rich = 3;
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
		};
		
		TargetProfileCharacter
		{
			Adult = 3;
			NPCGuard = -3;
			MatchTargetTags = -3; // avoid attacking transport guards
			CloseToActor = 3;
			Transporter = 3;
			DoesNotHaveAnyTags = array{ "InAmbushAction" };
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
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"AttackAmbushedCharacter"};
		}
	};
	
	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"InAmbushAction"};
		},
	};
	
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			Tags = array {"InAmbushAction"};
		},
	};
};

"AttackAmbushedCharacter" = G3ActionTemplate // Ambush  (technically this is only part of the ambush action chain, but it has the same name, so the illegal part of the action has a matching name in the city laws... to make the player understands the connection to the ambush action chain)
{
	GUIPresent = false;
	DisplayName = "$action.Ambush";
	Description = "$action.AmbushDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayersNotAllies";
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "AttackAmbushedCharacter";
	TargetActor = "Character";
	ActionActor = "Character";
	
	SourceScoreFormula = "Intimidation + Dexterity * 0.5 + Strength * 0.75 + Stealth * 0.5 + (Source.hasTag.eventbuffQuickChangeArtist) * 2";
	TargetScoreFormula = "Strength + Perception";
	
	IsAggression = false; //Needs to be false, otherwise characters who gave up immediately might attack afterwards
	CanFail = true; 
	BaseRewardXP = 15;
	UICategory = "Rogue";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			CloseToActor = 1;
			Healthy = -2;
			FightingProwess = -1;
			Boat = -3;
			NPC = -2;
			Leader = -1;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -3;
				OtherCity = -1;
				MemberOfSecretSociety = -1;
				SocialHigher = -1;
				PoliticalImportance = -1;
				Heretic = 1;
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
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"challenge_for_duel", 0, -1, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"surrender1", 0, -1, -1};
	};
	
	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"InAmbushAction"};
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"InAmbushAction"};
		},
	};
	
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			Tags = array {"InAmbushAction"};
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array {"InAmbushAction"};
		},
	};
	
	CriticalFactor = 0.80;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = "50 + ((Target.SocialCaste + 1) * 2) + (Source.Intimidation * 1.5) + (Source.Stealth * 2)";
			MaxTransferred = 100;
			IsDiceDependent = true;
			Receiver = "Source";
			Giver = "Target";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			Giver = "Target";
			MinAmount = 0;
			MaxAmount = 1;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
	};
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = "25 + ((Target.SocialCaste + 1) * 2) + (Source.Intimidation * 1.5) + (Source.Stealth * 2)";
			MaxTransferred = 80;
			IsDiceDependent = true;
			Receiver = "Source";
			Giver = "Target";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
	};
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"AttackAmbushedCharacterAction"};
		}
	};
};

"AttackAmbushedCharacterAction" = G3ActionTemplate //Attack someone after ambush
{
	GUIPresent = false;

	ActionClassName = "AttackCharacterAction";

	DisplayName = "$action.AttackCharacter";
	Description = "$action.AttackCharacterDesc";

	IconName = "AttackCharacter";
	ActionName = "AttackAmbushedCharacterAction";
	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Strength * 2 + Combat";
	
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;
	CanFail = false;
	CriticalFactor = 1;
	ShowCombatText = false;
	
	ConfirmationSoundId = 47;

	BaseRewardXP = 5;
	
	CanFail = false;

	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.01, -0.01, -0.1};
	};
	
	OnStartResult = array
	{
		// This decision handler makes our character execute "StealFromCharacter" if the character wins the fight
		FunctionInstallAmbushDecisionHandler{}
	};
};

"CollectProtectionMoney" = G3ActionTemplate //Extort protection money
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 40;

	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Robber";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$Robber" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 }
	};

	ActionClassName = "SimpleExecutionAction";
	ActionName = "CollectProtectionMoney";
	DisplayName = "$CollectProtectionMoney";
	Description = "$CollectProtectionMoneyDesc";
	Instruction = "$callToAction.BusinessNotPlayers";

	IsAggression = true;
	ShowCombatText = true;
	
	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Intimidation * 2.5 + Motivation";
	TargetScoreFormula = "BuildingSecurity";
	
	Duration = 0.0416;
	BaseRewardXP = 65;

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 125;
	SourceRun = true;

	TargetTags = array{"ProtectionMoney", "FreemasonsGift"};
	DesiredProfiles = array
	{
		TargetProfileBuilding // somewhere in the world
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				GoodRelationWithMe = -2;
				Feud = 1;
				Rich = 1;
			};

			MatchTargetTags = -3;
			Burning = -3;
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			OtherCity = -2;
			Guarded = -2;
			CloseToActor = 2;
		},
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Threaten", 0, -1, -1};
	};

	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.4,-0.7};
	};

	CriticalFactor = 0.85;
	
	CriticalSuccessResult =  array
	{
		DisplayEffect
		{
			Tags = array{"ProtectionMoney"};
			ApplyTo = "Target";
			Duration = 450.0;
			DisplayGroup = "debuffed";
			DisplayName = "$action.ProtectionMoneyPaid";
		},
		FunctionTransferMoney
		{
			Receiver = "Source";
			Giver = "Target";
			Amount = 100;
			PercentageOfWealthTaken = 0.2;
			MaxTransferred = 2000;
			IsDiceDependent = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"ProtectionMoney"};
			Duration = 450.0;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
	};
	
	SuccessResult =  array
	{
		DisplayEffect
		{
			Tags = array{"ProtectionMoney"};
			ApplyTo = "Target";
			DisplayGroup = "debuffed";
			Duration = 450.0;
			DisplayName = "$action.ProtectionMoneyPaid";
		},
		FunctionTransferMoney
		{
			Receiver = "Source";
			Giver = "Target";
			Amount = 90;
			PercentageOfWealthTaken = 0.1;
			MaxTransferred = 250;
			IsDiceDependent = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"ProtectionMoney"};
			Duration = 450.0;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
	};
	
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"ProtectionMoney"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			Duration = 450.0;
			DisplayName = "$action.ProtectionMoneyNotPaid";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
	};
	
	CriticalFailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"ProtectionMoney"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			Duration = 450.0;
			DisplayName = "$action.ProtectionMoneyNotPaid";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-2";
			AffectCurrentNeighborhoodToSource = "-1";
		};
	};
};