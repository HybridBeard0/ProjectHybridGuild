"AssignFamilyMemberAsTransporter" = G3ActionTemplate
{
	GUIPresent = true;
	OrderIndex = 25;

	ActionName = "AssignFamilyMemberAsTransporter";
	ActionClassName = "HireFamilyMemberAsTransporterAction";
	
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsBusiness = 1;
			CityBuilding = 0;
			CanHaveTransporters = 1;
			DoesNotHaveTag = "BuildingNoActions";
		},
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsResourceProducer = 1;
			CanHaveTransporters = 1;
			DoesNotHaveTag = "BuildingNoActions";
		},
	};

	TargetActor = "Character";
	
	ShowCombatText = false;
	
	DisplayName = "$action.HireFamilyMemberAsTransporter";
	Description = "$action.HireFamilyMemberAsTransporterDesc";
	Instruction = "$callToAction.PickAFamilyMember";

	SelectionPromptCallToAction = "$callToAction.PickAFamilyMember";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoAvailableFamilyMembers";
				
	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Producer = -3;
			Transporter = -3;
			Henchman = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};
};

"HireFamilyMember" = G3ActionTemplate
{
	GUIPresent = true;
	OrderIndex = 15;

	ActionName = "HireFamilyMember";
	ActionClassName = "HireFamilyMemberAction";
	
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsBuilding = 1;
			CityBuilding = 0;
			DoesNotHaveTag = "NoWorkers";
		},
	};

	TargetActor = "Character";
	
	ShowCombatText = false;
	
	DisplayName = "$action.HireFamilyMember";
	Description = "$action.HireFamilyMemberDesc";
	Instruction = "$callToAction.PickAFamilyMember";

	SelectionPromptCallToAction = "$callToAction.PickAFamilyMember";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoAvailableFamilyMembers";
				
	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Producer = -3;
			Transporter = -3;
			Henchman = -3;
			Adult = 3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
		TargetProfileCharacter
		{
			Producer = -3;
			Transporter = -3;
			Henchman = -3;
			SourceIsResidentialBuilding = 3; // In residential buildings, (non-toddler) children can be hired as well.
			Toddler = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};
};

"HireTransporter" = G3ActionTemplate
{
	GUIPresent = true;
	OrderIndex = 20;

	ActionName = "HireTransporter";
	ActionClassName = "HireTransporter";
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsBusiness = 1;
			CanHaveTransporters = 1;
			DoesNotHaveTag = "BuildingNoActions";
		},
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsResourceProducer = 1;
			CanHaveTransporters = 1;
			DoesNotHaveTag = "BuildingNoActions";
		},
	};

	ShowCombatText = false;
	
	DisplayName = "$action.HireTransporter";
	Description = "$action.HireTransporterDesc";

	PriceFormula = "(((850 * hasTag.IsLowTier) + (950 * hasTag.IsHighTier)) * hasTag.BuffEasy) + (((900 * hasTag.IsLowTier) + (1050 * hasTag.IsHighTier)) * hasTag.BuffNormal) + (((1000 * hasTag.IsLowTier) + (1200 * hasTag.IsHighTier)) * hasTag.BuffHard) + (((1100 * hasTag.IsLowTier) + (1350 * hasTag.IsHighTier)) * hasTag.BuffImpossible)";
//	PriceFormula = "200";

	BudgetPost = "Employees";
	BudgetPot = "Business";
	
	CanFail = false;
				
	SuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 5;
		}
	};
};

"PauseWorking" = G3ActionTemplate
{
	// This is a 'fake' action that will not actually be executed. The parameters are still important however, since they regulate when the action is available in the UI.
	ActionName = "PauseWorking";
	ActionClassName = "PauseWorkingAction";
				
	GUIPresent = true;
	OrderIndex = 15;
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsTransporter = 1;
			IsWorking = 1;
		},
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsProducer = 1;
			IsWorking = 1;
		},
	};

	ShowCombatText = false;
	
	DisplayName = "$action.PauseWorking";
	Description = "$action.PauseWorkingDesc";
	
	CanFail = false;
};

"ResumeWorking" = G3ActionTemplate
{
	// This is a 'fake' action that will not actually be executed. The parameters are still important however, since they regulate when the action is available in the UI.
	ActionName = "ResumeWorking";
	ActionClassName = "ResumeWorkingAction";
				
	GUIPresent = true;
	OrderIndex = 16;
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsProducer = 1;
			IsWorking = 0;
		},
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsTransporter = 1;
			IsWorking = 0;
		},
	};

	ShowCombatText = false;
	
	DisplayName = "$action.ResumeWorking";
	Description = "$action.ResumeWorkingDesc";
	
	CanFail = false;
};


"HireEmployee" = G3ActionTemplate
{
	GUIPresent = true;
	OrderIndex = 10;
	
	ActionName = "HireEmployee";
	ActionClassName = "HireAction";
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsBusiness = 1;
			DoesNotHaveTag = "NoWorkers";
		},
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsResourceProducer = 1;
			DoesNotHaveTag = "BuildingNoActions";
		},
	};

	ShowCombatText = false;
	
	DisplayName = "$action.HireEmployee";
	Description = "$action.HireEmployeeDesc";

	PriceFormula = "(((850 * hasTag.IsLowTier) + (950 * hasTag.IsHighTier)) * hasTag.BuffEasy) + (((900 * hasTag.IsLowTier) + (1050 * hasTag.IsHighTier)) * hasTag.BuffNormal) + (((1000 * hasTag.IsLowTier) + (1200 * hasTag.IsHighTier)) * hasTag.BuffHard) + (((1100 * hasTag.IsLowTier) + (1250 * hasTag.IsHighTier)) * hasTag.BuffImpossible)";
	
	BudgetPost = "Employees";
	BudgetPot = "Business";
	
	CanFail = false;

	SuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 5;
		}
	};
};