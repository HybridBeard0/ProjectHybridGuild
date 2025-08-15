"NPCOfferTalkQuest" = G3ActionTemplate
{
	GUIPresent = false;
	ActionClassName = "NPCOfferTalkQuest";
	ActionName = "NPCOfferTalkQuest";
	ActionActor = "Character";			
	ShowCombatText = false;
	SourceRun = false;
	CanFail = false;
	AskConfirmationOnCancel = false;
	
	Duration = 0.150;
	InteractionPriority = 1;
	
	GUIData = array
	{
		@base/AllNeutralNPCs
	};
		
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	}; 

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	// Leaving out the second parameter, i.e. dialogueId, will choose one in the NPCDialogueQuestLookup.oc by probability 
	Dialogue = array { "QUEST_TALK", " " };
};