"SurveyCrimes" = G3ActionTemplate //Patrol
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 55;

	ActionClassName = "GuardPatrol";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Mercenary";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GuardPost", 3 }
	};
	
	ShowCombatText = true;
	
	ActionName = "SurveyCrimes";
	DisplayName = "$action.SurveyCrimes";
	Description = "$action.SurveyCrimesDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	
	SourceScoreFormula = "Perception";

	BaseRewardXP = 140;

	CanFail = false;

	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,-0.3,0.4};
	};

	Duration = 0.25;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			Inhabitated = 3;
			Rich = 2;
			WellGuarded = -1;
			OnStreet = 3;
			QuarterCity = 2;
			QuarterVillage = 2;
			QuarterSurrounding = -1;
			CloseToActor = 2;
		}
	};
	
	Roaming = true;
	SourceRun = true;
	
	DetectionRadius = 300.0;
	
	GuardingDetectionRules = DetectionRules
	{
		React = ReactByRules
		{
			ActionsSource = array{"AnyValue"};
			ActionsTarget = array{"AnyValue"};
		};
		Ignore = IgnoreByRules
		{
			ActionsSource = array{"SameDynasty", "AlliedDynasty"};
		};
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionGiveMoney
		{
			ApplyTo = "Self";
			Amount = 450;
			IsDiceDependent = true;
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ShouldUseCurrentNeighbhorhood = true;
			ProductType = 3;
			Amount = -0.01;
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
		},
	};
};

"Intervene" = G3ActionTemplate //Stand Guard
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 45;

	ActionClassName = "GuardPatrol";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Mercenary";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GuardPost", 2 }
	};
	
	ShowCombatText = true;
	
	ActionName = "Intervene";
	DisplayName = "$action.Intervene";
	Description = "$action.InterveneDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	
	SourceScoreFormula = "Perception";
	
	Duration = 0.15;
	
	BaseRewardXP = 100;

	CanFail = false;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			Inhabitated = 3;
			Rich = 2;
			WellGuarded = -1;
			QuarterCity = 2;
			QuarterVillage = 2;
			QuarterSurrounding = -1;
			OnStreet = 3;
			CloseToActor = 2;
		}
	};
	
	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,-0.3,-0.4};
	};

	Roaming = false;
	
	DetectionRadius = 200.0;
	
	GuardingDetectionRules = DetectionRules
	{
		React = ReactByRules
		{
			ActionsSource = array{"AnyValue"};
			ActionsTarget = array{"AnyValue"};
		};
		Ignore = IgnoreByRules
		{
			ActionsSource = array{"SameDynasty", "AlliedDynasty"};
		};
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionGiveMoney
		{
			ApplyTo = "Self";
			Amount = 250;
			IsDiceDependent = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ProductType = 3;
			Amount = -0.05;
			ShouldUseCurrentNeighbhorhood = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ProductType = 5;
			Amount = 0.02;
			ShouldUseCurrentNeighbhorhood = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ProductType = 6;
			Amount = 0.02;
			ShouldUseCurrentNeighbhorhood = true;
		},
	};
};

"GuardBuilding" = G3ActionTemplate //Guard building
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 46;

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

	ActionName = "GuardBuilding";
	Duration = -1;
	ShowCombatText = false;
	@base/GuardBuilding

	TargetTags = array{"IsHighTier"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			ActiveResidence = 2;
			Guarded = -2;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = 1;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		}
	};

	SuccessResult = array
	{
		FunctionTrackObjectiveProgress
		{
			Amount = 12;
			ObjectiveTypename = "IncreaseSecurity";
		};
	};
};
	
"HiredGuardBuilding" = G3ActionTemplate //Hire guard building
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
			HasProfession = "Mercenary";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GuardPost", 1 }
	};
	
	IconName = "HireGuardBuilding";
	ActionClassName = "SimpleExecutionAction";
	ActionName = "HiredGuardBuilding";
	DisplayName = "$action.HiredGuardBuilding";
	Description = "$action.HiredGuardBuildingDesc";
	Instruction = "$callToAction.BusinessNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Perception * 2.5 + Motivation";
	TargetScoreFormula = "BuildingSecurity";
	
	Duration = 0.01;
	BaseRewardXP = 65;
	
	DistanceFromTarget = 150;
	DistanceFromTargetMin = 150;
	SourceRun = true;

	TargetTags = array{"HiredGuard"};
	DesiredProfiles = array
	{
		TargetProfileBuilding // somewhere in the world
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = -3;
				Alliance = 2;
				GoodRelationWithMe = 1;
				Rich = 1;
			};

			MatchTargetTags = -3;
			Burning = -3;
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			Guarded = -3;
			CloseToActor = 2;
		},
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};

	CriticalFactor = 1.0;
	
	SuccessResult =  array
	{
		DisplayEffect
		{
			Tags = array{"HiredGuard"};
			ApplyTo = "Target";
			DisplayGroup = "protected";
			Duration = 450.0;
			DisplayName = "$action.HiredGuardPaid";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"HiredGuard"};
			Duration = 450.0;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"HiredGuardBuilding2"};
		},
	};
	
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"HiredGuard"};
			ApplyTo = "Target";
			DisplayGroup = "protected";
			Duration = 100.0;
			DisplayName = "$action.HiredGuardNotPaid";
		};
	};
};

"HiredGuardBuilding2" = G3ActionTemplate //Guard building after requesting job
{
	GUIPresent = false;

	ActionName = "HiredGuardBuilding2";
	ShowCombatText = true;
	Duration = 0.15;
	@base/GuardBuilding;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding // somewhere in the world
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = -3;
				Alliance = 2;
				GoodRelationWithMe = 1;
				Rich = 1;
			};

			Burning = -3;
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			Guarded = -3;
			CloseToActor = 2;
		},
	};

	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Giver = "Target";
			Amount = 90;
			PercentageOfWealthTaken = 0.15;
			MaxTransferred = 350;
			IsDiceDependent = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "2";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		};
	};
};

"TollRoad" = G3ActionTemplate // Toll transports
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 41;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Mercenary";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GuardPost", 1 }
	};

	IconName = "ScanRoads";
	ActionName = "TollRoad";
	ActionClassName = "AmbushAction";
	DisplayName = "$action.TollRoad";
	Description = "$action.TollRoadDesc";
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
			WellGuarded = -2;
			Inhabitated = 2;
			OnMainStreet = 2;
			OnStreet = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"GuardBuilding1", -1, -1, -1};
	}; 
	
	MainTemplateName = "TollRoad2";

	ThirdPartyProfiles = array
	{				
		TargetProfileCharacter
		{
			MaxDistance = 1200;

			Adult = 3;
			NPCGuard = -3;
			CloseToActor = 3;
			Transporter = 3;
			DoesNotHaveAnyTags = array{ "InAmbushAction" };
			FamilyProfile = TargetProfileFamily 
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 2;
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
			Actions = array{"TollRoad2"};
		}
	};
};

"TollRoad2" = G3ActionTemplate
{
	GUIPresent = false;
	DisplayName = "$action.TollRoad";
	Description = "$action.TollRoadDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayersNotAllies";

	IconName = "ScanRoads";
	ActionClassName = "SimpleExecutionAction";
	ActionName = "TollRoad2";
	TargetActor = "Character";
	ActionActor = "Character";
	
	SourceScoreFormula = "Intimidation + Dexterity * 0.5 + Strength * 0.75 + Perception * 0.5";
	TargetScoreFormula = "Strength + Perception";
	
	IsAggression = false;
	CanFail = true;
	BaseRewardXP = 15;
	
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
	
	CriticalFactor = 0.85;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 100;
			PercentageOfWealthTaken = 0.1;
			MaxTransferred = 250;
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

	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 60;
			PercentageOfWealthTaken = 0.1;
			MaxTransferred = 125;
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
			ActionTarget = "Target";
			Actions = array{"AttackAmbushedCharacterAction"}; // use ambush to rob
		}
	};
};