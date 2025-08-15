"CookSmokedPerch" = G3ActionTemplate //Go fishing
{
	GUIPresent = true;
	UICategory = "Artifact";
	OrderIndex = 25;
	ActionClassName = "UseArtefactAction";
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Building";

	IconName = "DeliciousCookedPerch";

	SourceScoreFormula = "1.5 + Source.Luck";
	TargetScoreFormula = "1.0 + (0.2 * Source.BadLuck)";

	ActionName = "CookSmokedPerch";
	DisplayName = "$CookSmokedPerch.iron.name";
	Description = "$CookSmokedPerch.iron.desc";
	Instruction = "$callToAction.PickAFishingSpot";

	Duration = 0.0083;
	BaseRewardXP = 25;
	CanFail = true;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.PickAFisherHut.iron";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFishingHut.iron";
	HideSelectionPromptCancelButton = true;
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{

			CloseToActor = 2;
			IncludedTypes = array{"FishingHut"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		}
	};

	EnterBuilding = "TryEnter";
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DeliciousCookedPerch"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCSellAllAtMarketpace"};
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	FailureResult = array
	{
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};