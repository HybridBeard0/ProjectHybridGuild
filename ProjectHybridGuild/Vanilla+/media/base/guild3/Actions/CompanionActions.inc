"HatchChicken" = G3ActionTemplate
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "HatchChicken";
	ArtefactName = "EggBasket";
	DisplayName = "$action.HatchChicken";
	Description = "$action.HatchChickenDesc";
	
	ActionActor = "Character";
	EnterBuilding = "TryEnter";
		
	SourceScoreFormula = "Intelligence";
	TargetScoreFormula = "8";
	
	Cooldown = 0.02;
	BaseRewardXP = 5;
	
	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"ReapHerbs", 0, -1, -1};
	};
	
	CanFail = true;
	
	CriticalFactor = 1.0;
		
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ChickenCompanion"};
		}
	};
	FailureResult = array
	{
	};
};

"TrainRat" = G3ActionTemplate //Train a rat
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "TrainRat";
	ArtefactName = "Rat";
	DisplayName = "$TrainRat";
	Description = "$TrainRatDesc";
	
	ActionActor = "Character";
	EnterBuilding = "TryEnter";
		
	SourceScoreFormula = "Charisma + Intelligence";
	TargetScoreFormula = "1";
	
	Cooldown = 0.025;
	BaseRewardXP = 25;
	
	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"ReapHerbs", 0, -1, -1};
	};
	
	CanFail = true;
	
	CriticalFactor = 1.0;
		
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RatCompanion"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			CheckSourceProfile = false;
			ApplyTo = "Source";
			Actions = array{"NPCEquipRatCompanion"};
		}
	};
	FailureResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -10;
			Recover = false;
		}
	};
};