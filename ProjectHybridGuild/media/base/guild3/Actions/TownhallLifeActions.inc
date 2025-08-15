"Receptionist-Idle" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Receptionist";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Receptionist-Idle";
	DisplayName = "$action.Receptionist-Life";
	Description = "$action.Receptionist-LifeDesc";
	IconName = "ReceptionistLifeActions";

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
			TargetProfileSnapPoint{ Context = "Receptionist-Idle"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Receptionist-Bored" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Receptionist";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Receptionist-Bored";
	DisplayName = "$action.Receptionist-Life";
	Description = "$action.Receptionist-LifeDesc";
	IconName = "ReceptionistLifeActions";

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
			TargetProfileSnapPoint{ Context = "Receptionist-Bored"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Receptionist-Work" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Receptionist";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Receptionist-Work";
	DisplayName = "$action.Receptionist-Life";
	Description = "$action.Receptionist-LifeDesc";
	IconName = "ReceptionistLifeActions";

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
			TargetProfileSnapPoint{ Context = "Receptionist-Work"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Receptionist-Sleepy" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Receptionist";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Receptionist-Sleepy";
	DisplayName = "$action.Receptionist-Life";
	Description = "$action.Receptionist-LifeDesc";
	IconName = "ReceptionistLifeActions";

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
			TargetProfileSnapPoint{ Context = "Receptionist-Sleepy"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Towncrier-Idle" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Towncrier";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Towncrier-Idle";
	DisplayName = "$action.Towncrier-Life";
	Description = "$action.Towncrier-LifeDesc";
	IconName = "TowncrierLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;
	IsIdle = true;

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
			TargetProfileSnapPoint{ Context = "Towncrier-Idle"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};

"Towncrier-Roaming" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Towncrier";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Towncrier-Roaming";
	DisplayName = "$action.Towncrier-Life";
	Description = "$action.Towncrier-LifeDesc";
	IconName = "TowncrierLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;
	IsIdle = true;

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
			TargetProfileSnapPoint{ Context = "LookAtWall"; Inside = 3; IsFree = 3; },
		};
	};
	SuccessResult = array
	{
	};
};
