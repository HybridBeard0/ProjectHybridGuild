//Actions to change the family religion
"BuyReligion" = G3ActionTemplate // 'Launch'-action for going to the baptismal font and then starting 'BuyCathlic', 'BuyNoReligion' or 'BuyProtestant'
{
	UICategory = "Religion";
	OrderIndex = 5;
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyReligion";
	DisplayName = "$action.BuyReligion";
	Description = "$action.BuyReligionDesc";
	Instruction = "$callToAction.BuildingChurch";

	ShowSelectionPrompt = "UseTargetProfile";
	SelectionPromptCallToAction = "$callToAction.BuildingChurch";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoBuildingChurch";
	HideSelectionPromptCancelButton = true;

	ActionActor = "Character";
	TargetActor = "Building";

	//BaseRewardXP = 50;
	
	//Cooldown = 1.0;
	SourceRun = true;
	
	CanFail = false;
	Duration = 99999.0; // No timeout. The action ends when the prompt is confirmed / canceled.
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
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
		}
	};
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Animations = array 
		{
			TargetSnapPointAnimation{ Animation = "idle1"; Repeat = -1; },
		};

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	OnDestinationReachedResult = array
	{
		ShowCustomPrompt
		{
			ForceHotStorage = true;
			UI = "ChangeReligionWindow";
		},
	};
};

"BuyCatholic" = G3ActionTemplate //Convert to the Catholic faith
{
	UICategory = "Religion";
	OrderIndex = 5;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyCatholic";
	DisplayName = "$action.BuyCatholic";
	Description = "$action.BuyCatholicDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 50;
	
	PriceFormula = "SocialLevel * 400";
	BudgetPot = "Diplomacy";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;

	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		@base/ReligionCatholicVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "CatholicPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionCatholic";
		},
		// Relationship change between my family and all secular families
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstNeutrals = false;
			SecondGroup = "NoReligion";
			SecondNeutrals = true;
			ChangeFormula = "First.SocialLevel * -2";
		},
	};
};

"BuyProtestant" = G3ActionTemplate //Convert to the Protestant faith
{
	UICategory = "Religion";
	OrderIndex = 7;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyProtestant";
	DisplayName = "$action.BuyProtestant";
	Description = "$action.BuyProtestantDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 50;
	
	PriceFormula = "SocialLevel * 400";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;
	
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		@base/ReligionProtestantVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "ProtestantPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionProtestant";
		},
		// Relationship change between my family and all secular families
		FunctionUpdateGroupRelationship
		{
			FirstContext = "Source";
			FirstGroup = "Family";
			FirstNeutrals = false;
			SecondGroup = "NoReligion";
			SecondNeutrals = true;
			ChangeFormula = "First.SocialLevel * -2";
		},
	};
};

"BuyNoReligion" = G3ActionTemplate //Leave your religious faith
{
	UICategory = "Religion";
	OrderIndex = 6;
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Religious";
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "BuyNoReligion";
	DisplayName = "$action.BuyNoReligion";
	Description = "$action.BuyNoReligionDesc";
	Instruction = "$callToAction.BuildingChurch";

	ActionActor = "Character";
	TargetActor = "Building";

	BaseRewardXP = 75;
	
	PriceFormula = "SocialLevel * 400";
	
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	SourceRun = true;
	
	CanFail = false;
	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "Intelligence";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			CityBuilding = 3;
			IncludedTypes = array{"Church", "cathedrale"};
		}
	};
		
	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = false;
		ShouldOccupy = true;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "BuyReligion"; },
		};
	};
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0,0};
	};

	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		// Relationship change between my family and all families of the same religion
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
			ChangeFormula = "First.SocialLevel * -2";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"BuyNoReligionExecution"};
		},
	};
};

"BuyNoReligionExecution" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "BuyNoReligionExecution";
	DisplayName = "$action.BuyNoReligion";
	Description = "$action.BuyNoReligionDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	CanFail = false;
	CriticalFactor = 1.0;
	EnterBuilding = "TryEnter";
	
	SuccessResult =  array
	{
		@base/ReligionSecularVisualEffect_Source,
		FunctionApplyResults
		{
			ApplyTo = "Source";
			ResultObjectIds = array{"RemoveReligionForwards", "SecularPlayerForward"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Broadcast = true;
			Description = "ChangeReligionNeutral";
		},
	};
};

// special action for Catholics
"LetterFromInquisition" = G3ActionTemplate //Letter from the inquisition
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 30;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Catholic";
		},
	};
	UsableBy = array{ "$guiLeader" };
	
	ActionName = "LetterFromInquisition";
	DisplayName = "$LetterFromInquisition";
	Description = "$LetterFromInquisitionDesc";
	Instruction = "$callToAction.AdultProtestant";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Intelligence + Intimidation";
	TargetScoreFormula = "(Intelligence * 0.5) + (Perception * 0.75)";
	
	Duration = 0.0033;
	Cooldown = 1.5;
	BaseRewardXP = 138;
	CanFail = true;
	CriticalFactor = 1.0;
	PriceFormula = "100";
	CurrencyType = "Prestige";
		
	TargetTags = array{"Protestant"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
				Rich = 2;
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
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				Rich = 2;
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
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.7,-0.3,0.7}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	DistanceFromTarget = 2000;
	DistanceFromTargetMin = 250;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	SuccessResult =  array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = -2.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intimidation";
			Mod = -2.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = -0.5;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Duration = 270;
			Recover = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfLetterOfInquisitionSuccess";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-8";
			AffectTargetSocietyMembers = "-8";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfLetterOfInquisitionFailure";
		}
	};
};

// special action for Protestants
"InitiateIntrigue" = G3ActionTemplate //Sneaky intrigue
{
	UICategory = "Religion";
	GUIPresent = true;
	OrderIndex = 35;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Protestant";
		},
	};
	UsableBy = array{ "$guiLeader" };
	
	ActionName = "InitiateIntrigue";
	DisplayName = "$InitiateIntrigue";
	Description = "$InitiateIntrigueDesc";
	Instruction = "$callToAction.AdultCatholic";

	ActionActor = "Character";
	TargetActor = "Character";

	ActionClassName = "SimpleExecutionAction";
	
	SourceRun = true;
	
	SourceScoreFormula = "Intelligence + Intimidation";
	TargetScoreFormula = "(Intelligence * 0.5) + (Perception * 0.75)";
	
	Duration = 0.0033;
	Cooldown = 1.5;
	BaseRewardXP = 138;
	CanFail = true;
	CriticalFactor = 1.0;
	PriceFormula = "100";
	CurrencyType = "Prestige";
		
	TargetTags = array{"Catholic"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
				Rich = 2;
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
		TargetProfileCharacter
		{
			IsSourceHuman = -3;

			Adult = 3;
			Boat = -3;
			CloseToActor = 2;
			MatchTargetTags = 3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
				Rich = 2;
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
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.5,-0.2}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	DistanceFromTarget = 2000;
	DistanceFromTargetMin = 250;

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	SuccessResult =  array
	{
		FunctionTransferPrestige
		{
			Giver = "Target";
			Amount = 500;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "PrestigeGainMult";
			Mod = -1.0;
			Duration = 270;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -1.0;
			Duration = 270;
			Recover = true;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfIntrigueSuccess";
		}
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-8";
			AffectTargetSocietyMembers = "-8";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfIntrigueFailure";
		}
	};
};