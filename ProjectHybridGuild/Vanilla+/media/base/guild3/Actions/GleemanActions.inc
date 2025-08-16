"PlayMusic" = G3ActionTemplate //Play music
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
	
	ActionName = "PlayMusic";
	DisplayName = "$PlayMusic";
	Description = "$PlayMusicDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	DestinationsPointOfInterestType = "PlayMusic";

	SourceScoreFormula = "Entertainment * 2 + (Source.hasTag.eventbuffQuickChangeArtist) * 2";
	Duration = 0.0385; //2 weeks
	BaseRewardXP = 30;
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
				
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,0.25,0.3};
	};

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			Rich = 1;
			GoodRelationWithMe = -1;
			QuarterCity = 1;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
			QuarterSurrounding = -3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"gleeman_shawm", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_bagpipe", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle2", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum2", 0, -1, -1};
	}; 
	
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PlayMusicOver"};
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
					TargetScoreFormula = "Intelligence*0.5";
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

"PlayMusicOver" = G3ActionTemplate //End of the performance
{
	GUIPresent = false;
	
	ActionName = "PlayMusicOver";
	DisplayName = "$FinaleOfShow";
	Description = "$FinaleOfShowDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;

	SourceScoreFormula = "Dexterity + Entertainment + Motivation";
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
			Amount = "45 + (Source.Entertainment * 0.75)";
			MaxTransferred = 75;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "1";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"PlayMusicOver"};
			Duration = 2;
		}
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "27 + (Source.Entertainment * 0.5)";
			MaxTransferred = 45;
		}
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "14 + (Source.Entertainment * 0.2)";
			MaxTransferred = 20;
		}
	};
	FailureResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-1";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"PlayMusicOver"};
			Duration = 2;
		}
	};
};

"PlayMusicOnStage" = G3ActionTemplate //Play music on a rostrum
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 16;
	
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
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "PlayMusicOnStage";
	DisplayName = "$PlayMusicOnStage";
	Description = "$PlayMusicDesc";
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
			TargetProfileSnapPoint{ Context = "PlayMusicOnStage"; },
		};
	};

	BaseRewardXP = 30;

	DestinationsPointOfInterestType = "PlayMusic";

	EnterBuilding = "ForceEnter";

	SourceScoreFormula = "Entertainment * 2";
	Duration = 0.0385; //2 weeks

	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
				
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,0.4,0.1};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"gleeman_shawm", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_bagpipe", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_fiddle2", 0, -1, -1};
		CustomAnimationInfo = array {"gleeman_drum2", 0, -1, -1};
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
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PlayMusicOnStageOver"};
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "PublicEntertainment";
			Tags = array{"PublicEntertainment"};
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
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ProductType = 5;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ProductType = 6;
			Amount = 0.01;
		}
	};
};

"PlayMusicOnStageOver" = G3ActionTemplate //End of the performance
{
	GUIPresent = false;
	
	ActionName = "PlayMusicOnStageOver";
	DisplayName = "$FinaleOfShow";
	Description = "$FinaleOfShowDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "PlayMusicOnStageOver"; },
		};
	};
	
	ShowCombatText = true;

	SourceScoreFormula = "Dexterity + Entertainment + Motivation";
	TargetScoreFormula = "1";

	CanFail = true;
	CriticalFactor = 0.95;
	BudgetPost = "Rogue";
	
	CriticalSuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "45 + (Source.Entertainment * 0.75)";
			MaxTransferred = 75;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "1";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"PlayMusicOver"};
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
			Amount = "27 + (Source.Entertainment * 0.5)";
			MaxTransferred = 45;
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
			Amount = "14 + (Source.Entertainment * 0.2)";
			MaxTransferred = 20;
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
			AffectCurrentNeighborhoodToSource = "-1";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"PlayMusicOver"};
			Duration = 2;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
};

"StageConcert" = G3ActionTemplate //Present a concert
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 16;

	GUIData = array
	{
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsEmployee = 1;
			IsTransporter = 0;
			BelongsToOwnFamily = 1;
			Filter = "Workplace.hasTag.MinstrelTent";
		},
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Gleeman";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Gleeman" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gleeman", 1 }
	};

	ActionName = "StageConcert";
	ActionClassName = "BuildingSoundAction";
	DisplayName = "$StageConcert";
	Description = "$StageConcertDesc";
	Instruction = "$callToAction.PickAGleemanHut";

	ActionActor = "Character";
	TargetActor = "Building";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			Workplace = 3; // Make sure the minstrels only perform stage concerts in their own workplace (and not any nearby minstrel tent)
			Burning = -3;
		};
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "StageConcert"; },
		};
	};
	
	OnlyExecute = false;
	EnterBuilding = "TryEnter";
				
	DestinationsPointOfInterestType = "PlayMusic";

	SourceScoreFormula = "Entertainment * 2 + Motivation";
	Duration = 0.077; //2 weeks
	BaseRewardXP = 35;
	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = false;
				
	MoralAlignmentShift = 0.07;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,0.5,0.3};
	};
	
	SuccessResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"StageConcertOver"};
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "StageConcert";
			Tags = array{"StageConcert"};
			SpreadResult = "StageConcertResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence";
					SourceScoreFormula = "!Target.IsEmployee * ((Source.Entertainment * 2) + Motivation)";
				}
			}; 
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "StageConcert";
			Tags = array{"StageConcert"};
			SpreadResult = "StageConcertEmployeesResult";
			Radius = 800.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasNotTag.PaidForAmusement"};
					TargetScoreFormula = "Intelligence";
					SourceScoreFormula = "Target.IsEmployee * (Source.Entertainment + Motivation)";
				}
			}; 
		},
		FunctionAffectNeeds
		{
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ProductType = 5;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ProductType = 6;
			Amount = 0.01;
		}
	};
};

"StageConcertOver" = G3ActionTemplate //End of the performance
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "StageConcertOver";
	DisplayName = "$FinaleOfShow";
	Description = "$FinaleOfShowDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "StageConcertOver"; },
		};
	};
	
	EnterBuilding = "TryEnter";
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
			Amount = "75 + (Source.Entertainment * 0.75)";
			MaxTransferred = 125;
		},
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "2";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"StageConcertOver"};
			Duration = 2;
		}
	};
	SuccessResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "50 + (Source.Entertainment * 0.5)";
			MaxTransferred = 90;
		},
	};
	FailureResult =  array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = "28 + (Source.Entertainment * 0.2)";
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
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"StageConcertOver"};
			Duration = 2;
		}
	};
};

"PlayMusicBoostBusiness" = G3ActionTemplate
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 18;

	GUIData = array
	{
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsEmployee = 1;
			IsTransporter = 0;
			BelongsToOwnFamily = 1;
			Filter = "Workplace.hasTag.MinstrelTent";
		},
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Gleeman";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Gleeman" };

	ActionClassName = "SimpleExecutionAction";
	IconName = "BuyBuildingOnSale";
	ActionName = "PlayMusicBoostBusiness";
	DisplayName = "$action.MusicBoostBusiness";
	Description = "$action.MusicBoostBusinessDesc";
	Instruction = "$callToAction.BusinessNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	ShowCombatText = false;
	SourceRun = true;

	TargetTags = array{"MusicBoostBusiness", "NoFrontStore"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{	
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};

			MatchTargetTags = -3;
			CityBuilding = -3;
			ResourceProducer = -3;
			Burning = -3;
			Business = 3;
			CloseToActor = 2;
		}
	};

	CriticalFactor = 1.0;
	
	OnEndResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			ActionTarget = "Target";
			Actions = array
			{
				"PlayMusicBoostBusiness1",
				"PlayMusicBoostBusiness2",
				"PlayMusicBoostBusiness3",
				"PlayMusicBoostBusiness4",
				"PlayMusicBoostBusiness5",
				"PlayMusicBoostBusiness6",
			};
		},
	};
};

"PlayMusicBoostBusiness1" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness1";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_shawm"; },
		};
	};

	@base/MusicBoostBusiness
};

"PlayMusicBoostBusiness2" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness2";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_drum"; },
		};
	};

	@base/MusicBoostBusiness
};

"PlayMusicBoostBusiness3" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness3";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_drum2"; },
		};
	};

	@base/MusicBoostBusiness
};

"PlayMusicBoostBusiness4" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness4";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_bagpipe"; },
		};
	};

	@base/MusicBoostBusiness
};

"PlayMusicBoostBusiness5" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness5";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_fiddle"; },
		};
	};

	@base/MusicBoostBusiness
};

"PlayMusicBoostBusiness6" = G3ActionTemplate
{
	ActionName = "PlayMusicBoostBusiness6";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Name = "CollectProtectionMoney"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "gleeman_fiddle2"; },
		};
	};

	@base/MusicBoostBusiness
};