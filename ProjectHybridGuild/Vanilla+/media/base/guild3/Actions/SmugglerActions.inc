"LureIntoRumDen" = G3ActionTemplate //Lure people in a area to your rum den
{
	UICategory = "Rogue";
	GUIPresent = true;
	OrderIndex = 75;
	GUIData = array
	{
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsEmployee = 1;
			IsTransporter = 0;
			BelongsToOwnFamily = 1;
			Filter = "Workplace.hasTag.Smuggler";
		},
		ActionGUIData // Employee
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			HasProfession = "Smuggler";
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$profession.Smuggler" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smuggler", 1 }
	};

	ActionName = "LureIntoRumDen";
	ActionClassName = "AmbushAction";
	DisplayName = "$action.LureIntoRumDen";
	Description = "$action.LureIntoRumDenDesc";
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
			QuarterCity = 3;
			Inhabitated = 2;
			CloseToActor = 2;
			OnMainStreet = 2;
			OnStreet = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Survey", -1, -1, -1};
	};

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "jug/jug" }; };
	};
	
	MainTemplateName = "LureIntoRumDen2";

	TargetTags = array{"Towncrier", "TargetOfLureIntoRumDen", "LuredToSmuggler"};
	ThirdPartyProfiles = array
	{
		TargetProfileCharacter
		{
			MaxDistance = 1200;

			Adult = 3;
			NPC = 3;
			CloseToActor = 2;
			Boat = -3;
			Producer = -3;
			Transporter = -3;
			Henchman = -3;
			MatchTargetTags = -3;
			Employee = -3;
			NPCGuard = -3;
			IsMyVIPGuard = -3;
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"LureIntoRumDen2"};
		}
	};
};

"LureIntoRumDen2" = G3ActionTemplate //Lure people into your rum den
{
	GUIPresent = false;

	IconName = "LureIntoRumDen";
	ActionName = "LureIntoRumDen2";
	DisplayName = "$action.LureIntoRumDen";
	Description = "$action.LureIntoRumDenDesc";
	Instruction = "$callToAction.CharacterAdultNotOwnDynasty";
	ActionClassName = "SimpleExecutionAction";
	
	ActionActor = "Character";
	TargetActor = "Character";

	Duration = 0.0; // Design decided that this action should be instant with no animation
	BaseRewardXP = 25;

	SourceScoreFormula = "20 + Charisma + Stealth * 0.3 + Motivation";
	TargetScoreFormula = "Perception + Intelligence";

	CanFail = true;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.9,-0.5,0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "jug/jug" }; };
	};

	Dialogue = array {"ACTION", "d.act.LureIntoRumDen"}; // Category, id			

	OnStartResult = array
	{
		TagEffect
		{
			Tags = array{"TargetOfLureIntoRumDen"};
		},
	};

	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"TargetOfLureIntoRumDen"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Filter = "!Source.Workplace.hasTag.ServingCustomers";
			Giver = "Target";
			Receiver = "Source";
			Amount = "(Target.SocialCaste + 2) * 4";
		},
		FunctionTransferMoney
		{
			Filter = "Source.Workplace.hasTag.ServingCustomers";
			Giver = "Target";
			Receiver = "Source";
			Amount = "(Target.SocialCaste + 1) * 3";
		},
		TagEffect
		{
			Filter = "Source.Workplace.hasTag.ServingCustomers";
			ApplyTo = "Target";
			Tags = array{"LuredToSmuggler"};
			Duration = 0.25;
		},
		FunctionTriggerAction
		{
			Filter = "Source.Workplace.hasTag.ServingCustomers";
			ApplyTo = "Target";
			Actions = array{"GetSpeakeasyService"};
			ActionTarget = "Source.Workplace";
		}
	};
};

"SmuggleRum" = G3ActionTemplate //Smuggle rum
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 76;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Smuggler";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Smuggler" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smuggler", 1 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Source.Stealth * 0.25 + Source.DoesHaveTag.SmugglerBuff1 + Source.DoesHaveTag.SmugglerBuff2 + Source.DoesHaveTag.SmugglerBuff3";
	TargetScoreFormula = "1";

	ActionName = "SmuggleRum";
	DisplayName = "$action.SmuggleRum";
	Description = "$action.SmuggleRumDesc";
	Instruction = "$callToAction.BuildingSmuggle";

	Duration = 0.04125; //1/12
	Cooldown = 0.0; //1/24
	BaseRewardXP = 25;

	CanFail = true;
	ShowCombatText = false;
	
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,-0.2,0.5};
	};
	
	ReturnAndDropAllOnAutomation = true;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingSmuggle";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingSmuggle";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Arsenal", "Port"};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Smuggle"; Inside = -3; IsFree = 3; },
		};
	};
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 15;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 2;
			MaxAmount = 4;
			SpecificItems = array{"Rum"};
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 0;
			MaxAmount = 1;
			SpecificItems = array{"Juice", "Cider", "RoseWater", "Alcohol"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	FailureResult = array
	{
		FunctionTransferMoney
		{
			Amount = 10;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Rum"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
};

"Smuggle" = G3ActionTemplate //Smuggle goods
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 77;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Smuggler";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Smuggler" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smuggler", 2 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Source.Stealth * 0.2 + Source.DoesHaveTag.SmugglerBuff1 + Source.DoesHaveTag.SmugglerBuff2 + Source.DoesHaveTag.SmugglerBuff3";
	TargetScoreFormula = "1";

	ActionName = "Smuggle";
	DisplayName = "$action.Smuggle";
	Description = "$action.SmuggleDesc";
	Instruction = "$callToAction.BuildingSmuggle";

	Duration = 0.0425; //1/24
	Cooldown = 0.0;
	BaseRewardXP = 50;

	CanFail = true;
	ShowCombatText = false;
	
	MoralAlignmentShift = 0.07;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.8,0,0};
	};
	
	ReturnAndDropAllOnAutomation = true;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingSmuggle";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingSmuggle";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Arsenal", "Port"};
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Smuggle"; Inside = -3; IsFree = 3; },
		};
	};
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CriticalFactor = 0.985;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 30;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Poem", "PestAway", "Gingerbread", "Painting", "GoldChain", "Rapier", "ShortSword"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 20;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Cider", "WoodenShield", "RoseWater", "MuralPainting", "WalkingStick", "EndurenceDrink"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	FailureResult = array
	{
		FunctionTransferMoney
		{
			Amount = 10;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 2;
			SpecificItems = array{"Iron", "Silver", "BoneDust", "JasmineOil", "Wheat", "Nails", "Leather", "Parchment"};
		},
	};
	
	CriticalFailureResult = array
	{
		FunctionKill
		{
			ApplyTo = "Source";
		}
	};
};

"Contraband" = G3ActionTemplate //Contraband trade
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 78;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Smuggler";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Smuggler" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smuggler", 3 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Source.Stealth * 0.2 + Source.DoesHaveTag.SmugglerBuff1 + Source.DoesHaveTag.SmugglerBuff2 + Source.DoesHaveTag.SmugglerBuff3";
	TargetScoreFormula = "1";

	ActionName = "Contraband";
	DisplayName = "$action.Contraband";
	Description = "$action.ContrabandDesc";
	Instruction = "$callToAction.BuildingSmuggle";

	Duration = 0.12425; //1/12
	Cooldown = 0.0; //1/24
	BaseRewardXP = 66;

	CanFail = true;
	ShowCombatText = false;
	
	ReturnAndDropAllOnAutomation = true;
	
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,-0.2,0};
	};
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingSmuggle";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingSmuggle";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Arsenal", "Port"};
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Smuggle"; Inside = -3; IsFree = 3; },
		};
	};
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CriticalFactor = 0.975;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 120;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
//			SpecificItems = array{"Amber", "Amber", "Salt", "Salt", "Wine", "Wine", "Wine", "Tobacco", "Tobacco", "Pepper", "Pepper", "Brocade", "Ivory", "Pearl", "Porcelain", "Porcelain", "Porcelain", "Purple", "Silk"};
			SpecificItems = array{"Amber", "Salt", "Wine", "Tobacco", "Pepper", "Brocade", "Ivory", "Pearl", "Porcelain", "Purple", "Silk"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Amount = 70;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 2;
			SpecificItems = array{"Wine", "Salt", "Amber", "Cider", "WoodenShield", "RoseWater", "MuralPainting", "WalkingStick", "EndurenceDrink"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	FailureResult = array
	{
		FunctionTransferMoney
		{
			Amount = 25;
			Giver = "Source";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 4;
			MaxAmount = 6;
			SpecificItems = array{"Iron", "Silver", "BoneDust", "JasmineOil", "Wheat", "Nails", "Leather", "Parchment"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman && !IsEmployee";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
	};
	
	CriticalFailureResult = array
	{
		FunctionKill
		{
			ApplyTo = "Source";
		}
	};
};