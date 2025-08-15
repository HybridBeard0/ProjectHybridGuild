// This is just for debugging purposes and will start two characters talking to each other.
// Add it to GameplayDefaults.oc as an unlocked action so that everyone can use it.
"StartConversation" = G3ActionTemplate
{
//	UICategory = "Urgent";
	OrderIndex = 1;
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "StartConversation";
	DisplayName = "$StartConversation";
	Description = "$StartConversationDesc";
	Instruction = "$callToAction.CharacterAdultNotOwnDynasty";

	Duration = 0.001f;
	BaseRewardXP = 56;

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	IsImmediatelyKnownByTarget = false;
	IsAggression = false;
	ReturnAndDropAllOnAutomation = false;
	EnterBuilding = "TryEnter";
	
	CanFail = true;	
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	}; 

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			Boat = -3;
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
				TargetProfileBuilding // inside my residence
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						MyFamily = 3;
					};
				},
				TargetProfileBuilding // inside the residence of an ally
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						Alliance = 3;
					};
				},
				TargetProfileBuilding // inside a city building
				{
					IncludedTypes = array{"Cityhall", "Church", "cathedrale", "Arsenal"};
				},
			};
		}
	};
	
	CriticalFactor = 1.0;
	
	Dialogue = array {"ACTION", "D_Act_StartRomance"}; // Category, id
};

"TalkToPriest" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = false;
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "TalkToPriest";
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
	
	TargetTags = array{"Priest"};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsTargetable = 0; // Unlike most actions, TalkToPriest can be executed on untargetable characters (but we require the "Priest" tag on the character)
			MatchTargetTags = 3;
			InsideBuildingWithMe = 2;
		}
	};
	
	CriticalFactor = 1.0;
	
	Dialogue = array {"ACTION", "d.act.TalkToPriest"}; // Category, id
};

"TalkToMoA" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = false;
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "TalkToMoA";
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
	
	TargetTags = array{"MoA"};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsTargetable = 0;
			MatchTargetTags = 3;
			InsideBuildingWithMe = 2;
		}
	};
	
	CriticalFactor = 1.0;
	
	Dialogue = array {"ACTION", "d.act.TalkToMoA"}; // Category, id
};

"TalkToJailor" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = false;
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "TalkToJailor";
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
	
	TargetTags = array{"Jailor"};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsTargetable = 0;
			MatchTargetTags = 3;
			InsideBuildingWithMe = 2;
		}
	};
	
	CriticalFactor = 1.0;
	
	Dialogue = array {"ACTION", "d.act.TalkToJailor"}; // Category, id
};

"TalkToReceptionist" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";
	GUIPresent = false;
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "TalkToReceptionist";
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
	
	TargetTags = array{"Receptionist"};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsTargetable = 0;
			MatchTargetTags = 3;
			InsideBuildingWithMe = 2;
		}
	};
	
	CriticalFactor = 1.0;
	
	Dialogue = array {"ACTION", "d.act.TalkToReceptionist"}; // Category, id
};
