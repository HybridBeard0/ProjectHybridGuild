//Family Actions
"DonateToChurch" = G3ActionTemplate //Church donation
{
	GUIPresent = true;
	UICategory = "Religion";
	OrderIndex = 40;

	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "DonateToChurch";
	DisplayName = "$action.DonateToChurch";
	Description = "$action.DonateToChurchDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";
	
	BaseRewardXP = 30;
	BaseRewardPrestige = 38;
	
	PriceFormula = "SocialLevel^2 * ((25 * hasTag.BuffEasy) + (50 * hasTag.BuffNormal) + (75 * hasTag.BuffHard) + (100 * hasTag.BuffImpossible)) - (SocialLevel^3)";
	
	CooldownFamilyWide = true;
	Cooldown = 0.25;
	SourceRun = true;
	
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Charisma * 0.5 + ReputationBonus * 5";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "DonateToChurch"; },
		};
	};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			
			CloseToActor = 1;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		},
		TargetProfileBuilding
		{
			AutoSelect = true;
			IsCurrentBuilding = 3;
			
			CloseToActor = 1;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
	
	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.8,0.3};
	};

	CriticalFactor = 0.55;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 12;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "10"; // AffectCurrentNeighborhoodToSource
		},
		// Relationship change between my family and all families of same religion
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstSet = "Self";
			FirstNeutrals = false;
			SecondContext = "Source";
			SecondGroup = "Religion";
			SecondSet = "Self";
			SecondNeutrals = false;
			ChangeFormula = "3";
		},
	};
	
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "6"; // AffectCurrentNeighborhoodToSource
		},
		// Relationship change between my family and all families of same religion
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstSet = "Self";
			FirstNeutrals = false;
			SecondContext = "Source";
			SecondGroup = "Religion";
			SecondSet = "Self";
			SecondNeutrals = false;
			ChangeFormula = "1";
		},
	};
	
};

"GreaseTheWheels" = G3ActionTemplate //Oil the wheels of bureaucracy
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 35;

	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "GreaseTheWheels";
	DisplayName = "$action.GreaseTheWheels";
	Description = "$action.GreaseTheWheelsDesc";
	Instruction = "$callToAction.BuildingCityHall";

	ActionActor = "Character";
	TargetActor = "Building";
	
	SourceScoreFormula = "Charisma * 0.5 + ReputationBonus * 5";
	TargetScoreFormula = "1.5";
	
	BaseRewardXP = 300;
	BaseRewardPrestige = 800;
	BudgetPot = "Other";
	BudgetPost = "Offices";
	
	PriceFormula = "SocialLevel*SocialLevel*(((180 * hasTag.BuffEasy) + (240 * hasTag.BuffNormal) + (300 * hasTag.BuffHard) + (360 * hasTag.BuffImpossible))-SocialLevel)";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;
	
	CanFail = True;
	EnterBuilding = "TryEnter";

	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.8,0.5};
	};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Cityhall"};
		},
		TargetProfileBuilding
		{
			AutoSelect = true;
			
			IsCurrentBuilding = 3;
			
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Cityhall"};
		},
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "TalkToReceptionist"; Inside = 3; IsFree = 3; },
		};
	};

	ShowCombatText = true;
	
	CriticalFactor = 1.0f;
};

"BribeOfficeHolder" = G3ActionTemplate //Bribe an official
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 30;

	GUIData = array
	{
		@base/MainThreeCharacters
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BribeOfficeHolder";
	DisplayName = "$action.BribeOfficeHolder";
	Description = "$action.BribeOfficeHolderDesc";
	Instruction = "$callToAction.CharacterOfficeHolder";

	ActionActor = "Character";
	TargetActor = "Character";
	
	BaseRewardXP = 160;
	BaseRewardPrestige = 500;
	
	PriceFormula = "SocialLevel^2*(((100 * hasTag.BuffEasy) + (150 * hasTag.BuffNormal) + (200 * hasTag.BuffHard) + (250 * hasTag.BuffImpossible))-(SocialLevel*2))";
	
	CooldownFamilyWide = true;
	Cooldown = 0.25;
	SourceRun = true;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CanFail = true;
	
	ShowSelectionPrompt = "OfficeHolders";
	SelectionPromptNoTargetMessage = "$gui.no.office.holders";
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.7,0.3};
	};

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			CloseToActor = 2;
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
	
	Dialogue = array{ "ACTION", "d.act.BribeOfficeHolder" };	
};

"KissSpouse" = G3ActionTemplate //Kiss within marriage
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 5;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "KissSpouse";
	DisplayName = "$KissSpouse";
	Description = "$KissSpouseDesc";
	Instruction = "$callToAction.OwnSpouse";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = false;			
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	BaseRewardXP = 5;
	Cooldown = 0.3; // 6 hours
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnSpouse";
	SelectionPromptNoTargetMessage = "$callToAction.OwnSpouse.PromptNoTarget";
	
	TargetTags = array{"deeplydisappointed"}; // deeplydisappointed = actor has betrayed the spouse
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
		Values = array{0.2,0.2,0};
	};

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

	CriticalFactor = 1.0f;

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"KissSpouse"};
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"KissSpouse"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KissSpouseResult"};
		}
	};
};

"KissSpouseResult" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "KissSpouseResult";
	DisplayName = "$KissSpouse";
	Description = "$KissSpouseDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";
	
	ShowCombatText = True;
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Compliment";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"KissSpouse"};
			ActorValue = "Fertility";
			Mod = 0.05;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"KissSpouse"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.happilymarried";
			Duration = 900.0;
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"KissSpouse"};
			ActorValue = "Fertility";
			Mod = 0.05;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"KissSpouse"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.happilymarried";
			Duration = 900.0;
		}
	};
};

"DanceWithSpouse" = G3ActionTemplate //Dance within marriage
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 6;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "DanceWithSpouse";
	DisplayName = "$DanceWithSpouse";
	Description = "$DanceWithSpouseDesc";
	Instruction = "$callToAction.OwnSpouse";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = false;
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	BaseRewardXP = 5;
	Cooldown = 0.3; // 6 hours
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnSpouse";
	SelectionPromptNoTargetMessage = "$callToAction.OwnSpouse.PromptNoTarget";
	
	TargetTags = array{"deeplydisappointed"}; // deeplydisappointed = actor has betrayed the spouse
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
				//TargetProfileBuilding // inside a city building
				//{
				//	IncludedTypes = array{"Cityhall", "Church", "cathedrale", "Arsenal"};
				//},
			};
		},
	};
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.2,0.2,0};
	};

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

	CriticalFactor = 1.0f;

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"DanceWithSpouse"};
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"DanceWithSpouse"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"DanceWithSpouseResult"};
		}
	};
};

"DanceWithSpouseResult" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "DanceWithSpouseResult";
	DisplayName = "$DanceWithSpouse";
	Description = "$DanceWithSpouseDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";
	
	ShowCombatText = True;
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Compliment";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"DanceWithSpouse"};
			ActorValue = "Fertility";
			Mod = 0.05;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"DanceWithSpouse"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.happilymarried";
			Duration = 900.0;
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"DanceWithSpouse"};
			ActorValue = "Fertility";
			Mod = 0.05;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"DanceWithSpouse"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.happilymarried";
			Duration = 900.0;
		}
	};
};

"WaveHello" = G3ActionTemplate //Greet someone
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 5;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "WaveHello";
	DisplayName = "$WaveHello";
	Description = "$WaveHelloDesc";
	Instruction = "$callToAction.CharacterAdult";

	ShowCombatText = true;
	
	ActionActor = "Character";            
	TargetActor = "Character";  

	CanFail = true;
	
	SuppressBuildingEnterBehavior = true;
	BaseRewardXP = 0;
	Cooldown = 0.01;
	
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			InsideBuilding = -3;
			CloseToActor = 2;
			Employee = -3;
			Boat = -3;
			NPCGuard = -3;
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
		
	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.45,0};
	};

	Duration = 0.001;
	DistanceFromTarget = 500;
	DistanceFromTargetMin = 50;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"WaveHello", 0, -1, -1};
	};

	CriticalFactor = 0.95;
	
	CriticalSuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "1";
		};
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"WaveHelloWaveBackCritical"};
			ResumeInterruptedAction = true;
		}
	};
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"WaveHelloWaveBack"};
			ResumeInterruptedAction = true;
		}
	};
	FailureResult = array
	{
	};	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-1";
		};
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"WaveHelloScoldingBack"};
			ResumeInterruptedAction = true;
		}
	};
};

"LaughAtSomeone" = G3ActionTemplate //Laugh at someone
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 6;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsPartyMember = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsPartyMember = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "StillGiggling";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "LaughAtSomeone";
	DisplayName = "$LaughAtSomeone";
	Description = "$LaughAtSomeoneDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember4";

	ShowCombatText = true;
	
	ActionActor = "Character";
	TargetActor = "Character";

	CanFail = true;
	
	SuppressBuildingEnterBehavior = true;
	BaseRewardXP = 5;
	Cooldown = 0.02;
	
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intimidation";
	TargetScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Adult = 3;
			InsideBuilding = -3;
			CloseToActor = 2;
			Employee = -3;
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -3;
				Feud = 2;
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
		
	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,-0.45,0};
	};

	Duration = 0.001;
	DistanceFromTarget = 250;
	DistanceFromTargetMin = 50;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"laugh_at_someone", 0, -1, -1};
	};

	CriticalFactor = 0.95;

	OnEndResult = array
	{
		TagEffect
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Self";
			Tags = array{"StillGiggling"};
			Duration = 540.0;
		},
	};
	CriticalSuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-2";
			AffectCurrentNeighborhoodToTarget = "-2";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "LaughAtSomeoneSuccessTarget";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"LaughAtSomeoneSuccess"};
			ResumeInterruptedAction = true;
		}
	};
	SuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-1";
			AffectCurrentNeighborhoodToTarget = "-1";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "LaughAtSomeoneSuccessTarget";
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"LaughAtSomeoneSuccess"};
			ResumeInterruptedAction = true;
		}
	};
	FailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-1";
			AffectCurrentNeighborhoodToSource = "-1";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "LaughAtSomeoneFailureTarget";
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Target";
			Actions = array{"LaughAtSomeoneFailure"};
			ResumeInterruptedAction = true;
		}
	};	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-2";
			AffectCurrentNeighborhoodToSource = "-2";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "LaughAtSomeoneFailureTarget";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"LaughAtSomeoneCriticalFailure"};
			ResumeInterruptedAction = true;
		}
	};
};

"PrayForLuck" = G3ActionTemplate //Pray for a little bit of luck
{
	GUIPresent = true;
	UICategory = "Religion";
	OrderIndex = 1;

	ActionClassName = "SimpleExecutionAction";
	GUIData = array
	{
		@base/AnyAdultMemberOfOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "PrayForLuck";
	DisplayName = "$PrayForLuck";
	Description = "$PrayForLuckDesc";
	Instruction = "$callToAction.Well";

	ShowCombatText = false;
	
	ActionActor = "Character";            
	TargetActor = "Building";  

	CanFail = true;
	
	EnterBuilding = "TryEnter";
	BaseRewardXP = 5;
	Cooldown = 0.1;

	PriceFormula = "SocialLevel * 3";
	BudgetPot = "Other";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 1;
			CityBuilding = 3;
			IncludedTypes = array{"Well"};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "PrayForLuck"; },
		};
	};
		
	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,-0.3,0};
	};

	Duration = 0.001;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 0, -1, -1};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PrayForLuck2"};
		}
	};
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"PrayForLuck2"};
		}
	};	
};

"PrayForLuck2" = G3ActionTemplate //Pray for a little bit of luck
{
	GUIPresent = false;

	ActionClassName = "SimpleExecutionAction";

	ActionName = "PrayForLuck2";
	DisplayName = "$PrayForLuck";
	Description = "$PrayForLuckDesc";

	ShowCombatText = true;
	
	ActionActor = "Character";            

	CanFail = true;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	Duration = 0.002;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"praying_looksky", 0, -1, -1};
	};

	CriticalFactor = 0.95;
	
	CriticalSuccessResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"Luck"};
			ActorValue = "Luck";
			Mod = 0.5;
			Duration = 360;
			Recover = true;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	SuccessResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"Luck"};
			ActorValue = "Luck";
			Mod = 0.25;
			Duration = 240;
			Recover = true;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	FailureResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"BadLuck"};
			ActorValue = "BadLuck";
			Mod = 0.25;
			Duration = 240;
			Recover = true;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};	
	CriticalFailureResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"BadLuck"};
			ActorValue = "BadLuck";
			Mod = 0.5;
			Duration = 360;
			Recover = true;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"TakeBathHome" = G3ActionTemplate //Take a bath in the bathroom
{
	UICategory = "Urgent";
	GUIPresent = true;
	OrderIndex = 20;
	GUIData = array
	{
		@base/AnyMemberOfOwnFamily
	};
	UsableBy = array{ "$qs.charactertype.0" };
	
	ActionName = "TakeBathHome";
	DisplayName = "$TakeBathHome";
	Description = "$TakeBathHomeDesc";
	Instruction = "$callToAction.ResidencePlayersBathroom";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.ResidencePlayersBathroom";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeBathTub";

// ForRent CHANGE
	TargetTags = array{"BathroomBlocked", "ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IncludedTypes = array{"CityHouse", "Mansion"};
			Burning = -3;
			CloseToActor = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			MatchTargetTags = -3;
			
			// The following two property ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
			
			EvaluateWhileInProgress = false;
		},	
		TargetProfileBuilding
		{
			IncludedTypes = array{"CityHouse", "Mansion"};
			Burning = -3;
			CloseToActor = 2;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			MatchTargetTags = -3;
			
			EvaluateWhileInProgress = false;
		}
	};
	
	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.2,0};
	};

	ShowCombatText = true;
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	BaseRewardXP = 5;

	// The action can figure out how long it should run based on the animations in it.?	// But that would not show a progress indicator on the action icon.?	// So to be able to show that, we provide the length explicitly instead.?	// Don't forget to update this duration if the animations change (and vice versa), or stuff will get cut off or loop.
	Duration = 0.0425;
	CanFail = false;
	CriticalFactor = 1.0;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "TakeBathHome"; },
		};
	};

	OnStartResult =  array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BathroomBlocked"};
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"BathroomBlocked"};
			ApplyTo = "Target";
		},
	};
	
	SuccessResult =  array
	{
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"Washed"};
			ApplyTo = "Self";
		},
		DisplayEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Self";
			DisplayGroup = "perfume";
			DisplayName = "$statusEffect.Washed";
			Duration = 360;
		},
		ModifierEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Self";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
			Duration = 360;
		},
		ModifierEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Recover = true;
			Duration = 360;
		},
		ModifierEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Duration = 360.0;
			Recover = true;
		};
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"Fleas"};
			ApplyTo = "Self";
		}
	};
};

"GoCampaigning" = G3ActionTemplate //Public relations
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 45;
	
	ActionClassName = "SimpleExecutionAction";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "GoCampaigning";
	ActionActor = "Character";
	TargetActor = "Character";
	DisplayName = "$action.GoCampaigning";
	Description = "$action.GoCampaigningDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayers2";
	
	Duration = 0.2;
	Cooldown = 0.1;
	BaseRewardXP = 50;
	CanFail = true;
	
	InteractionPriority = 0;
	
	EnterBuilding = "TryEnter";
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			CloseToActor = 2;
			OfficeHolder = 2;
			DynastyMember = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = 1;
				Rich = 1;
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
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,-0.75,0.3};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"talk1", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
	
	Dialogue = array{ "ACTION", "d.act.GoCampaigning" };
};

"GoIntoExile" = G3ActionTemplate //Join a monastery
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 60;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "GoIntoExile";
	DisplayName = "$action.GoIntoExile";
	Description = "$action.GoIntoExileDesc";
	Instruction = "$callToAction.BuildingChurch";

	CurrencyType = "Prestige";
	PriceFormula = "50";
	
	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingChurch";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingChurch";
	HideSelectionPromptCancelButton = true;

	ActionActor = "Character";
	TargetActor = "Building";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IsCurrentBuilding = -3;
			CloseToActor = 2;
			IncludedTypes = array{"Church", "cathedrale"};
		},
		TargetProfileBuilding
		{
			IsCurrentBuilding = 3;
			CloseToActor = 2;
			IncludedTypes = array{"Church", "cathedrale"};
			AutoSelect = true;
		},
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;

		Animations = array 
		{
			TargetSnapPointAnimation{ Animation = "opendoor"; },
		};

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "GoIntoExile"; },
		};
	};
	
	MoralAlignmentShift = 0.4;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.9,0.9};
	};

	SourceRun = true;
	CanFail = false;

	SuppressBuildingEnterBehavior = true;
	EnterBuilding = "ForceEnter";

	ShowCombatText = false;

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionKill
		{
			ApplyTo = "Self";
			Type = "Exile";
		}
	};
};

//Residence Actions
"OverseeWorkers" = G3ActionTemplate //Drive your workers
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 20;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "OverseeWorkers";
	DisplayName = "$OverseeWorkers";
	Description = "$OverseeWorkersDesc";
	Instruction = "$callToAction.PlayerBusiness";


	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "(Charisma + Intelligence) * 0.5 + (Source.hasTag.eventbuffExemplaryMaster) * 3";
	TargetScoreFormula = "Source.Intimidation * 0.5"; //if Source is to intimidating, visiting the workplace might have a negative effect
	
	Duration = 0.015;
	BaseRewardXP = 28;
	
	SourceRun = true;
	
	TargetTags = array{"OverseeWorkersSuccess"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{	
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -2;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Master"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "Threaten"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,-0.25,-0.25};
	};

	CriticalFactor = 0.9;

	CriticalSuccessResult =  array
	{
		//Remove negative effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "OverseeWorkersFailure" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersFailure";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersCritFailure";
		},

		//add positive effects
		ModifierEffect //only add the tag to the building for target selection
		{
			Tags = array{"OverseeWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 225;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"OverseeWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 225;
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkers";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"OverseeWorkersSuccess"};
			Relation = "Self";
			Duration = 225; //one off
			ResultObjectId = "OverseeWorkersCritSuccess";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	SuccessResult =  array
	{
		//Remove negative effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "OverseeWorkersFailure" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersFailure";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersCritFailure";
		},
		
		//add positive effects
		ModifierEffect //only add the tag to the building for target selection
		{
			Tags = array{"OverseeWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 180;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"OverseeWorkersSuccess"};
			ApplyTo = "Target";
			Duration = 180;
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkers";
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Tags = array{"OverseeWorkersSuccess"};
			Relation = "Self";
			Duration = 180; //one off
			ResultObjectId = "OverseeWorkersSuccess";
		},

		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		//Remove positive effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "OverseeWorkersSuccess" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersSuccess";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersCritSuccess";
		},
		
		//add negative effects
		ModifierEffect //only add the tag to the building for target selection
		{
			Tags = array{"OverseeWorkersFailure"};
			ApplyTo = "Target";
			Duration = 135;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"OverseeWorkersFailure"};
			ApplyTo = "Target";
			Duration = 135;
			DisplayGroup = "debuffed";
			DisplayName = "$action.DemotivatedWorkers";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"OverseeWorkersFailure"};
			Relation = "Self";
			Duration = 135; //one off
			ResultObjectId = "OverseeWorkersFailure";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	CriticalFailureResult = array
	{
		//Remove positive effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "OverseeWorkersSuccess" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersSuccess";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "OverseeWorkersCritSuccess";
		},
		
		//add negative effects
		ModifierEffect //only add the tag to the building for target selection
		{
			Tags = array{"OverseeWorkersFailure"};
			ApplyTo = "Target";
			Duration = 180;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"OverseeWorkersFailure"};
			ApplyTo = "Target";
			Duration = 180;
			DisplayGroup = "debuffed";
			DisplayName = "$action.DemotivatedWorkers";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"OverseeWorkersFailure"};
			Relation = "Self";
			Duration = 180; //one off
			ResultObjectId = "OverseeWorkersCritFailure";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"WhipTransporters" = G3ActionTemplate //Spur your transporters on
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 22;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "WhipTransporters";
	DisplayName = "$WhipTransporters";
	Description = "$WhipTransportersDesc";
	Instruction = "$callToAction.PlayerBusiness";

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "Strength * 0.25 + Intimidation * 0.75 + Source.hasTag.eventbuffExemplaryMaster * 3";
	TargetScoreFormula = "Source.Charisma * 0.5"; //if Source is too friendly, they might fail the whiping
	
	Duration = 0.015;
	BaseRewardXP = 28;
	
	SourceRun = true;
	
	TargetTags = array{"WhipTransportersSuccess"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{	
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -2;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Master"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "Threaten"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;

	MoralAlignmentShift = 0.01;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,-0.25,-0.25};
	};

	CriticalFactor = 0.9;
	
	CriticalSuccessResult =  array
	{
		//Remove negative effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "WhipTransportersFailure" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersFailure";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersCritFailure";
		},

		//add positive effects
		DisplayEffect
		{
			Tags = array{"WhipTransportersSuccess"};
			ApplyTo = "Target";
			Duration = 225;
			DisplayGroup = "buffed";
			DisplayName = "$statusEffect.whippedTransporters";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"WhipTransportersSuccess"};
			Relation = "Self";
			Duration = 225; 
			ResultObjectId = "WhipTransportersCritSuccess";
		},

		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	SuccessResult =  array
	{
		//Remove negative effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "WhipTransportersFailure" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersFailure";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersCritFailure";
		},
		//add positive effects
		DisplayEffect
		{
			Tags = array{"WhipTransportersSuccess"};
			ApplyTo = "Target";
			Duration = 180;
			DisplayGroup = "buffed";
			DisplayName = "$statusEffect.whippedTransporters";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"WhipTransportersSuccess"};
			Relation = "Self";
			Duration = 180;
			ResultObjectId = "WhipTransportersSuccess";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		//Remove positive effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "WhipTransportersSuccess" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersSuccess";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersCritSuccess";
		},

		//add negative effects
		DisplayEffect
		{
			Tags = array{"WhipTransportersFailure"};
			ApplyTo = "Target";
			Duration = 135;
			DisplayGroup = "debuffed";
			DisplayName = "$statusEffect.overwhippedTransporters";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"WhipTransportersFailure"};
			Relation = "Self";
			Duration = 135;
			ResultObjectId = "WhipTransportersFailure";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	CriticalFailureResult = array
	{
		//Remove positive effects if any are active
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{ "WhipTransportersSuccess" };
			ApplyTo = "Target";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersSuccess";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "WhipTransportersCritSuccess";
		},

		//add negative effects
		DisplayEffect
		{
			Tags = array{"WhipTransportersFailure"};
			ApplyTo = "Target";
			Duration = 180;
			DisplayGroup = "debuffed";
			DisplayName = "$statusEffect.overwhippedTransporters";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"WhipTransportersFailure"};
			Relation = "Self";
			Duration = 180;
			ResultObjectId = "WhipTransportersCritFailure";
		},
		
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
};

"PromoteYourBusinesses" = G3ActionTemplate //Promote your businesses
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 23;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionName = "PromoteYourBusinesses";
	DisplayName = "$action.PromoteYourBusinesses";
	Description = "$action.PromoteYourBusinessesDesc";
	Instruction = "$callToAction.PlayerBusiness";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"PromoteOwnBusiness"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage", "Warehouse", "Warehouse_Country"};
			Business = 3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		}				
	};

	Cooldown = 0.0;
	Duration = 0.064; // 0.000011574 = 1 ingame sec | 0.00069444 = 1 ingame min | 0,0416664 = 1 ingame hour !(1 real sec = 0.016666667 ticks)!

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	CanFail = false;
	ShowCombatText = true;
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0.05;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.2};
	};

	DistanceFromTarget = 125;
	DistanceFromTargetMin = 100;
	EnterBuilding = "No";

	InteractionPriority = 5;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"summoning", 0, -1, -1};
	};

//	Dialogue = array {"ACTION_MONOLOGUE", "d.act.PromoteOwnBusiness"}; // Category, id		

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusiness"};
		},
	};
	OnDestinationReachedResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteOwnBusiness"};
		},

		// building has a front store
		DisplayEffect
		{
			Filter = "!Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusiness"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.promotedBusiness";
			Duration = 120.0;
		},
		ModifierEffect // $effect.promotedBusiness
		{
			Filter = "!Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusiness"};
			ActorValue = "Attractiveness";
			Mod = 50;
			Duration = 120;
			Recover = true;
		},

		// building has NO front store
		DisplayEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			Tags = array{"PromoteOwnBusiness"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$action.MotivatedWorkers";
			Duration = 120.0;
		},
		ForwardEffect
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Tags = array{"PromoteOwnBusiness"};
			Relation = "Self";
			Duration = 120;
			ResultObjectId = "PromoteOwnBusinessForeward";
		},
	};
	OnEndResult = array
	{
		FunctionRemoveForward
		{
			Filter = "Target.hasTag.NoFrontStore";
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "PromoteOwnBusinessForeward";
			RemoveTemporaryOnEnd = true;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"PromoteOwnBusiness"};
		},
	};

	SuccessResult = array
	{
	};
};

"BoastAboutYourExploits" = G3ActionTemplate //Boast about your achievements
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 10;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BoastAboutYourExploits";
	DisplayName = "$action.BoastAboutYourExploits";
	Description = "$action.BoastAboutYourExploitsDesc";
	Instruction = "$callToAction.StreetArea";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	
	BaseRewardXP = 21;
	BaseRewardPrestige = 5;
	
	Duration = 0.04;
	SourceRun = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"town_crier1", 0, -1, -1};
	};  

	DestinationsPointOfInterestType = "Boasting";
	
	CanFail = false;
	
	SourceScoreFormula = "Intelligence * 0.5 + Charisma * 0.5";
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
			QuarterSurrounding = -2;
			QuarterVillage = 2;
			QuarterCity = 2;
		}
	};
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.3};
	};

	CriticalFactor = 0.75;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 5;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
	SuccessResult = array
	{
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	
};

"BoastAboutYourExploitsOnStage" = G3ActionTemplate //Boast about your achievements on a rostrum
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 11;

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BoastAboutYourExploitsOnStage";
	DisplayName = "$action.BoastAboutYourExploitsOnStage";
	Description = "$action.BoastAboutYourExploitsDesc";
	Instruction = "$callToAction.OwnStage";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.OwnStage";
	SelectionPromptNoTargetMessage = "$callToAction.OwnStage.PromptNoTarget";

	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"Occupied"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			MatchTargetTags = -3;
			
			EvaluateWhileInProgress = false;
		},
		TargetProfileBuilding
		{
			CloseToActor = 2;
			IncludedTypes = array{"Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			EvaluateByDefault = false;
			EvaluateWhileInProgress = true;
		},
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BoastAboutYourExploitsOnStage"; },
		};
	};
	
	BaseRewardXP = 25;
	BaseRewardPrestige = 8;
	
	Duration = 0.04;
	SourceRun = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"town_crier1", 0, -1, -1};
	};  

	DestinationsPointOfInterestType = "Boasting";
	
	CanFail = false;
	
	SourceScoreFormula = "Intelligence * 0.5 + Charisma * 0.5";
	
	EnterBuilding = "ForceEnter";
	
	MoralAlignmentShift = 0.02;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.4,-0.3,0.1};
	};

	CriticalFactor = 0.75;

	OnStartResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"Occupied"};
			DisplayGroup = "closed";
			Duration = 0.0;
			DisplayName = "$effect.occupied";
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Occupied"};
		},
	};
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 8;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.15";
				}
			}; 
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	
	SuccessResult = array
	{
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 600.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.15";
				}
			}; 
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
};

//Child Actions
"ThrowStones" = G3ActionTemplate //Throw stones
{
	GUIPresent = true;
	UICategory = "Fighting";
	OrderIndex = 5;

	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "ThrowStones";
	DisplayName = "$ThrowStones";
	Description = "$ThrowStonesDesc";
	Instruction = "$callToAction.CharacterConsciousAndAdult";

	ActionActor = "Character";
	TargetActor = "Character";

	SourceScoreFormula = "Strength * 0.5 + Dexterity * 0.5";
	TargetScoreFormula = "Dexterity * 0.75 + Perception * 0.25";
	
	BaseRewardXP = 33;
	
	Duration = 0.0045;
	Cooldown = 0.001;
	
	SourceRun = true;
	
	TargetTags = array{"ThrowStones"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{	
			IsSourceHuman = 3;

			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -2;
				Feud = 2;
			};
			NPC = -2;
			CloseToActor = 2;
			Employee = 2;
			MatchTargetTags = -2;
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		},
		TargetProfileCharacter
		{	
			IsSourceHuman = -3;

			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -3;
				Feud = 2;
			};
			NPC = -2;
			CloseToActor = 2;
			Employee = 2;
			MatchTargetTags = -2;
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, -0.3};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"sabotage", 0, -1, -1};
	};
	
	DistanceFromTarget = 300;

//	AnimationProps = array
//	{
//		PropSpawnDesc { PropNames = array { "throwingrock/throwingrock" }; };
//	};

	CriticalFactor = 0.75;
	
	CriticalSuccessResult =  array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"ThrowStones"};
			Duration = 45;
			DisplayGroup = "unconscious";
			DisplayName = "$effect.HitInTheHead";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"ThrowStones"};
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Duration = 45;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 9;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 10;
			Amount = 0.01;
		},
	};
	
	SuccessResult =  array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"ThrowStones"};
			Duration = 30;
			DisplayGroup = "unconscious";
			DisplayName = "$effect.HitInTheHead";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"ThrowStones"};
			ActorValue = "MovementSpeedMult";
			Mod = -0.10;
			Duration = 30;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-2";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 9;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 10;
			Amount = 0.01;
		},
	};
	
	FailureResult =  array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-5";
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
		}
	};
	
};

"DistractGuard" = G3ActionTemplate //Distract a Guard
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 40;

	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "DistractGuard";
	DisplayName = "$DistractGuard";
	Description = "$DistractGuardDesc";
	Instruction = "$callToAction.CharacterGuard";

	ActionActor = "Character";
	TargetActor = "Character";

	SourceScoreFormula = "Charisma * 0.6 + Intelligence * 0.4";
	TargetScoreFormula = "Intimidation";
	
	BaseRewardXP = 28;
	
	Cooldown = 0.01;
	SourceRun = true;
	
	AskConfirmationOnCancel = false;
	
	TargetTags = array{"DistractGuard"};
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{	
			CloseToActor = 2;
			CityGuard = 3;
			MatchTargetTags = -2;
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3, 0, 0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"mime1", 0, -1, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"rire1", 0, -1, -1};
	};

			
	CriticalFactor = 0.75;
	
	CriticalSuccessResult =  array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"DistractGuard"};
			Duration = 90;
			DisplayGroup = "unconscious";
			DisplayName = "$effect.Distracted";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"DistractGuard"};
			ActorValue = "Perception";
			Mod = -3;
			Duration = 90;
			Recover = true;
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 23;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
	
	SuccessResult =  array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"DistractGuard"};
			Duration = 75;
			DisplayGroup = "unconscious";
			DisplayName = "$effect.Distracted";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"DistractGuard"};
			ActorValue = "Perception";
			Mod = -1;
			Duration = 75;
			Recover = true;
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 23;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
	
	FailureResult =  array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"BlameAnimation"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KidFeelShameAnimation"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-4";
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"BlameAnimation"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"KidFeelShameAnimation"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
		}
	};
};

"SpreadFleas" = G3ActionTemplate //Release the fleas
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 42;

	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "SpreadFleas";
	DisplayName = "$SpreadFleas";
	Description = "$SpreadFleasDesc";
	Instruction = "$callToAction.BuildingNotPlayers";

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "3+Intelligence * 0.5 + Dexterity * 0.25 + Stealth * 0.25";
	TargetScoreFormula = "BuildingSecurity";
	
	BaseRewardXP = 83;
	
	Duration = 0.05;
	Cooldown = 0.25;
	SourceRun = true;
	
	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{	
			IsSourceHuman = 3;

			ExcludedTypes = array{"Statue"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -2;
				Feud = 2;
			};
			MatchTargetTags = -3;
			CloseToActor = 1;
			Business = 2;
			ResourceProducer = -2;
			CityBuilding = -2;
		},
		TargetProfileBuilding
		{	
			IsSourceHuman = -3;

			ExcludedTypes = array{"Statue"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Alliance = -3;
				Feud = 2;
			};
			MatchTargetTags = -3;
			CloseToActor = 1;
			Business = 2;
			ResourceProducer = -2;
			CityBuilding = -2;
		}
	};

	DistanceFromTarget = 25;
	DistanceFromTargetMin = 15;
	EnterBuilding = "No";

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs1", 0, -1, -1};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};
	
	CriticalFactor = 1;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"SpreadingFleas"};
			Duration = 75;
			DisplayGroup = "sick";
			DisplayName = "$effect.InfectedWithFleas";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.01;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"SpreadingFleas"};
			Duration = 75;
			ActorValue = "Attractiveness";
			Mod = -5;
			Recover = true;
		},
		@base/SpreadFleas,
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		@base/InfectionFleasSelf,
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"PlayOutside" = G3ActionTemplate //Go out and play
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 20;
	
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "PlayOutside";
	DisplayName = "$action.PlayWithOthers";
	Description = "$action.PlayWithOthersDesc";
	Instruction = "$callToAction.CharacterChildNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Charisma * 2";
	TargetScoreFormula = "Intimidation * 0.5";
	
	BaseRewardPrestige = 2;
	BaseRewardXP = 25;
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3, 0, 0};
	};

	DistanceFromTarget = 80;
	DistanceFromTargetMin = 80;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"mime1", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"rire1", 0, -1, -1};
	};

	TargetTags = array{"AlreadyPlayed"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			MatchTargetTags = -2;
			CloseToActor = 2;
			Adult = -3;
			FamilyProfile = TargetProfileFamily
			{
				Feud = -2;
				Alliance = 1;
				GoodRelationWithMe = 1;
				PoliticalImportance = 1;
				Rich = 1;
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
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "1";
		};
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"AlreadyPlayed"};
			Duration = 0.01;
		},
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-1";
		};
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"AlreadyPlayed"};
			Duration = 0.02;
		},
	};
};

"StackBoxes" = G3ActionTemplate //Stack boxes at the market
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 22;
	
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "StackBoxes";
	DisplayName = "$action.StackBoxes";
	Description = "$action.StackBoxesDesc";
	Instruction = "$callToAction.BuildingMarket";
	
	ActionActor = "Character";
	TargetActor = "Building";
	
	SourceScoreFormula = "Strength * 2";
	TargetScoreFormula = "Attractiveness * 0.04";

	SuppressBuildingEnterBehavior = true;
	
	Duration = 0.5;
	
	BaseRewardXP = 25;
	
	EnterBuilding = "TryEnter";
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0.3, 0};
	};

	CustomAnimationPool = array
	{
//		CustomAnimationInfo = array {"StackingBoxes1", 0, -1, -1};
		CustomAnimationInfo = array {"StackingBoxes2", 0, -1, -1};
		CustomAnimationInfo = array {"StackingBoxes3", 0, -1, -1};
	};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			IncludedTypes = array{"Market"};
			CloseToActor = 1;
		}
	};
	
	CriticalFactor = 1.0f;
	
	SuccessResult = array
	{
		FunctionGiveMoney
		{
			ApplyTo = "Self";
			Amount = 150;
			IsDiceDependent = true;
		},
		FunctionUpdateRelationship 
		{
			AffectTarget = "4";
		};
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-2";
		};
	};
	
};

"CatchRats" = G3ActionTemplate //Hunt rats
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 21;
	
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "CatchRats";
	DisplayName = "$action.CatchRats";
	Description = "$action.CatchRatsDesc";
	Instruction = "$callToAction.Business";
	
	ActionActor = "Character";
	TargetActor = "Building";
	
	SourceScoreFormula = "Dexterity * 2";
	TargetScoreFormula = "BuildingSecurity * 0.5";
	
	Duration = 0.35;
	
	BaseRewardXP = 35;
	EnterBuilding = "TryEnter";
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0.3, 0};
	};

	TargetTags = array{"RatFree"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			MatchTargetTags = -2;
			Business = 3;
			CloseToActor = 1;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 2;
				Alliance = 2;
				Feud = -2;
				GoodRelationWithMe = 1;
				PoliticalImportance = 1;
				PoliticalImportance = 1;
				Rich = 1;
			};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Intruder"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "destroy1"; },
		};
	};
	
	CriticalFactor = 0.95f;

	CriticalSuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "8";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"RatFree"};
			ActorValue = "Attractiveness";
			Mod = 1;
			Duration = 720;
			Recover = true;
		},
		DisplayEffect 
		{
			ApplyTo = "Target";
			Tags = array{"RatFree"};
			DisplayGroup = "buffed";
			Duration = 720;
			DisplayName = "$buff.RatFree";
		},
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Rat"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "CatchedARat";
		},
		FunctionTriggerAction
		{
			Filter = "IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"TrainRat"};
		},
	};
	
	SuccessResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "6";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"RatFree"};
			ActorValue = "Attractiveness";
			Mod = 1;
			Duration = 720;
			Recover = true;
		},
		DisplayEffect 
		{
			ApplyTo = "Target";
			Tags = array{"RatFree"};
			DisplayGroup = "buffed";
			Duration = 720;
			DisplayName = "$buff.RatFree";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RatFree"};
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -5;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};

	CriticalFailureResult = array
	{
		FunctionUpdateRelationship 
		{
			AffectTarget = "-3";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RatFree"};
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -10;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"ApologizeToNeighbors" = G3ActionTemplate //Apologise to the neighbours
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 23;

	ActionClassName = "TalkToNeighborhoodAction";

	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };

	ActionName = "ApologizeToNeighbors";
	ActionActor = "Character";
	TargetActor = "Coordinate";
	DisplayName = "$action.ApologizeToNeighbors";
	Description = "$action.ApologizeToNeighborsDesc";
	Instruction = "$callToAction.Neighborhood";
	
	SourceScoreFormula = "Charisma";
	TargetScoreFormula = "2";
	
	Duration = 0.1667; // 2 months
	BaseRewardXP = 44;
	CanFail = true;

	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -1;
			QuarterCity = 1;
			QuarterSurrounding = -3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0.3};
	};
	CriticalFactor = 1.0; //no critical
	
	SuccessResult = array{
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "4";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
	
	FailureResult = array{
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "-3";
		}
	};
};

"RaidTheKitchens" = G3ActionTemplate //Raid the kitchens
{
	GUIPresent = true;
	UICategory = "Rogue";
	OrderIndex = 41;
	
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "RaidTheKitchens";
	DisplayName = "$action.RaidTheKitchens";
	Description = "$action.RaidTheKitchensDesc";
	Instruction = "$callToAction.InnOrBakery";
	
	ActionActor = "Character";
	TargetActor = "Building";
	
	SourceScoreFormula = "Dexterity * 2";
	TargetScoreFormula = "BuildingSecurity";
	
	Duration = 0.15;
	Cooldown = 0.75;
	
	BaseRewardXP = 50;
	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, -0.3, 0};
	};
	
	TargetTags = array{"KitchenRaided", "FreemasonsGift"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -2;
			Business = 3;
			CloseToActor = 1;
			IncludedTypes = array{"Inn","Bakery"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -1;
				PoliticalImportance = -1;
				Rich = -1;
			};
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Intruder"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "destroy1"; },
		};
	};
	
	CriticalFactor = 0.8f;
	
	CriticalSuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			DisplayGroup = "buffed";
			DisplayName = "$buff.WeelFed";
			Duration = 540;			
		},
		ModifierEffect 
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			ActorValue = "Health";
			Mod = 25;
			Duration = 540;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			ActorValue = "MovementSpeedMult";
			Mod = 0.15;
			Duration = 540;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"KitchenRaided"};
			DisplayGroup = "debuffed";
			DisplayName = "$debuff.KitchenRaided";
			Duration = 540;			
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"KitchenRaided"};
			ActorValue = "Attractiveness";
			Mod = -25;
			Duration = 540;
			Recover = true;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			DisplayGroup = "buffed";
			DisplayName = "$buff.WeelFed";
			Duration = 360;			
		},
		ModifierEffect 
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			ActorValue = "Health";
			Mod = 20;
			Duration = 360;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"WellFed"};
			ActorValue = "MovementSpeedMult";
			Mod = 0.10;
			Duration = 360;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"KitchenRaided"};
			DisplayGroup = "debuffed";
			DisplayName = "$debuff.KitchenRaided";
			Duration = 360;			
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"KitchenRaided"};
			ActorValue = "Attractiveness";
			Mod = -20;
			Duration = 360;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-3";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
	CriticalFailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-6";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
	
};

"ReadStories" = G3ActionTemplate //Read something out loud
{
	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 40;

	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 }
	};
	
	ActionName = "ReadStories";
	DisplayName = "$action.ReadStories";
	Description = "$action.ReadStoriesDesc";
	Instruction = "$callToAction.Neighborhood";

	ActionActor = "Character";
	TargetActor = "Coordinate";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	DestinationsPointOfInterestType = "Begging";
	
	SourceScoreFormula = "Intelligence+2*Charisma";
	Duration = 0.025;
	Cooldown = 0.025;
	BaseRewardXP = 66;
	CanFail = false;

	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -1;
			QuarterCity = 1;
			QuarterSurrounding = -3;
			Inhabitated = 3;
			CloseToActor = 2;
			OnStreet = 3;
			OnMainStreet = 2;
		}
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	CriticalFactor = 1.0f;
	
	SuccessResult =  array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 5;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "Boast";
			Tags = array{"Boast"};
			SpreadResult = "BoastResult";
			Radius = 300.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = true;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotInCombat"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
};

//Training Actions
"TrainStrength" = G3ActionTemplate //training strength
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 55;
	
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "TrainStrength";
	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$TrainStrength";
	Description = "$TrainStrengthDesc";
	Instruction = "$selectionPrompt.SelectResidence";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeTrainingSpot";

// ForRent CHANGE
	TargetTags = array{"ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			// The following two properties ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
		},
		// Family members or employee
		TargetProfileBuilding
		{					
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			// Any residence building of my family.
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	CanFail = false;
	SourceRun = true;
	AskConfirmationOnCancel = false;
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	Duration = 0.0435; //0.04554111 is the length of the following animations: 8x OH_YES_react1 (4.978 sec), 11x OH_YES_react2 (3.340 sec), 2x WipeForehead (2.669 sec) basis is 1800 sec per year
	Cooldown = 0.25;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Training-Strength"; IsFree = 3; },
		};
	};

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Training-Strength"};
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainStrength";
			Duration = 1125.0; //15h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 1.0;
			Duration = 1125.0; //15h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainStrength";
			Duration = 1350.0; //18h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 1.0;
			Duration = 1350.0; //18h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainStrength";
			Duration = 1575.0; //21h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 1.0;
			Duration = 1575.0; //21h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainStrength";
			Duration = 1800.0; //24h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Strength"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 1.0;
			Duration = 1800.0; //24h
			Recover = true;
		};
	};
};

"TrainDexterity" = G3ActionTemplate //training dexterity
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 56;
	
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionClassName = "SimpleExecutionAction";
	ActionName = "TrainDexterity";
	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$TrainDexterity";
	Description = "$TrainDexterityDesc";
	Instruction = "$selectionPrompt.SelectResidence";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeTrainingSpot";
	
// ForRent CHANGE
	TargetTags = array{"ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			// The following two properties ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
		},
		// Family members or employee
		TargetProfileBuilding
		{					
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			// Any residence building of my family.
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	CanFail = false;
	SourceRun = true;
	AskConfirmationOnCancel = false;
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	Duration = 0.0435; //0.04390556 is the length of the following animations: 5x dance_solo (14.000 sec), 2x Curtsy (2,015 sec), basis is 1800 sec per year
	Cooldown = 0.25;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Training-Dexterity"; IsFree = 3; },
		};
	};
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Training-Dexterity"};
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainDexterity";
			Duration = 1125.0; //15h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 1.0;
			Duration = 1125.0; //15h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainDexterity";
			Duration = 1350.0; //18h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 1.0;
			Duration = 1350.0; //18h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainDexterity";
			Duration = 1575.0; //21h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 1.0;
			Duration = 1575.0; //21h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainDexterity";
			Duration = 1800.0; //24h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Dexterity"};
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 1.0;
			Duration = 1800.0; //24h
			Recover = true;
		};
	};
};

"TrainIntelligence" = G3ActionTemplate //training intelligence
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 57;
	
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionClassName = "SimpleExecutionAction";
	ActionName = "TrainIntelligence";
	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$TrainIntelligence";
	Description = "$TrainIntelligenceDesc";
	Instruction = "$selectionPrompt.SelectResidence";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeTrainingSpot";
	
// ForRent CHANGE
	TargetTags = array{"ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			// The following two properties ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
		},
		// Family members or employee
		TargetProfileBuilding
		{					
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			// Any residence building of my family.
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	CanFail = false;
	SourceRun = true;
	AskConfirmationOnCancel = false;
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	Duration = 0.0435; //0.04707778 is the length of the following animations: 10x idle_readbook1 (8.474 sec), basis is 1800 sec per year
	Cooldown = 0.25;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Training-Intelligence"; IsFree = 3; },
		};
	};
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Training-Intelligence"};
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainIntelligence";
			Duration = 1125.0; //15h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1.0;
			Duration = 1125.0; //15h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainIntelligence";
			Duration = 1350.0; //18h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1.0;
			Duration = 1350.0; //18h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainIntelligence";
			Duration = 1575.0; //21h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1.0;
			Duration = 1575.0; //21h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainIntelligence";
			Duration = 1800.0; //24h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Intelligence"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1.0;
			Duration = 1800.0; //24h
			Recover = true;
		};
	};
};

"TrainPerception" = G3ActionTemplate //training perception
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 58;
	
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionClassName = "SimpleExecutionAction";
	ActionName = "TrainPerception";
	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$TrainPerception";
	Description = "$TrainPerceptionDesc";
	Instruction = "$selectionPrompt.SelectResidence";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeTrainingSpot";
	
// ForRent CHANGE
	TargetTags = array{"ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			// The following two properties ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
		},
		// Family members or employee
		TargetProfileBuilding
		{					
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			// Any residence building of my family.
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	CanFail = false;
	SourceRun = true;
	AskConfirmationOnCancel = false;
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	Duration = 0.0435; //0.04566833 is the length of the following animations: 6x spy1 (4.526 sec), 3x Survey (18.349), basis is 1800 sec per year
	Cooldown = 0.25;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Training-Perception"; IsFree = 3; },
		};
	};
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Training-Perception"};
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainPerception";
			Duration = 1125.0; //15h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 1125.0; //15h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainPerception";
			Duration = 1350.0; //18h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 1350.0; //18h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainPerception";
			Duration = 1575.0; //21h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 1575.0; //21h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainPerception";
			Duration = 1800.0; //24h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Perception"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 1800.0; //24h
			Recover = true;
		};
	};
};

"TrainCharisma" = G3ActionTemplate //training charisma
{
	GUIPresent = true;
	UICategory = "Family";
	OrderIndex = 59;
	
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionClassName = "SimpleExecutionAction";
	ActionName = "TrainCharisma";
	ActionActor = "Character";
	TargetActor = "Building";

	DisplayName = "$TrainCharisma";
	Description = "$TrainCharismaDesc";
	Instruction = "$selectionPrompt.SelectResidence";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$selectionPrompt.SelectResidence";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFreeTrainingSpot";
	
// ForRent CHANGE
	TargetTags = array{"ForRent"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			
			// The following two properties ensure that if the matching building is the character's current building, it will be auto-selected.
			// Make sure the AutoSelect profile comes first, so it will be checked first!
			IsCurrentBuilding = 3;
			AutoSelect = true;
		},
		// Family members or employee
		TargetProfileBuilding
		{					
// ForRent CHANGE
			MatchTargetTags = -3;

			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			// Any residence building of my family.
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	CanFail = false;
	SourceRun = true;
	AskConfirmationOnCancel = false;
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	Duration = 0.0435; //0.04621778 is the length of the following animations: 3x read_love_letter1 (19.366 sec), 3x town_crier1 (7.693 sec), 1x Curtsy (2.015 sec) basis is 1800 sec per year
	Cooldown = 0.25;

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Training-Charisma"; IsFree = 3; },
		};
	};
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Training-Charisma"};
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainCharisma";
			Duration = 1125.0; //15h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Duration = 1125.0; //15h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainCharisma";
			Duration = 1350.0; //18h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Duration = 1350.0; //18h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainCharisma";
			Duration = 1575.0; //21h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Duration = 1575.0; //21h
			Recover = true;
		};
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$TrainCharisma";
			Duration = 1800.0; //24h
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"Training-Charisma"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Duration = 1800.0; //24h
			Recover = true;
		};
	};
};