// Arsenal life actions for MoA and for Jailor
"MoA-Idle" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "MoA";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "MoA-Idle";
	DisplayName = "$action.MoA-Busy";
	Description = "$action.MoA-BusyDesc";
	IconName = "MoALifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "MoA-Idle"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"MoA-Scanning" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "MoA";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "MoA-Scanning";
	DisplayName = "$action.MoA-Busy";
	Description = "$action.MoA-BusyDesc";
	IconName = "MoALifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "MoA-Scanning"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"MoA-WeaponCare" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "MoA";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "MoA-WeaponCare";
	DisplayName = "$action.MoA-Busy";
	Description = "$action.MoA-BusyDesc";
	IconName = "MoALifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "MoA-WeaponCare"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Jailor-ReactToPrisoner" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "JailorGoingToThreaten";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Jailor-ReactToPrisoner";
	DisplayName = "$action.Jailor-Bored";
	Description = "$action.Jailor-BoredDesc";
	IconName = "JailorLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"jailorthreatens", 0, -1, -1};
	};

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"JailorNoThreatening"};
			Duration = 33.0;
		},
	};

	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"JailorGoingToThreaten"};
		},
	};
};

"Jailor-Bored" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Jailor";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Jailor-Bored";
	DisplayName = "$action.Jailor-Bored";
	Description = "$action.Jailor-BoredDesc";
	IconName = "JailorLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Jailor-Bored"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Jailor-WeaponCare" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Jailor";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Jailor-WeaponCare";
	DisplayName = "$action.Jailor-Bored";
	Description = "$action.Jailor-BoredDesc";
	IconName = "JailorLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Jailor-WeaponCare"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};
