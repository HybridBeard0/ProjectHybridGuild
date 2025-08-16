"UseDrunkardBrewBeer" = G3ActionTemplate //Guntram's brew
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	
	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0";
	TargetScoreFormula = "100";
	CanFail = true;
	CriticalFactor = 0.8;
	
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "DrunkardBrewBeer";
	ActionName = "UseDrunkardBrewBeer";
	DisplayName = "$DrunkardBrewBeer";
	Description = "$DrunkardBrewBeerDesc";

	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "antidote/antidote" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$DrunkardBrewBeer";
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Drunken"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.07;
			Recover = true;
			@base/BuffFoodCharacter
		};
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$DrunkardBrewBeer";
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Drunken"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.07;
			Recover = true;
			@base/BuffFoodCharacter
		};
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$DrunkardBrewBeer";
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		};
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$DrunkardBrewBeer";
			@base/BuffFoodCharacter
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		};
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"UseBoozyBreathBeer" = G3ActionTemplate //Boozy breath beer
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "(Charisma + Stealth) * 1.5";
	TargetScoreFormula = "(Perception + Intelligence) * 0.75";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = 1;
				SocialHigher = -1;
			};
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

			Adult = 3;
			CloseToActor = 1;
			Boat = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = 1;
				SocialHigher = -1;
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

	ArtefactName = "BoozyBreathBeer";
	BaseRewardXP = 18;
	Cooldown = 0.04167; //1 hour

	ActionName = "UseBoozyBreathBeer";
	DisplayName = "$BoozyBreathBeer";
	Description = "$BoozyBreathBeerDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = false;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.2,-0.2,-0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 0, -1, -1};
	};
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};
   
	DistanceFromTarget = 45;
	DistanceFromTargetMin = 45;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"DrinkingBeer"};
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 2.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "BadBreath", "BoozyBreathBeer"};
			ApplyTo = "Target";
			DisplayGroup = "drunk";
			DisplayName = "$BoozyBreathBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"BadBreath", "BoozyBreathBeer"};
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = -3.0;
			Recover = true;
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"BadBreath", "BoozyBreathBeer"};
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -0.1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.01;
		},
	};
	
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-4";
			AffectLiaison = "-10";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertCharacter"};
		};
	};
};

"DrinkMead" = G3ActionTemplate //Mead
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "Mead";
	ActionName = "DrinkMead";
	DisplayName = "$Mead";
	Description = "$MeadDesc";

	EnterBuilding = "TryEnter";
	
	CanFail = false;
	CriticalFactor = 1;

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};
	
	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Mead";
			@base/BuffFoodCharacter
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Influenza"};
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"EatCake" = G3ActionTemplate //Gingerbread
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			MinAge = 5;
		}
	};
	UsableBy = array{ "$characters.Age.Adult", "$characters.Age.Child" };

	ActionActor = "Character";

	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "Cake";
	ActionName = "EatCake";
	DisplayName = "$Cake";
	Description = "$CakeDesc";
	Instruction = "$callToAction.Character";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 28;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "Charisma";
	TargetScoreFormula = "0";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"eat", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bread/bread" }; };
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$Cake";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = -1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"GiveCake" = G3ActionTemplate //Give a gingerbread
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			MinAge = 5;
		}
	};
	UsableBy = array{ "$characters.Age.Adult", "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "GiveCake";
	ArtefactName = "Cake";
	DisplayName = "$Cake";
	Description = "$CakeDesc";
	Instruction = "$callToAction.CharacterNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "Charisma * 2 + Target.DoesHaveTag.RomPrefPresent * 2";
	TargetScoreFormula = "Intelligence * 0.2";
	
	Cooldown = 0.5;
	BaseRewardXP = 28;
		
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
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
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"MakePresent", 5, 54, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"AcceptPresent", 0, -1, -1};
	};
	
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.25,0.1};
	};

	CriticalFactor = 0.9;
	
	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "7";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
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
		},
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "4";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
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
		},
	};
	
	FailureResult = array
	{
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
		},
	};
	
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-4";
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
		},
	};
};

"EatCreamPie" = G3ActionTemplate //Cream cake
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";

	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "CreamPie";
	ActionName = "EatCreamPie";
	DisplayName = "$CreamPie";
	Description = "$CreamPieDesc";
	Instruction = "$callToAction.Character";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 28;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "Charisma";
	TargetScoreFormula = "0";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"EatCreamPie", 0, -1, -1};
	};
	// Animation Props
	//AnimationProps = array
	//{
	//	PropSpawnDesc { PropNames = array { "bread/bread" }; };
	//};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"CreamPie"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$CreamPie";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"CreamPie"};
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = 50;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"GiveCreamPie" = G3ActionTemplate //Give a cream cake
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "GiveCreamPie";
	ArtefactName = "CreamPie";
	DisplayName = "$GiveCreamPie";
	Description = "$CreamPieDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "RelationshipScore / 20 + Charisma * 2 + Target.DoesHaveTag.RomPrefPresent * 2";
	TargetScoreFormula = "Intelligence * 0.2";
	
	Cooldown = 0.04;
	BaseRewardXP = 28;
	ShowSelectionPrompt = "LoverCharacters";
	SelectionPromptNoTargetMessage = "$gui.no.lovers";
		
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			OppositeGender = 3;
			Leader = -3; 
			NPCGuard = -3;  
			Employee = -3;
			InLoveWithMe = 3;
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
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"GiveCreampie", 5, 54, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"AcceptPresent", 0, -1, -1};
	};
	
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.1,0.25,0.1};
	};

	CriticalFactor = 0.80;
	
	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "(37 + (Target.hasTag.RomPrefPresent * 6)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.Artist", "RomPref.MoreDistance", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
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
		},
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "(33 + (Target.hasTag.RomPrefPresent * 3)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = -0.02;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = 0.03;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = 0.02;
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
		},
	};
	
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5;
		},
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
		},
	};
	
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 5;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-12 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
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
		},
	};
};

"EatEgg" = G3ActionTemplate
{
	ActionClassName = "UseArtefactAction";
	IconName = "Egg";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			MinAge = 5;
		}
	};
	UsableBy = array{ "$characters.Age.Adult", "$characters.Age.Child" };

	ActionActor = "Character";

	UICategory = "Artifact";

	ArtefactName = "Egg";
	ActionName = "EatEgg";
	DisplayName = "$Egg";
	Description = "$EggDesc";
	
	BaseRewardXP = 2;
	
	CanFail = false;
	CriticalFactor = 1;

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"eat", 0, -1, -1};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Egg"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$Egg";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Egg"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"EatFriedChicken" = G3ActionTemplate
{
	ActionClassName = "UseArtefactAction";
	IconName = "FriedChicken";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			MinAge = 5;
		}
	};
	UsableBy = array{ "$characters.Age.Adult", "$characters.Age.Child" };

	ActionActor = "Character";

	UICategory = "Artifact";
	//Cooldown = 1.0;     //24 hours

	ArtefactName = "FriedChicken";
	ActionName = "EatFriedChicken";
	DisplayName = "$FriedChicken";
	Description = "$FriedChickenDesc";
	
	BaseRewardXP = 5;
	
	CanFail = false;
	CriticalFactor = 1;

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"eat", 0, -1, -1};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"FriedChicken"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$FriedChicken";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"FriedChicken"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"DrinkJuice" = G3ActionTemplate //Juice
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			//IsControlledByHuman = 1;
		}
	};
	UsableBy = array{ "$qs.charactertype.0" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 0.125;     //3 hours

	ArtefactName = "Juice";
	ActionName = "DrinkJuice";
	DisplayName = "$Juice";
	Description = "$JuiceDesc";

	SourceScoreFormula = "10";
	TargetScoreFormula = "1";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 7;
	
	CanFail = false;
	CriticalFactor = 1;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};
	
	SuccessResult = array
	{
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.005;
		}
	};
};

"DrinkCider" = G3ActionTemplate //Cider
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 0.25;     //6 hours

	ArtefactName = "Cider";
	ActionName = "DrinkCider";
	DisplayName = "$Cider";
	Description = "$CiderDesc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0";
	TargetScoreFormula = "100";
	CanFail = true;
	CriticalFactor = 0.9;

	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.005;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalSuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};	
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.005;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
};

"DrinkSmallBeer" = G3ActionTemplate //Weak beer
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "SmallBeer";
	ActionName = "DrinkSmallBeer";
	DisplayName = "$SmallBeer";
	Description = "$SmallBeerDesc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0";
	TargetScoreFormula = "100";
	CanFail = true;
	CriticalFactor = 0.9;

	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	CriticalSuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Recover = true;
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		}
	};
};

//"DrinkStrongBeer" = G3ActionTemplate //Strong beer
//{
//	ActionClassName = "UseArtefactAction";
//
//	GUIPresent = true;
//	GUIData = array
//	{
//		ActionGUIData
//		{
//			IsCharacter = 1;
//			IsFamilyMember = 1;
//			BelongsToOwnFamily = 1;
//			IsAdult = 1;
//			IsControlledByHuman = 1;
//		},
//		ActionGUIData
//		{
//			IsCharacter = 1;
//			IsFamilyMember = 1;
//			BelongsToOwnFamily = 1;
//			IsAdult = 1;
//			IsControlledByHuman = -1;
//			DoesNotHaveTag = "NoDrinking";
//		}
//	};
//
//	ActionActor = "Character";
//	UICategory = "Artifact";
//	Cooldown = 1.0;     //24 hours
//
//	ArtefactName = "StrongBeer";
//	ActionName = "DrinkStrongBeer";
//	DisplayName = "$StrongBeer";
//	Description = "$StrongBeerDesc";
//
//	SourceScoreFormula = "1";
//	TargetScoreFormula = "1";
//
//	EnterBuilding = "TryEnter";
//	
//	BaseRewardXP = 16;
//	
//	CanFail = true;
//	CriticalFactor = 1;
//
//	MoralAlignmentShift = 0;
//	MoralAlignment = MoralAlignment
//	{
//		Values = array{0, 0, 0};
//	};
//
//	// Animation Character
//	CustomAnimationPool = array
//	{
//		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
//	};
//	// Animation Props
//	AnimationProps = array
//	{
//		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
//	};
//	
//	OnEndResult = array
//	{
//		TagEffect
//		{
//			ApplyTo = "Self";
//			Tags = array{"NoDrinking"};
//			Duration = 450.0;
//		},
//	};
//	SuccessResult = array
//	{
//		VisualEffect
//		{
//			ApplyTo = "Self";
//			VisualName = "Inebriate";
//			Duration = 1.0;
//		},
//		DisplayEffect
//		{
//			Tags = array{"Drunk", "Drunken"};
//			ApplyTo = "Self";
//			DisplayGroup = "drunk";
//			DisplayName = "$StrongBeer";
//			Duration = 200.0;
//		},
//		ModifierEffect
//		{
//			Tags = array{"Slow","Drunken"};
//			ApplyTo = "Self";
//			ActorValue = "Strength";
//			Mod = 3;
//			Duration = 200.0;
//			Recover = true;
//		},
//		ModifierEffect
//		{
//			Tags = array{"Slow","Drunken"};
//			ApplyTo = "Self";
//			ActorValue = "Intelligence";
//			Mod = -2;
//			Duration = 200.0;
//			Recover = true;
//		},
//		FunctionAffectNeeds
//		{
//			ApplyTo = "Target";
//			ProductType = 2;
//			Amount = -0.01;
//		},
//	};
//	
//	FailureResult = array
//	{
//		FunctionTriggerAction
//		{
//			ApplyTo = "Source";
//			Actions = array{"Drunk"};
//		},
//		DisplayEffect
//		{
//			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
//			ApplyTo = "Self";
//			DisplayGroup = "drunk";
//			DisplayName = "$Inebriated";
//			Duration = 25.0;
//		},
//		VisualEffect
//		{
//			ApplyTo = "Self";
//			Tags = array{"Endurance", "UncontrollablyDrunk"};
//			VisualName = "Poisoned";
//			Duration = 25.0;
//		}
//	};
//};

"DrinkBrewerBeer" = G3ActionTemplate //Barrel of brewer beer
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "BarrelBrewerBeer";
	ActionName = "DrinkBrewerBeer";
	DisplayName = "$BarrelBrewerBeer";
	Description = "$BarrelBrewerBeerDesc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0";
	TargetScoreFormula = "100";
	CanFail = true;
	CriticalFactor = 0.9;
	
	EnterBuilding = "TryEnter";

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalSuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
};

"DrinkWheatBeer" = G3ActionTemplate //Wheat beer
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = 1;
		},
		ActionGUIData
		{
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsControlledByHuman = -1;
			DoesNotHaveTag = "NoDrinking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "WheatBeer";
	ActionName = "DrinkWheatBeer";
	DisplayName = "$WheatBeer";
	Description = "$WheatBeerDesc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0";
	TargetScoreFormula = "100";
	CanFail = true;
	CriticalFactor = 0.8;

	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoDrinking"};
			@base/BuffFoodCharacter
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalSuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
	CriticalFailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Endurance", "UncontrollablyDrunk", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			@base/BuffFoodCharacter
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			@base/BuffFoodCharacter
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Recover = true;
			@base/BuffFoodCharacter
		},
	};
};

"UseFortuneCake" = G3ActionTemplate //Small cake of joy
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Character";

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			NPCGuard = -3;  
			Employee = -3;
			Boat = -3;
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
	
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "FortuneCake";
	ActionName = "UseFortuneCake";
	DisplayName = "$FortuneCake";
	Description = "$FortuneCakeDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	BaseRewardXP = 16;
	
	CanFail = true;
	CriticalFactor = 1;

	EnterBuilding = "TryEnter";

	SourceScoreFormula = "Charisma";
	TargetScoreFormula = "Intelligence * 0.25";
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 5, 54, -1};
	};
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 0, -1, -1};
	};

	// Animation Props	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bread/bread" }; };
	};

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"Eat"};
		},
		DisplayEffect
		{
			Tags = array{"FortuneCake"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$FortuneCake";
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"FortuneCake"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = 80;
			Recover = true;
			@base/BuffFoodCharacter
		},
		ModifierEffect
		{
			Tags = array{"FortuneCake"};
			ApplyTo = "Target";
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Recover = true;
			@base/BuffFoodCharacter
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "15";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
	
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-6";
		}
	};
};

"GiveAFamilyFeast" = G3ActionTemplate //Give a family feast
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{					
			IncludedTypes = array{"Mansion"};
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			IsCurrentBuilding = 3;
			AutoSelect = true;
		};
		TargetProfileBuilding
		{
			IncludedTypes = array{"Mansion"};
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
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
			TargetProfileSnapPoint{ Context = "FamilyFeastActor"; },
		};
	};
	
	UICategory = "Artifact";
	Cooldown = 1.0;
	CooldownFamilyWide = true;
	Duration = 0.025;

	BaseRewardXP = 100;

	ArtefactName = "Banquet";
	ActionName = "GiveAFamilyFeast";
	DisplayName = "$GiveAFamilyFeast";
	Description = "$GiveAFamilyFeastDesc";
	Instruction = "$callToAction.ResidencePlayersSalon";
	ShowSelectionPrompt = "UseTargetProfile";

	CanFail = false;
	CriticalFactor = 1;

	//SuppressBuildingEnterBehavior = true;
	EnterBuilding = "TryEnter";

	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.4,0};
	};

	OnStartResult = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"Feast"};
			Duration = 0.0;
		},
	};
	OnEndResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Feast"};
		},
	};
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"HeirHumiliation", "deeplydisappointed", "HandHumiliation"};
		},
		ModifierEffect
		{
			Tags = array {"FamilyFeast"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
			@base/BuffFoodCharacter
		},
		SpreadEffect
		{
			ApplyTo = "Source";
			UniqueTag = "FamilyFeast";
			SpreadResult = "FamilyFeastAllFamilyMembers"; // ResultObjectsDefault.oc
			Radius = 5000.0;
			Duration = 0.005;
			SpreadChance = 0; // Chance to spread from affected character to the next character
			SpreadToEveryone = true; // if true then spread to everyone per tick
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"IsInSameRoom", "hasNotTag.Sleeping", "IsConscious"};
					TargetScoreFormula = "0";
				}
			}; 
		},
	};
};

"GivePublicBanquet" = G3ActionTemplate //Hold a banquet for the people
{
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/OwnFamilyAdults,
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "SimpleExecutionAction";
	
	ActionName = "GivePublicBanquet";
	DisplayName = "$action.GivePublicBanquet";
	Description = "$action.GivePublicBanquetDesc";
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
			TargetProfileSnapPoint{ Context = "GivePublicBanquet"; },
		};
	};
	
	BaseRewardXP = 75;

	Duration = 0.083;
	Cooldown = 1.0;
	CooldownFamilyWide = true;

	DestinationsPointOfInterestType = "PublicBanquet";
	
	MoralAlignmentShift = 0.4;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.6,0};
	};

	CanFail = false;
	CriticalFactor = 1.0;
	ShowCombatText = true;

	SourceScoreFormula = "Charisma";

	EnterBuilding = "ForceEnter";

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

	SuccessResult = array
	{
		FunctionTransferItems
		{
			Giver = "Source";
			Receiver = "";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Banquet"};
		},
		SpreadEffect
		{
			ApplyTo = "Source";
			UniqueTag = "PublicBanquet";
			SpreadResult = "PublicBanquetResult"; // ResultObjectsDefault.oc
			Radius = 900.0;
			Duration = 1;
			SpreadChance = 0; // Chance to spread from affected character to the next character
			SpreadToEveryone = true; // if true then spread to everyone per tick
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"Outside", "IsConscious", "NotInCombat", "NotFleeing", "hasNotTag.NPCGuard", "hasTag.NPC"};
					TargetScoreFormula = "0.05";
				}
			};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"GivePublicBanquetOver"};
		},
	};
};

"GivePublicBanquetOver" = G3ActionTemplate //Hold a banquet for the people
{
	GUIPresent = false;

	ActionActor = "Character";

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";
	
	Duration = 0.0;

	ActionName = "GivePublicBanquetOver";
	DisplayName = "$action.GivePublicBanquet";
	Description = "$action.GivePublicBanquetDesc";

	ActionClassName = "SimpleExecutionAction";

	CanFail = false;
	CriticalFactor = 0.95;
	ShowCombatText = true;

	CriticalSuccessResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "6";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Compliment";
			Tags = array{"GivePublicBanquetOver"};
			Duration = 2;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "3";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	FailureResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-2";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
	FailureResult =  array
	{
		FunctionUpdateRelationship
		{
			ApplyTo = "Source";
			AffectCurrentNeighborhoodToSource = "-4";
		},
		VisualEffect
		{
			ApplyTo = "Source";
			VisualName = "Insulted";
			Tags = array{"GivePublicBanquetOver"};
			Duration = 2;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
	};
};