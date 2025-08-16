"RepairBuilding" = G3ActionTemplate //RepairBuilding
{
	GUIPresent = false;
	OrderIndex = 50;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsBuilding = 1;
			BelongsToOwnFamily = 1;
			BuildingIsDamaged = 1;
			CityBuilding  = 0;
			BuildingIsOnFire = 0;
			DoesNotHaveTag = "Repairing";
		}
	};
	
	ShowCombatText = false;
	
	ActionName = "RepairBuilding";
	ActionClassName = "RepairBuildingAction";
	
	DisplayName = "$action.RepairBuilding";
	Description = "$action.RepairBuildingDesc";

	CanFail = false;
	CriticalFactor = 1.0;

	OnStartResult = array
	{
		DisplayEffect
		{
			Tags = array{"Repairing"};
			ApplyTo = "Target";
			DisplayGroup = "repair";
			DisplayName = "$effect.repair";
			Duration = 0.0;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"Repairing"};
			Duration = 0;
			Recover = true;
		},
	};

	OnCancelResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Repairing"};
		},
		FunctionTrackObjectiveProgress
		{
			Filter = "Target.Health == Target.Health.max";
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		};
	};

	OnEndResult = array
	{
		FunctionTrackObjectiveProgress
		{
			Filter = "Target.Health == Target.Health.max";
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		};
	};
};

"RepairBuildingPlayer" = G3ActionTemplate //RepairBuilding player
{
	GUIPresent = true;
	OrderIndex = 50;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsBuilding = 1;
			BelongsToOwnFamily = 1;
			BuildingIsDamaged = 1;
			CityBuilding  = 0;
			BuildingIsOnFire = 0;
			DoesNotHaveTag = "Repairing";
		}
	};
	
	ShowCombatText = false;
	
	ActionName = "RepairBuildingPlayer";
	ActionClassName = "RepairBuildingAction";
	
	IconName = "RepairBuilding"
	DisplayName = "$action.RepairBuilding";
	Description = "$action.RepairBuildingDesc";

	CanFail = false;
	CriticalFactor = 1.0;

	OnStartResult = array
	{
		DisplayEffect
		{
			Tags = array{"Repairing"};
			ApplyTo = "Target";
			DisplayGroup = "repair";
			DisplayName = "$effect.repair";
			Duration = 0.0;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"Repairing"};
			Duration = 0;
			Recover = true;
		},
		FunctionEndAction // finish building
		{
			ApplyTo = "Target";
			Type = "Cancel";
		};
	};
};

"RepairBuildingCancelPlayer" = G3ActionTemplate //RepairBuilding cancel player
{
	GUIPresent = true;
	OrderIndex = 51;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsBuilding = 1;
			BelongsToOwnFamily = 1;
			BuildingIsDamaged = 1;
			CityBuilding  = 0;
			BuildingIsOnFire = 0;
			DoesHaveTag = "Repairing";
		}
	};
	
	ShowCombatText = false;
	
	ActionName = "RepairBuildingCancelPlayer";
	ActionClassName = "RepairBuildingAction";
	
	IconName = "RepairBuildingCancel"
	DisplayName = "$action.RepairBuildingCancel";
	Description = "$action.RepairBuildingDesc";

	CanFail = false;
	CriticalFactor = 1.0;

	OnStartResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Repairing"};
		},
		FunctionEndAction // finish building
		{
			ApplyTo = "Target";
			Type = "Cancel";
		};
	};
};

"AutomatedRepairAction" = G3ActionTemplate //Automated repair building with worker
{
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Stonemason", "$profession.Carpenter" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 },
		RequiredBuilding = array { "CarpenterShop", 1 }
	};

	ActionActor = "Character";
	TargetActor = "Building";

	ActionClassName = "SimpleExecutionAction";
	ActionName = "AutomatedRepairAction";
	IconName = "PowerConstructions";
	DisplayName = "$action.RepairAction";
	Description = "$action.RepairMaintenanceActionDesc";
	Instruction = "$callToAction.PlayerBusiness";

	BaseRewardXP = 5;
	CriticalFactor = 1;
	CanFail = false;

	TargetTags = array{"Repairing"};
	DesiredProfiles = array
	{
		TargetProfileBuilding // repair current building
		{
			MatchTargetTags = 3;
			IsCurrentBuilding = 3;
			Burning = -3;
			ResourceProducer = -3;
			CityBuilding = -3;

			EvaluateWhileInProgress = false;
			AutoSelect = true;
		},

		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			CloseToActor = 1;
			Burning = -3;
			ResourceProducer = -3;
			CityBuilding = -3;

			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 2;
				Alliance = 1;
				Feud = -3;
			};

			EvaluateWhileInProgress = true;
		};
	};

	OnEndResult = array
	{
		FunctionTriggerAction
		{
			Filter = "Target.hasTag.Repairing";
			ApplyTo = "Source";
			ActionTarget = "Target";
			Actions = array{"RepairAction"};
		};
		FunctionTriggerAction
		{
			Filter = "Target.hasNotTag.Repairing";
			ApplyTo = "Source";
			ActionTarget = "Source.Workplace";
			Actions = array{"GoToBuilding"};
		};
	};
};

"RepairAction" = G3ActionTemplate //Repair building with worker
{
	GUIPresent = true;
	OrderIndex = 12;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Stonemason";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		ActionGUIData // Employee in the action bar
		{
			IsCharacter = 1;
			HasProfession = "Carpenter";
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Stonemason", "$profession.Carpenter" };

	ActionActor = "Character";
	TargetActor = "Building";

	Duration = 0.01;

	ActionClassName = "SimpleExecutionAction";
	ActionName = "RepairAction";
	IconName = "PowerConstructions";
	DisplayName = "$action.RepairAction";
	Description = "$action.RepairActionDesc";
	Instruction = "$callToAction.PlayerBusiness";

	BaseRewardXP = 0;

	CanFail = false;
	CriticalFactor = 1;

	ShowCombatText = true;
	BudgetPost = "Renovation";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
			Burning = -3;
			ResourceProducer = -3;
			CityBuilding = -3;

			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 2;
			};

			AutoSelect = true;
		},

		TargetProfileBuilding
		{
			CloseToActor = 2;
			Burning = -3;
			ResourceProducer = -3;
			CityBuilding = -3;

			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 2;
			};
		};
	};

	EnterBuilding = "ForceEnter";
	SuppressBuildingEnterBehavior = true;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "HammerOnBuilding"; },
		};
	};

	OnEndResult = array
	{
		FunctionTransferMoney // pay third party
		{
			Filter = "Target.Health != Target.Health.max && !Target.BelongsToOwnFamily";
			Amount = "min(10, Target.Health.max - Target.Health) * 2";
			Giver = "Target";
			Receiver = "Source";
		},
		ModifierEffect // heal structure
		{
			Filter = "Target.Health != Target.Health.max";
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = 10;
			Duration = 0;
			Recover = false;
		},
		FunctionRemoveEffect
		{
			Filter = "Target.Health == Target.Health.max && Target.hasTag.Repairing";
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Repairing"};
		},
		FunctionEndAction // finish building
		{
			Filter = "Target.Health == Target.Health.max";
			ApplyTo = "Target";
			Type = "Finish";
		},
		FunctionTriggerAction // go back home after finishing
		{
			Filter = "Target.Health == Target.Health.max && Source.IsEmployee";
			ApplyTo = "Source";
			ActionTarget = "Source.Workplace";
			Actions = array{"GoToBuilding"};
		};
	};

	OnCancelResult = array
	{
		FunctionTriggerAction // go back home after finishing
		{
			Filter = "Source.IsEmployee";
			ApplyTo = "Source";
			ActionTarget = "Source.Workplace";
			Actions = array{"GoToBuilding"};
		};
	};
};

"AutomatedApplySlateTile" = G3ActionTemplate // search for targets // currently not used
{
	GUIPresent = false;
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Stonemason" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};

	ActionClassName = "G3Action";
	ActionName = "AutomatedApplySlateTile";
	ShowCombatText = false;

	ActionActor = "Character";
	TargetActor = "Building";

	Duration = 0.021;

	TargetTags = array{"SlateTile"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
				IsDynasty = 3;
			};
			MatchTargetTags = -3;
			CityBuilding = -3;
		}
	};

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			Filter = "Source.Workplace.hasItems.SlateTile.1";
			ApplyTo = "Source";
			ActionTarget = "Source.Workplace";
			Actions = array{"AutomatedApplySlateTile2"};
		};
	};
};

"AutomatedApplySlateTile2" = G3ActionTemplate // collect components
{
	GUIPresent = false;
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Stonemason" };

	ActionClassName = "GoToBuilding";
	ActionName = "AutomatedApplySlateTile2";

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

	SuccessResult = array
	{
		FunctionTransferItems
		{
			Filter = "Source.Workplace.hasItems.SlateTile.1";
			Giver = "Source.Workplace";
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SlateTile"};
		},
		FunctionTriggerAction
		{
			Filter = "Source.hasItems.SlateTile.1";
			ApplyTo = "Source";
			ActionTarget = "FromTargetProfile";
			Actions = array{"AutomatedApplySlateTile3"};
		};
	};
};

"AutomatedApplySlateTile3" = G3ActionTemplate // apply artefact
{
	GUIPresent = false;
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Stonemason" };

	ActionClassName = "SimpleExecutionAction";
	ActionName = "AutomatedApplySlateTile3";
	@base/SlateTile

	SuccessResult = array
	{
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"SlateTile"};
			ResultObjectIds = array{ "SlateTile" };
		},
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SlateTile.1";
			Giver = "Source";
			Receiver = "";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SlateTile"};
		},
	};

	OnEndResult = array
	{
		FunctionTriggerAction // go back home after finishing
		{
			Filter = "Source.IsEmployee";
			ApplyTo = "Source";
			ActionTarget = "Source.Workplace";
			Actions = array{"GoToBuilding"};
		};
	};
};