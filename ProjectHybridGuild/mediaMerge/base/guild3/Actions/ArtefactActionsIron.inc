"DonateBucketOfFruits" = G3ActionTemplate //Paralysis poison
{
	ArtefactName = "BucketOfFruits";
	ActionName = "DonateBucketOfFruits";
	IconName = "BucketOfFruits";
	@base/DonateSimpleFeast
};

"DonateBucketOfTomatos" = G3ActionTemplate //Paralysis poison
{
	ArtefactName = "BucketOfTomatos";
	ActionName = "DonateBucketOfTomatos";
	IconName = "BucketOfTomatos";
	@base/DonateSimpleFeast
};



"ApplyAuDeToilette" = G3ActionTemplate //Paralysis poison
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
		},
		@base/AllNeutralNPCs
	};
	UsableBy = array{ "$loca.key.anyone" };

    IconName = "AuDeToilette",

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Dexterity + (Stealth / 2)";
	TargetScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Perception + Target.hasTag.eventbuffSenseForDanger * 10";	

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
				Alliance = -2;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
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
				Alliance = -3;
				Feud = 2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				PoliticalImportance = -1;
				SocialHigher = 1;
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
	
	ArtefactName = "AuDeToilette";
	BaseRewardXP = 22;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyAuDeToilette";
	DisplayName = "$AuDeToilette.iron.name";
	Description = "$AuDeToilette.iron.desc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,-0.1,-0.1};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};
   
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyAuDeToiletteEffect"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.06;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.05;
		},
	};
	
	FailureResult = array
	{				
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 10.0;
		};

		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictim";
			Duration = 540.0;
		};
		
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictim";
			ActorValue = "Perception";
			Mod = 2.0;
			Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},

		FunctionUpdateRelationship
		{
			AffectTarget = "-15";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "6";
			AffectLiaison = "-25";
		};
	};
};

"SmokeJoint" = G3ActionTemplate //Wheat beer
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
		@base/AdultNeutralNPCs
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 0.2;     //24 hours
	IconName = "Joint";

	ArtefactName = "Joint";
	ActionName = "SmokeJoint";
	DisplayName = "$Joint.iron.name";
	Description = "$Joint.iron.desc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Strength";
	TargetScoreFormula = "8";
	CanFail = true;
	CriticalFactor = 0.8;

    ShowCombatText = true;

	EnterBuilding = "TryEnter";
	
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
		PropSpawnDesc { PropNames = array { "pipe/pipe" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoSmoking"};
			Duration = 450.0;
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$Joint.iron.name";
			Duration = 400.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "GotHigh";
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
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$High.iron.desc";
			Duration = 400.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 400.0;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 2;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.1;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "NiceHigh";
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
			Tags = array{"Drunk", "High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$Joint.iron.name";
			Duration = 400.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "BadFlash";
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
			DisplayGroup = "weed";
			DisplayName = "$High.iron.name";
			Duration = 400.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 400.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.5;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "HorrorFlash";
        },
	};
};


"AdultThrowStones" = G3ActionTemplate //Stink bomb
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ArtefactName = "ThrowingStones";
	ActionActor = "Character";
	
	TargetActor = "Character";


	
	ActionName = "AdultThrowStones";
	
	SourceScoreFormula = "Strength * 0.5 + Dexterity * 0.5";
	TargetScoreFormula = "Dexterity * 0.75 + Perception * 0.25";
	
	DisplayName = "$StinkBomb";
	Description = "$StinkBombDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";

	Cooldown = 0.04; //~1 hour
	BaseRewardXP = 27;
	IsAggression = true; 
	IsImmediatelyKnownByTarget = false;
	
	CanFail = true; 
	
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
			
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,-0.1,-0.1};
	};					
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"sabotage", 0, -1, -1};
	};


	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "throwingrock/throwingrock" }; };
	};
	CanFail = true;
	CriticalFactor = 0.8;
   
	DistanceFromTarget = 600;
	DistanceFromTargetMin = 600;

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bomb/bomb" }; };
	};
			
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


	SuccessResult = array
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

"GiveJoint" = G3ActionTemplate //Give a gingerbread
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
			MinAge = 15;
		}
	};
	UsableBy = array{ "$characters.Age.Adult", "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	

	IconName = "Joint";
	ActionName = "GiveJoint";
	ArtefactName = "Joint";
	DisplayName = "$GiveJoint.iron.name";
	Description = "$GiveJoint.iron.desc";
	Instruction = "$callToAction.CharacterNotPlayers";
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SourceScoreFormula = "Charisma * 2 + Target.DoesHaveTag.RomPrefPresent * 2";
	TargetScoreFormula = "Intelligence * 0.2";
	
	Cooldown = 0.01;
	BaseRewardXP = 28;
		
	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			CloseToActor = 2;
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
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 10;
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
			ApplyTo = "Target";
			Actions = array{"SimpleSmokeJoint"};
		}
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
			ApplyTo = "Target";
			Actions = array{"SimpleSmokeJoint"};
		}
	};
	
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Target";
			Actions = array{"SimpleSmokeJoint"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-4";
		}
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
		}
	};
};

"SimpleSmokeJoint" = G3ActionTemplate //Wheat beer
{
	ActionClassName = "SimpleExecutionAction";

	GUIPresent = false;

	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 0.02;     //24 hours
	IconName = "Joint";

	ArtefactName = "Joint";
	ActionName = "SimpleSmokeJoint";
	DisplayName = "$Joint.iron.name";
	Description = "$Joint.iron.desc";

	// FailureResult and CriticalFailureResult only
	// because 0 is still a tiny chance for a success, we keep CriticalSuccessResult and SuccessResult...
	SourceScoreFormula = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Strength";
	TargetScoreFormula = "8";
	CanFail = true;
	CriticalFactor = 0.8;

    ShowCombatText = true;

	EnterBuilding = "TryEnter";
	
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
		PropSpawnDesc { PropNames = array { "beaker/beaker" }; };
	};

	OnEndResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoSmoking"};
			Duration = 450.0;
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Inebriate";
			Duration = 10.0;
		},
		DisplayEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$Joint.iron.name";
			Duration = 400.0;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "GotHigh";
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
			Tags = array{"High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$High.iron.desc";
			Duration = 400.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 400.0;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 2;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Duration = 400.0;
			Recover = true;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.1;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "NiceHigh";
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
			Tags = array{"Drunk", "High"};
			ApplyTo = "Self";
			DisplayGroup = "weed";
			DisplayName = "$Joint.iron.name";
			Duration = 400.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "BadFlash";
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
			DisplayGroup = "weed";
			DisplayName = "$High.iron.name";
			Duration = 400.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"LoveDebuff"};
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"High"};
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -1;
			Duration = 400.0;
			Recover = true;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 400.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","High"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.5;
			Duration = 400.0;
			Recover = true;
		},
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "HorrorFlash";
        },
	};
};


"UseSpeedPotion" = G3ActionTemplate //Endurance potion
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
	Cooldown = 0.5;     //12 hours
	IconName = "SpeedPotion";


	ArtefactName = "SpeedPotion";
	ActionName = "UseSpeedPotion";
	DisplayName = "$SpeedPotion.action.iron.name";
	Description = "$SpeedPotion.action.iron.desc";

	SourceScoreFormula = "MedicineMastery";
	TargetScoreFormula = "4";
	
	BaseRewardXP = 10;

	EnterBuilding = "TryEnter";
	
	CanFail = true;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,-0.5,0};
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
			Tags = array{"SpeedPotion", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$EndurenceDrink";
			Duration = 360.0;
		};
		ModifierEffect
		{
			Tags = array{"SpeedPotion"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.50;
			Duration = 360.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
	};
	
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "SpeedPotion", "UncontrollablyDrunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Inebriated";
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Poisoned";
			Duration = 25.0;
		}
	};
};
