"Priest-Idle" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Priest";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Priest-Idle";
	DisplayName = "$action.PriestLifeAction";
	Description = "$action.PriestLifeActionDesc";
	IconName = "PriestLifeActions";

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
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Priest-Idle"; },
		};
	};
	SuccessResult = array
	{
	};
};

"Priest-Cleaning" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Priest";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Priest-Cleaning";
	DisplayName = "$action.PriestLifeAction";
	Description = "$action.PriestLifeActionDesc";
	IconName = "PriestLifeActions";

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
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Priest-Cleaning"; },
		};
	};
	SuccessResult = array
	{
	};
};

"Priest-Praying" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesHaveTag = "Priest";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Priest-Praying";
	DisplayName = "$action.PriestLifeAction";
	Description = "$action.PriestLifeActionDesc";
	IconName = "PriestLifeActions";

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
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Priest-Praying"; },
		};
	};
	SuccessResult = array
	{
	};
};
