"TransferBaseToCity" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 300;
			
	GUIData = array
	{
		ActionGUIData
		{
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsPartyMember = 1;
			IsControlledByHuman = 1; //AI only (human players trigger it from a custom UI instead of from the ActionBar)
		},
	};	
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "TransferBaseToCity";
	IconName = "NPCTalk";
	DisplayName = "$NPC.Conversation";
	Description = "$NPC.ConversationDesc";

	Duration = 0.001f;

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	IsAggression = false;
	EnterBuilding = "TryEnter";
	ShowCombatText = false;
	
	CanFail = false;
	BudgetPot = "Unlocks";	
	
	TargetTags = array{"Receptionist"};

ShowSelectionPrompt = "Receptionist";
	SelectionPromptNoTargetMessage = "$gui.no.office.holders";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsTargetable = 0;
			MatchTargetTags = 3;
			InsideBuildingWithMe = 2;
			AutoSelect = true;
		},
	};
	
	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionTransferBuilding
		{
			Giver = "Self";
			Receiver = "";
		}
	};
};