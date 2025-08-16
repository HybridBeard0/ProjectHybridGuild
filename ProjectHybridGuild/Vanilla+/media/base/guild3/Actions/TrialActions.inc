"GoToCourt" = G3ActionTemplate {
	ActionName = "GoToCourt";
	ActionClassName = "GoToBuilding";
	GUIPresent = false;
	ShowCombatText = false;

	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$action.GoToCourt";
	Description = "$action.GoToCourtDesc";
	
	EnterBuilding = "TryEnter";

	CanFail = false;
	AskConfirmationOnCancel = false;
	RestartAfterUnconsciousness = true;
	
	CriticalFactor = 1.0;
	
	OnStartResult = array {
		FunctionSendMessage {
			ApplyTo = "Source";
			Description = "CharacterGoToCourt";
		},		
	};
	
	SuccessResult = array {
        FunctionTriggerAction {
            ApplyTo = "Source";
			CheckSourceProfile = false;
			ActionTarget = "FromTargetProfile";
            Actions = array{ "WaitForTrial" };
        },
	};
};
"WaitForTrial" = G3ActionTemplate {
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "WaitForTrial";
	DisplayName = "$action.WaitForTrial";
	Description = "$action.WaitForTrialDesc";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	Duration = 0.1; // About 2.4 hours.
};