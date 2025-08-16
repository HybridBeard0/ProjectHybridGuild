"SendToJail" = G3ActionTemplate // Action used by the JailUtil to make someone walk to their prison cell for incarceration.
{
	ActionName = "SendToJail";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.SendToJail";
	Description = "$action.SendToJailDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	
	CanBeCancelled = false;
	RestartAfterUnconsciousness = true;
	CanFail = false;
	SourceRun = false;
	
	EnterBuilding = "ForceEnter";
	
	GUIPresent = false;
	GUIData = array {
		ActionGUIData {
			IsUnlockedAction = -1;
		},
	};
	
	DesiredProfiles = array {
		TargetProfileBuilding {
			IncludedTypes = array{ "Arsenal" };
		},
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;
		Profiles = array {
			TargetProfileSnapPoint {
				Context = "EnterOutside";
				Inside = 3;
			},
		};
	};

	OnStartResult = array {
		VIPProtectionEffect {
			ApplyTo = "Source";
			Tags = array{ "PrisonEscort" };
			GuardsPerCharacter = 2;
			GuardsPerResidence = 0;
			GuardSpawnLocation = "AtTownHall";
		},
		FunctionChangeCharacterState {
			ApplyTo = "Source";
			State = "JailPrisoner";
		},
	};

	OnEndResult = array {
		FunctionRemoveEffect {
			ApplyTo = "Source";
			Tags = array{ "PrisonEscort" };
		},
		FunctionChangeCharacterState {
			ApplyTo = "Source";
		},
	};
	
	OnPostFinishResult = array {
		FunctionJailCharacter {
			ApplyTo = "Source";
		},
	};
};
// Prisoner life actions follow
// Important in ActionGUIData:
// - CharacterPrisoner = 1; This is a must, as by default, prisoners are excluded from performing actions.
// - DoesHaveTag = "InPrisonCell"; This also is a must have, as only prisoners currently in a cell should perform the idle actions. Those in overflow shouldn't (and they don't have this tag)
// Also important for TargetSnapPoint:
// - MatchesAnySourceTag = 3; This ensures that the prisoner will only interact with snap points within their own cell, as both the snap points and the prisoner get a cell id assigned.
"Prisoner-Overflow" = G3ActionTemplate // This is the only action that overflow prisoners execute. It does nothing, just makes them busy and shows an icon + tooltip.
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			CharacterPrisoner = 1; // By default, prisoners can't execute actions - explicitly allow them here.
			DoesNotHaveTag = "InPrisonCell"; // This is only for the overflow prisoners, which DON'T have this tag.
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Prisoner-Overflow";
	DisplayName = "$action.Prisoner-Bored";
	Description = "$action.Prisoner-BoredDesc";
	IconName = "PrisonLifeActions";

	ActionActor = "Character";
	TargetActor = "Self";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	
	Duration = 0.1;
};

"Prisoner-Bored" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			CharacterPrisoner = 1; // By default, prisoners can't execute actions - explicitly allow them here.
			DoesHaveTag = "InPrisonCell"; // Only prisoners visible in their cell should do prison idle actions. They all have this tag.
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Prisoner-Bored";
	DisplayName = "$action.Prisoner-Bored";
	Description = "$action.Prisoner-BoredDesc";
	IconName = "PrisonLifeActions";

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
			TargetProfileSnapPoint{ Context = "Prisoner-Bored"; MatchesAnySourceTag = 3; },
		};
	};
	SuccessResult = array
	{
		// No XP for prisoners when being bored.
	};
};

"Prisoner-Sit" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			CharacterPrisoner = 1;
			DoesHaveTag = "InPrisonCell";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Prisoner-Sit";
	ActionActor = "Character";
	TargetActor = "Building";
	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";
	DisplayName = "$NPC.Sitting";
	Description = "$NPC.SittingDesc";
	IconName = "PrisonLifeActions";
	
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
			TargetProfileSnapPoint{ Context = "SitOnBench"; IsReachable = 3; },
		};
	};
};

"Prisoner-Complain" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsUnlockedAction = -1;
			CharacterPrisoner = 1; // By default, prisoners can't execute actions - explicitly allow them here.
			DoesHaveTag = "InPrisonCell"; // Only prisoners visible in their cell should do prison idle actions. They all have this tag.
			DoesNotHaveTag = "AlreadyComplained";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Prisoner-Complain";
	DisplayName = "$action.Prisoner-Bored";
	Description = "$action.Prisoner-BoredDesc";
	IconName = "PrisonLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "1";

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
			TargetProfileSnapPoint{ Context = "Prisoner-Complain"; MatchesAnySourceTag = 3; },
		};
	};
	SuccessResult = array
	{
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "PrisonerComplain";
			SpreadResult = "AffectJailor";
			Radius = 500.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"hasTag.Jailor", "hasNotTag.JailorNoThreatening"};
					TargetScoreFormula = "0";
				}
			}; 
		},
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"AlreadyComplained"};
			Duration = 75.0;
		},
	};
};
