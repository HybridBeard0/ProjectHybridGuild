"StartRomance" = G3ActionTemplate //Embark on a romance
{
    GUIPresent = true;
    UICategory = "Romance";
    OrderIndex = 5;

    ActionClassName = "SimpleExecutionAction";
    GUIData = array
    {
        @base/AnyAdultMemberOfOwnFamily
    };
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
    ActionName = "StartRomance";
    DisplayName = "$action.StartRomanceAction";
    Description = "$action.StartRomanceActionDesc";
    Instruction = "$callToAction.StartRomance";
    ActionActor = "Character";
    TargetActor = "Character";
                           
    CanFail = false;
    
	EnterBuilding = "TryEnter";
    SuppressBuildingEnterBehavior = true;
    
    Cooldown = 0.015;
    
    BaseRewardXP = 10;
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
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
            OppositeGender = 3;
            InLoveWithMe = -3;
            Leader = -3;
			PartyMember = -2;
            NPCGuard = -3;
            Employee = -3;  
            Boat = -3;
            SimilarSocialStandingToMine = 3;
            Rich = -3;
            Middle = -3;
            Common = 3;
            PoliticalImportance = -3;
            CloseToSourceAge = 3;
            Married = -3;
            NPC = 3;
            CloseToActor = 3;
            DoesNotHaveAnyTags = array{ "NoRomance" };
            FamilyProfile = TargetProfileFamily
            {
                MyFamily = -3;
                Rich = 1;
                PoliticalImportance = 1;
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
              
	Dialogue = array { "ACTION", "d.act.startRomance" };
};

"CourtingSomeone" = G3ActionTemplate //$action.ComplimentSomeone
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 10;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "CourtingSomeone";

	DisplayName = "$action.ComplimentSomeone";
	Description = "$action.ComplimentSomeoneDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ActionActor = "Character";
	TargetActor = "Character";
	
	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	BaseRewardXP = 18;
	Cooldown = 0.008; //~10sec
	
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
		
    Dialogue = array{ "ACTION", "d.act.courtingSomeone" };	
};

"SweetTalk" = G3ActionTemplate //Sweet talk
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 15;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "SweetTalk";
	DisplayName = "$action.SweetTalk";
	Description = "$action.SweetTalkDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = true;		

	BaseRewardXP = 26;
	Cooldown = 0.03;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 15 + Charisma + Target.DoesHaveTag.RomPrefCloseApproach";
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
			AffectLiaison = "(25 + (Target.hasTag.CloseApproach * 2)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
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
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "-12 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"SweetTalk"};
			ActorValue = "Charisma";
			Mod = -1;
			Duration = 15.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Rejected"};
			ApplyTo = "Self";
			DisplayGroup = "wound";
			DisplayName = "$effect.rejected";
			Duration = 15.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 1;
			Amount = 0.01;
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

"KissCheek" = G3ActionTemplate //Kiss on the cheek
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 20;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "KissCheek";
	DisplayName = "$action.KissCheek";
	Description = "$action.KissCheekDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = true;			
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	BaseRewardXP = 33;
	Cooldown = 0.12;
	
	SourceScoreFormula = "RelationshipScore / 20 + Charisma * 0.5 + Target.DoesHaveTag.RomPrefCloseApproach + Target.DoesHaveTag.RomPrefContraryGoodBehavior";
	TargetScoreFormula = "Intelligence * 0.75 + (100 - RelationshipScore) / 35";       

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
		CustomAnimationInfo = array {"kiss_oncheek", 0, -1, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
			
	DistanceFromTarget = 38;
	DistanceFromTargetMin = 38;
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "(32 + ((Target.hasTag.RomPrefCloseApproach + Target.hasTag.RomPrefContraryGoodBehavior) * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.Artist", "RomPref.MoreDistance"};
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
	
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"RomanceFailHarshReaction"};
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-16 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"KissCheek"};
			ActorValue = "Charisma";
			Mod = -2;
			Duration = 15.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Rejected"};
			ApplyTo = "Self";
			DisplayGroup = "wound";
			DisplayName = "$effect.rejected";
			Duration = 15.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.01;
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.01;
		},
	};
};
		
"StartLiaison" = G3ActionTemplate //Embark on a liaison
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 25;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "StartLiaison";
	DisplayName = "$action.StartLiaisonAction";
	Description = "$action.StartLiaisonActionDesc";
	Instruction = "$callToAction.Romance2Character";

	ActionActor = "Character";
	TargetActor = "Character";
	
	CanFail = false;
	Cooldown = 0.015;
	
	BaseRewardXP = 35;
	BaseRewardPrestige = 20;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
			 
	MoralAlignmentShift = 0.15;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,-0.5,0.1};
	};

	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	ShowSelectionPrompt = "RomanceCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.romances.to.start.liaison.with";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			OppositeGender = 3;
			InRomanceWithMe = 3;
			InLiaisonWithMe = -3;
			EngagedToMe = -3;
			HighRomanticScore = 2;
			Leader = -3;
			PartyMember = -2;
			NPCGuard = -3;
			Employee = -3;	
			Boat = -3;
			NPC = -2;
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
	
	Dialogue = array{ "ACTION", "d.act.startLiaison" };

};
      
"AskFavor" = G3ActionTemplate //Ask a favour
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 40;
	
	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "AskFavor";
	DisplayName = "$action.AskFavor";
	Description = "$action.AskFavorDesc";
	Instruction = "$callToAction.LiaisonCharacter";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	Cooldown = 0.15;
	BaseRewardXP = 53;
	CanFail = true;			
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 25";
	TargetScoreFormula = "Intelligence * 0.5 + (100 - RelationshipScore) / 30";       

	ShowSelectionPrompt = "LiaisonCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.liaisons";
	
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
			InLiaisonWithMe = 3;
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
			
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.6,-0.75,-0.25};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 5, 503, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
			
	DistanceFromTarget = 25;
	DistanceFromTargetMin = 25;
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "15 * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Present", "RomPref.Artist"};
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
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "-8 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
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

"UseConnections" = G3ActionTemplate //Exploit connections
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 45;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "UseConnections";
	DisplayName = "$action.UseConnections";
	Description = "$action.UseConnectionsDesc";
	Instruction = "$callToAction.LiaisonCharacter";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  
	BaseRewardXP = 76;
	Cooldown = 0.25;
	
	CanFail = true;			
	
	SourceScoreFormula = "RelationshipScore / 30";
	TargetScoreFormula = "Intelligence * 0.5 + (100 - RelationshipScore) / 25";       

	ShowSelectionPrompt = "LiaisonCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.liaisons";
	
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
			InLiaisonWithMe = 3;
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
		
	MoralAlignmentShift = 0.07;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.8,-0.5};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 5, 502, -1};
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
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Giver = "Target";
			Amount = 15;
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Present", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
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
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "-10 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
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

"ManipulateLiaison" = G3ActionTemplate //Manipulate liaison
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 50;
	
	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	SuppressBuildingEnterBehavior = true;
	
	ActionName = "ManipulateLiaison";
	DisplayName = "$action.ManipulateLiaison";
	Description = "$action.ManipulateLiaisonDesc";
	Instruction = "$callToAction.LiaisonCharacter";
	
	ActionActor = "Character";            
	TargetActor = "Character";  
	BaseRewardXP = 124;
	Cooldown = 0.25;
	
	CanFail = false;			

	ShowSelectionPrompt = "LiaisonCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.liaisons";
	
	EnterBuilding = "TryEnter";
	
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader =-3;
			PartyMember = -2;
			NPCGuard = -3;  
			Employee = -3;
			InLiaisonWithMe = 3;
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
		
	MoralAlignmentShift = 0.09;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-1,-0.7};
	};
			
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	
	Dialogue = array { "ACTION", "d.act.manipulateLiaison" };

};

"KissLiaison" = G3ActionTemplate //Forbidden kiss
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 30;
	
	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	ActionName = "KissLiaison";
	DisplayName = "$KissLiaison";
	Description = "$KissLiaisonDesc";
	Instruction = "$callToAction.LiaisonCharacter";
	
	ActionActor = "Character";
	TargetActor = "Character";
	BaseRewardXP = 100;
	Cooldown = 0.5;
	
	ShowSelectionPrompt = "LiaisonCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.liaisons";
	
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
			InLiaisonWithMe = 3;
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

	SourceScoreFormula = "RelationshipScore / 20 + Charisma * 0.5 + Target.DoesHaveTag.RomPrefCloseApproach + Target.DoesHaveTag.RomPrefContraryGoodBehavior";
	TargetScoreFormula = "Intelligence * 0.75 + (100 - RelationshipScore) / 45";       

	CanFail = true;			
	CriticalFactor = 1.0;

	Duration = 0.0023;
	DistanceFromTarget = 56;
	DistanceFromTargetMin = 56;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"kiss_onlips", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"kiss_onlips", 0, -1, -1};
	};

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"KissLiaison"};
			Duration = 0.0;
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"KissLiaison"};
		},
	};
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "(35 + ((Target.hasTag.RomPrefCloseApproach + Target.hasTag.RomPrefContraryGoodBehavior) * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Present", "RomPref.Artist"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KissLiaisonFindSpouse"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		}
	};
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"RomanceFailHarshReaction"};
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-20 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"RomPref.WipeAll"};
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"KissLiaison"};
			ActorValue = "Charisma";
			Mod = -2;
			Duration = 15.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Rejected"};
			ApplyTo = "Self";
			DisplayGroup = "wound";
			DisplayName = "$effect.rejected";
			Duration = 15.0;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KissLiaisonFindSpouse"};
		}
	};
};

"DanceWithLiaison" = G3ActionTemplate //Forbidden dance
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 31;
	
	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	ActionName = "DanceWithLiaison";
	DisplayName = "$DanceWithLiaison";
	Description = "$DanceWithLiaisonDesc";
	Instruction = "$callToAction.LiaisonCharacter";
	
	ActionActor = "Character";
	TargetActor = "Character";
	BaseRewardXP = 100;
	Cooldown = 0.5;
	
	ShowSelectionPrompt = "LiaisonCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.liaisons";
	
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
			InLiaisonWithMe = 3;
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
			};
		}
	};             
    
    MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
    {
        Values = array{0,0,0};
    };

	SourceScoreFormula = "RelationshipScore / 20 + Charisma * 0.5 + Target.DoesHaveTag.RomPrefCloseApproach + Target.DoesHaveTag.RomPrefContraryGoodBehavior";
	TargetScoreFormula = "Intelligence * 0.75 + (100 - RelationshipScore) / 45";       

	CanFail = true;			
	CriticalFactor = 1.0;

	Duration = 0.007;
	DistanceFromTarget = 20;
	DistanceFromTargetMin = 20;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"dance_pair", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"dance_pair", 0, -1, -1};
	};

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"DanceWithLiaison"};
			Duration = 0.0;
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"DanceWithLiaison"};
		},
	};
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "(35 + ((Target.hasTag.RomPrefCloseApproach + Target.hasTag.RomPrefContraryGoodBehavior) * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Present", "RomPref.Artist"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KissLiaisonFindSpouse"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"NPCRandomFollowUpShort"};
		}
	};
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"RomanceFailHarshReaction"};
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-20 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"RomPref.WipeAll"};
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"DanceWithLiaison"};
			ActorValue = "Perception";
			Mod = -2;
			Duration = 15.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Rejected"};
			ApplyTo = "Self";
			DisplayGroup = "wound";
			DisplayName = "$effect.rejected";
			Duration = 15.0;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KissLiaisonFindSpouse"};
		}
	};
};

"EndLiaison" = G3ActionTemplate //End love affair
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 60;
	
	ActionClassName = "EndLiaisonAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			CharacterIsInLove = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionName = "EndLiaison";
	DisplayName = "$action.EndLiaisonAction";
	Description = "$action.EndLiaisonActionDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ShowCombatText = true;

	ActionActor = "Character";            
	TargetActor = "Character";               

	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
	
	CanFail = false;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			InLoveWithMe = 3;
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
	
	MoralAlignmentShift = 0.45;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.2,0.1,0.1};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"refuse1", 5, 55, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"talk2", 0, -1, -1};
	};
	
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-50 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"RomPref.WipeAll"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"RomanceFailHarshReaction"};
		},
	};
};

"ProposeMarriage" = G3ActionTemplate // Propose marriage
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 60;

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
	UsableBy = array{ "$gui.item.AdultTrueBloodline" };

	ActionName = "ProposeMarriage";
	DisplayName = "$action.ProposeMarriage";
	Description = "$action.ProposeMarriageDesc";
	Instruction = "$callToAction.RomanceCharacter";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.015;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = false;
	
	ShowSelectionPrompt = "EngagementCharacters";
	SelectionPromptCallToAction = "$callToAction.RomanceCharacter";
	SelectionPromptNoTargetMessage = "$gui.no.romances.to.get.engaged.to";
	HideSelectionPromptCancelButton = true;

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			PartyMember = -3; 
			NPCGuard = -3;
			Employee = -3;
			Married = -3;
			IsEngaged = -3;
			InLoveWithMe = 3;
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

	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.6,0.6,0.4};
	};
	
	DistanceFromTarget = 45;
	DistanceFromTargetMin = 45;

	Dialogue = array{ "ACTION", "d.act.proposeMarriage" };
};

"StartWedding" = G3ActionTemplate // Marry
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 65;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			// This does NOT query if the character is engaged. That way, it shows up, and when you click it and don't have a fiance, you get the empty selection box that informs you about the requirements.
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
		}
	};
	UsableBy = array{ "$gui.item.AdultTrueBloodline" };

	ActionName = "StartWedding";
	DisplayName = "$action.StartWeddingAction";
	Description = "$action.StartWeddingActionDesc";
	Instruction = "$callToAction.Fiance";
	
	IconName = "Marriage";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.015;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.Fiance";
	SelectionPromptNoTargetMessage = "$gui.no.fiance.to.get.married.to";
	HideSelectionPromptCancelButton = true;

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			PartyMember = -3; 
			NPCGuard = -3;
			Employee = -3;
			Married = -3;
			EngagedToMe = 3;
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
	
	DistanceFromTarget = 45;
	DistanceFromTargetMin = 45;
	
	Dialogue = array{ "ACTION", "d.act.startWedding" };
};

"InstantWedding" = G3ActionTemplate // Instant Wedding
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "PlayerEngagedAI";
		}
	};

	ActionName = "InstantWedding";
	DisplayName = "$action.InstantWeddingAction";
	Description = "$action.InstantWeddingActionDesc";
	Instruction = "$callToAction.Fiance";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.015;

	BudgetPot = "Expansion";
	BudgetPost = "Religion";
	CurrencyType = "Prestige";
	PriceFormula = "SocialLevel * ((5 * hasTag.BuffEasy) + (10 * hasTag.BuffNormal) + (25 * hasTag.BuffHard) + (50 * hasTag.BuffImpossible))";

	ActionActor = "Character";
	TargetActor = "Character";

	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.Fiance";
	SelectionPromptNoTargetMessage = "$gui.no.fiance.to.get.married.to";
	HideSelectionPromptCancelButton = true;
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.2,-0.3,-0.2};
	};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			AutoSelect = true; // Since there should be only ever one fiance, and this is auto select, the selection prompt should never show up. In theory.
			Adult = 3;
			OppositeGender = 3;
			PartyMember = -3; 
			NPCGuard = -3;
			Employee = -3;
			Married = -3;
			EngagedToMe = 3;
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
	
	DistanceFromTarget = 45;
	DistanceFromTargetMin = 45;
	
	Dialogue = array{ "ACTION", "d.act.instantWedding" };
};

"ChurchWeddingStart" = G3ActionTemplate // Sends a character to the church and starts talking to priest afterwards.
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "PlayerEngagedAI";
		}
	};

	ActionName = "ChurchWeddingStart";
	DisplayName = "$action.ChurchWeddingAction";
	Description = "$action.ChurchWeddingActionDesc";
	Instruction = "$callToAction.BuildingChurch";
	IconName = "ChurchWedding";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.015;
	
	ActionActor = "Character";
	TargetActor = "Building"; // This action targets the CHURCH you want to get married at.

	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingChurch";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingChurch";
	HideSelectionPromptCancelButton = true;

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
		TargetProfileBuilding
		{
			AutoSelect = true;
			
			IsCurrentBuilding = 3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
	};
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array {
		FunctionTriggerAction
		{
			ApplyTo = "Self";
			ActionTarget = "FromTargetProfile";
			Actions = array{ "TalkToPriest" };
		},
	};
};

"ChurchWedding" = G3ActionTemplate // Church Wedding, requires payment, then fires off the WeddingScene
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			CharacterHasASpouse = 0;
			CharacterIsEngaged = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsTrueBloodline = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "PlayerEngagedAI";
		}
	};

	ActionName = "ChurchWedding";
	DisplayName = "$action.ChurchWeddingAction";
	Description = "$action.ChurchWeddingActionDesc";
	Instruction = "$callToAction.BuildingChurch";

	ShowCombatText = true;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	BudgetPot = "Expansion";
	BudgetPost = "Religion";
	PriceFormula = "SocialLevel * ((25 * hasTag.BuffEasy) + (50 * hasTag.BuffNormal) + (125 * hasTag.BuffHard) + (250 * hasTag.BuffImpossible))";

	Cooldown = 0.015;
	
	ActionActor = "Character";
	TargetActor = "Building"; // This action targets the CHURCH you want to get married at.

	CanFail = false;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingChurch";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingChurch";
	HideSelectionPromptCancelButton = true;

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
		TargetProfileBuilding
		{
			AutoSelect = true;
			
			IsCurrentBuilding = 3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
	};
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array {
		FunctionStartScene {
			ApplyTo = "Source";
			Filter = "Source.IsMale";
			Scene = "WeddingScene";
			// No participants to fill manually, the scene takes care of that.
			StartFailureCombatText = "$feedback.WeddingParticipantsBusy.female";
		},
		FunctionStartScene {
			ApplyTo = "Source";
			Filter = "!Source.IsMale";
			Scene = "WeddingScene";
			// No participants to fill manually, the scene takes care of that.
			StartFailureCombatText = "$feedback.WeddingParticipantsBusy";
		},
	};
};

"AttendWedding" = G3ActionTemplate // Attend a wedding at church.
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "AttendWedding";
	IconName = "ChurchWedding";
	
	ActionActor = "Character";
	TargetActor = "Building";
	
	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";
	DisplayName = "$action.AttendWedding";
	Description = "$action.AttendWeddingDesc";

	Duration = 0.25; // This is just a failsafe. The action normally ends when the wedding is over.

	TargetTags = array{ "Wedding" };
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			CloseToActor = 2;
			MaxDistance = 7500;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
	TargetSnapPoint = TargetSnapPoint
	{
		ShouldReserve = false;
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "WeddingScene"; },
		};
	};
	
	OnAnimationFinishedResult = array{
		// This will recheck if the action target is still valid. If it's not (usually because the Wedding tag has disappeared after the wedding has ended), it will finish the action.
		FunctionEndAction {
			ApplyTo = "Source";
			Filter = "!Source.IsCurrentActionTargetValid";
			Type = "Finish";
		},
	};
	
	// Attending family members are sent home at the end.
	OnFinishResult = array{
		FunctionTriggerAction {
			ApplyTo = "Source";
			Filter = "Source.IsFamilyMember";
			Actions = array{ "GoHome" };
		},
	};
};

"ProduceOffspring" = G3ActionTemplate //Produce offspring
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 10;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsAdult = 1;
			CharacterHasASpouse = 1;
			BelongsToOwnFamily = 1;
			IsTrueBloodline = 1;
		}
	};
	UsableBy = array{ "$gui.item.AdultTrueBloodline" };
	
	ActionClassName = "ProduceOffspring";
	ActionName = "ProduceOffspring";
	
	DisplayName = "$action.ProduceOffspring";
	Description = "$action.ProduceOffspringDesc";
	Instruction = "$action.ProduceOffspringInstuction";

	ActionActor = "Character";
	TargetActor = "Character";
	
	// it won't crit
	CriticalFactor = 1.0;
	
	Duration = 0.029; 
	Cooldown = 0.3; // ~6 hours
	
	BaseRewardXP = 35;
	
	EnterBuilding = "TryEnter";
	
	// This is a pretty convoluted formula. Explanation:
	// (Source.Fertility * Target.Fertility) . . . . . . . . . . . . . . Fertility of both characters affects base chance.
	// !Source.IsCharacterPregnant * !Target.IsCharacterPregnant . . . . If either one is pregnant, will fail. The action already excludes pregnant characters from the list, this is just for safety.
	// clamp(invlerp(Gameplay.PregnancyChildrenLimit, 0, Source.LivingChildrenWithSpouse), 0, 1) . . . . Will reduce chance linearly beyond the first child down to 0 with the PregnancyChildrenLimit.
	// (Source.IsHeir || Source.IsLeader || Target.IsHeir || Target.IsLeader ? 1 : ...)  . . . . . . . . Will ignore the last limit if the leader or heir is involved in this 'transaction'.
	// clamp(invlerp(FamilySizeUpperLimit, FamilySizeLowerLimit, FamilySize), 0, 1)  . . . . . . . . . . Will reduce conception chance if the entire family grows too large. Ignored for leaders and heirs.
	SourceScoreFormula = "(Source.Fertility * Target.Fertility) * !Source.IsCharacterPregnant * !Target.IsCharacterPregnant * clamp(invlerp(Gameplay.PregnancyChildrenLimit, 0, Source.LivingChildrenWithSpouse), 0, 1) * (Source.IsHeir || Source.IsLeader || Target.IsHeir || Target.IsLeader ? 1 : clamp(invlerp(FamilySizeUpperLimit, FamilySizeLowerLimit, FamilySize), 0, 1))";
	TargetScoreFormula = "1 - SourceScore";
	
	ShowCombatText = false;
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.6,0.6,0};
	};

	// NOTE: success and failure are handled in code because we don't know if the mother is the source or the target here
	CriticalFactor = 1.0;
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnSpouse";
	SelectionPromptNoTargetMessage = "$action.ProduceOffspringInstuction"; // Reuses the message used for indicating that the ProduceOffspring action failed to start.
	
	TargetTags = array{"Pregnant", "deeplydisappointed"}; // deeplydisappointed . . . character has been betrayed
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			MarriedWithMe = 3;
			MatchTargetTags = -3;
		}
	};
	
	OnFinishResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ProduceOffspringDelayedExit"};
			CheckSourceProfile = false;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"ProduceOffspringExit"};
			CheckSourceProfile = false;
		},
	};
	
	SuccessResult = array 
	{
		FunctionTrackObjectiveProgress
		{
			Amount = 45;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 4;
			Amount = 0.01;
		},
	};
};

"ProduceOffspringDelayedExit" = G3ActionTemplate // This action keeps the character invisible for a short duration, then starts "ProduceOffspringExit"
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";
	ActionName = "ProduceOffspringDelayedExit";
	
	DisplayName = "$action.ProduceOffspring";
	Description = "$action.ProduceOffspringDesc";
	Instruction = "$action.ProduceOffspringInstuction";

	ActionActor = "Character";
	
	ShowCombatText = false;

	CanFail = false;
	EnterBuilding = "TryEnter";
	
	Duration = 0.0111; // ~20 seconds
	
	OnStartResult = array
	{
		OverrideCharacterVisibility
		{
			ApplyTo = "Target";
			Tags = array{"ProduceOffspringDelayedExit"};
			Duration = 25.0;
			Visibility = "Invisible";
		}
	};
	
	// Remove the visibility override (especially in case of a premature end)
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"ProduceOffspringDelayedExit"};
		}
	};
	
	OnFinishResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"ProduceOffspringExit"};
			CheckSourceProfile = false;
		}
	};
};

"ProduceOffspringExit" = G3ActionTemplate // This action is started after ProduceOffspring and makes the participants play the exit animation.
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";
	ActionName = "ProduceOffspringExit";
	
	DisplayName = "$action.ProduceOffspring";
	Description = "$action.ProduceOffspringDesc";
	Instruction = "$action.ProduceOffspringInstuction";

	ActionActor = "Character";
	
	GUIData = array
	{
		ActionGUIData
		{
			// This is required so we can't unintentionally start this action in
			// the building of an ally by right-clicking on the ladder.
			CharacterInOwnBuilding = 1;
		},
	};
	
	ShowCombatText = false;

	CanFail = false;
	EnterBuilding = "TryEnter";

	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "ProduceOffspringExit"; },
		};
	};
};

"PlayPipe" = G3ActionTemplate //Play a serenade
{
	GUIPresent = true;
	UICategory = "Romance";
	OrderIndex = 35;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionName = "PlayPipe";
	DisplayName = "$PlayPipe";
	Description = "$PlayPipeDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship2";

	ShowCombatText = true;

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";

	Duration = 0.02;
	BaseRewardXP = 25;
	CanFail = true;
	CriticalFactor = 1.0;
	Cooldown = 0.12;

	EnterBuilding = "TryEnter";

	SourceScoreFormula = "RelationshipScore / 20 + Entertainment + Target.DoesHaveTag.RomPrefArtist";
	TargetScoreFormula = "Charisma * 0.5 + (100 - RelationshipScore) / 35";       

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
			};
		}
	};             
		
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,0.25,0};
	};

	DistanceFromTarget = 25;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"gleeman_pipe", 0, -1, -1};
	}; 
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5.0;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "(32 + (Target.hasTag.RomPrefArtist * 3)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Present", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
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
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectLiaison = "-16 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
		},				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"serenade"};
			ActorValue = "Charisma";
			Mod = -2;
			Duration = 15.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Rejected"};
			ApplyTo = "Self";
			DisplayGroup = "wound";
			DisplayName = "$effect.rejected";
			Duration = 15.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.01;
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
