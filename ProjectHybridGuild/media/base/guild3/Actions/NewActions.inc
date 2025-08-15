"AiUnlockNobilityRankTitle" = G3ActionTemplate
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
			IsControlledByHuman = 0; //AI only (human players trigger it from a custom UI instead of from the ActionBar)
		},
	};	
	
	ActionActor = "Character";
	TargetActor = "Character";

	ActionName = "AiUnlockNobilityRankTitle";
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
		FunctionUnlockNobilityTitle
		{
			ApplyTo = "Source";
			PriceMultiplier = 0.075; // 1.0 is 100% cost
		}
	};
};

"GiftOfficeHolder" = G3ActionTemplate //copyright Steve
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 103;

	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "GiftOfficeHolder";
	DisplayName = "$action.GiftOfficeHolder";
	Description = "$action.GiftOfficeHolderDesc";
	Instruction = "$callToAction.CharacterOfficeHolder";

	ActionActor = "Character";
	TargetActor = "Character";
	
	BaseRewardXP = 100;
	BaseRewardPrestige = 25;
	
	PriceFormula = "150",
	
	CooldownFamilyWide = true;
	Cooldown = 0.30;
	SourceRun = true;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CanFail = true;
	
	ShowSelectionPrompt = "OfficeHolders";
	SelectionPromptNoTargetMessage = "$gui.no.office.holders";
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.4,0.3};
	};

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			CloseToActor = 3;
			OfficeHolder = 3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
		},
	};
	
	Dialogue = array{ "ACTION", "d.act.GiftOfficeHolder" };	
};

"GiftingSomeone" = G3ActionTemplate
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 99;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionName = "GiftingSomeone";

	DisplayName = "$action.GiftingSomeone";
	Description = "$action.GiftingSomeoneDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ActionActor = "Character";
	TargetActor = "Character";
	
	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	Cooldown = 0.03; //~10sec

	BudgetPot = "Expansion";
	BudgetPost = "Family";
	CanFail = false;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
    };

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3;
			PartyMember = -2;
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
			HighRomanticScore = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
		};
	}; 
	
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
		
    Dialogue = array{ "ACTION", "d.act.GiftingSomeone" };	
};

"ForcedMarriage" = G3ActionTemplate
{
    GUIPresent = true;
    UICategory = "Romance";
    OrderIndex = 100;

    ActionClassName = "SimpleExecutionAction";
    GUIData = array
    {
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 0;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
		}
    };
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };
	
    ActionName = "ForcedMarriage";
    DisplayName = "$action.ForcedMarriage";
    Description = "$action.ForcedMarriageDesc";
    Instruction = "$callToAction.StartRomance";
    ActionActor = "Character";
    TargetActor = "Character";
    
	EnterBuilding = "TryEnter";
    SuppressBuildingEnterBehavior = true;
    
    Cooldown = 0.015;
    
	PriceFormula = "(SocialLevel + 25) * 1.5 * ((25 * hasTag.BuffEasy) + (50 * hasTag.BuffNormal) + (100 * hasTag.BuffHard) + (150 * hasTag.BuffImpossible))";

	BudgetPot = "Expansion";
	BudgetPost = "Family";
	CanFail = false;

    MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,-0.1,0};
    };
        
    ShowSelectionPrompt = "NonRomanceCharacters";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoValidCharacter";
    
    DistanceFromTarget = 35;
    DistanceFromTargetMin = 35;
	
 	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			CloseToActor = 3;
			OppositeGender = 3;
			DynastyMember = -3; 
            	SimilarSocialStandingToMine = 3;
			NPCGuard = -3;
			Leader = -3
			Employee = -3;
			Married = -3;
			IsEngaged = -3;
			InLoveWithMe = 2;
			HighRomanticScore = 2;
			BloodlineRelated = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
	SuccessResult = array
	{
		FunctionCreateRomanceWithTarget
		{
			// no person
		},
		FunctionCreateEngagementWithTarget
		{
			// no person
		},
		FunctionMarryTarget
		{
			ApplyTo = "Source";
			Target = "Target";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "ForcedMarriage";
		}
	};
};

"EngagementRing" = G3ActionTemplate
{
	GUIPresent = false;
	UICategory = "Romance";
	OrderIndex = 1010;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionName = "EngagementRing";
	DisplayName = "$action.EngageRing";
	Description = "$action.EngageRingDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character"; 
 
	BudgetPot = "Expansion";
	BudgetPost = "Family";
	CanFail = false;		

	BaseRewardXP = 150;
	PriceFormula = "1250";
	Cooldown = 0.07;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 5 + Charisma + Target.DoesHaveTag.RomPrefCloseApproach";
	TargetScoreFormula = "Intelligence + (100 - RelationshipScore) / 50";       

	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3;
			PartyMember = -2;
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
			HighRomanticScore = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
    };

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"dialog_bribe", 5, 51, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
			
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "30";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.Artist", "RomPref.MoreDistance", "RomPref.ContraryGoodBehavior"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		}
	};
};

"LovingStone" = G3ActionTemplate
{
	GUIPresent = false;
	UICategory = "Romance";
	OrderIndex = 999;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionName = "LovingStone";
	DisplayName = "$action.LovingStone";
	Description = "$action.LovingStoneDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character"; 
 
	BudgetPot = "Expansion";
	BudgetPost = "Family";
	CanFail = false;		

	BaseRewardXP = 25;
	PriceFormula = "250";
	Cooldown = 0.03;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 5 + Charisma + Target.DoesHaveTag.RomPrefCloseApproach";
	TargetScoreFormula = "Intelligence + (100 - RelationshipScore) / 50";       

	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3;
			PartyMember = -2;
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
			HighRomanticScore = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
    };

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"dialog_bribe", 5, 51, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
			
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "5";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.Artist", "RomPref.MoreDistance", "RomPref.ContraryGoodBehavior"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		}
	};
};

"GiftingSocks" = G3ActionTemplate
{
	GUIPresent = false;
	UICategory = "Romance";
	OrderIndex = 1000;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionName = "GiftingSocks";
	DisplayName = "$action.GiftingSocks";
	Description = "$action.GiftingSocksDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character"; 
 
	BudgetPot = "Expansion";
	BudgetPost = "Family"
	CanFail = false;		

	BaseRewardXP = 75;
	PriceFormula = "750";
	Cooldown = 0.055;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 5 + Charisma + Target.DoesHaveTag.RomPrefCloseApproach";
	TargetScoreFormula = "Intelligence + (100 - RelationshipScore) / 50";       

	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3;
			PartyMember = -2;
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
			HighRomanticScore = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
			};
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
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
    };

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"dialog_bribe", 5, 51, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
			
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "15";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.Artist", "RomPref.MoreDistance", "RomPref.ContraryGoodBehavior"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"NPCDynRandomFollowUpShort"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		}
	};
};

"Divorce" = G3ActionTemplate //Kiss within marriage
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 101;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionName = "Divorce";
	DisplayName = "$action.Divorce";
	Description = "$action.DivorceDesc";
	Instruction = "$callToAction.OwnSpouse";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = false;			
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	PriceFormula = "(SocialLevel + 8) * 2 * ((10 * hasTag.BuffEasy) + (20 * hasTag.BuffNormal) + (40 * hasTag.BuffHard) + (80 * hasTag.BuffImpossible))";
	Cooldown = 3.0;
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnSpouse";
	SelectionPromptNoTargetMessage = "$callToAction.OwnSpouse.PromptNoTarget";
	
	TargetTags = array{"Marriage"};

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			MarriedWithMe = 3;
			MatchTargetTags = -3;
			AutoSelect = true;
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
		},
	};
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,-0.5,0};
	};

	Duration = 0.0025;
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};

	CriticalFactor = 1.0f;

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Divorced"};
			ApplyTo = "Self";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.divorced";
			Duration = 2000;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{ "Divorced" };
			ActorValue = "Fertility";
			Mod = -0.75;
			Duration = 2000;
			Recover = true
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{ "Divorced" };
			ActorValue = "Charisma";
			Mod = -5;
			Duration = 2000;
			Recover = true
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{ "Divorced" };
			ActorValue = "Perception";
			Mod = -5;
			Duration = 2000;
			Recover = true
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{ "Divorced" };
			ActorValue = "Intelligence";
			Mod = -5;
			Duration = 2000;
			Recover = true
		},
		FunctionKill
		{

			ApplyTo = "Target";
			Killer = "";

		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-10";
			AffectTargetEnemies = "-10";
			AffectTargetSocietyMembers = "-10";
			AffectTargetAlliedSocietyMembers = "-10";
			AffectTargetEnemySocietyMembers = "-10";
			AffectCurrentNeighborhoodToSource = "-10";
		},
	};
};