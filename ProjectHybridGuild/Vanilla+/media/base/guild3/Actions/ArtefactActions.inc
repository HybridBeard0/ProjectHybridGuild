//-------------------AGGRESSIVE ITEMS-------------------//
"UseSkullLamp" = G3ActionTemplate //Place skull lamp
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

	ArtefactName = "SkullLamp";
	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"Cursed", "FreemasonsGift"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			CityBuilding = -3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				SocialHigher = 1;
				PoliticalImportance = -1;
			};
		}
	};

	SourceScoreFormula = "(Dexterity / 2) + Intimidation + (Stealth / 2)";
	TargetScoreFormula = "(Level / 3) + (2 * BuildingSecurity)";
	
	CanFail = true;
	IsAggression = true;
	
	Cooldown = 0.005;
	Duration = 0.001;
	
	BaseRewardXP = 35;
	
	ActionName = "UseSkullLamp";
	DisplayName = "$action.SkullLamp";
	Description = "$action.SkullLampDesc";
	Instruction = "$callToAction.BusinessNotPlayers.NotMatchingTags";

	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.1,0,-0.1};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"reap_herbs1", 0, -1, -1};
	};
   
	DistanceFromTarget = 4;
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Target";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.cursed";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"Cursed"};
			ActorValue = "BuildingSecurity";
			Mod = -2.0;
			Recover = true;
			@base/DebuffBuilding
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.cursed";
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Self";
			ActorValue = "Intimidation";
			Mod = -2;
			Recover = true;
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = -1;
			Recover = true;
			@base/DebuffCharacter
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		};
	};
};

"ThrowBomb" = G3ActionTemplate //Bomb
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

	ArtefactName = "Bomb";

	ActionActor = "Character";
	TargetActor = "Building";
	
	ActionName = "ThrowBomb";
	
	SourceScoreFormula = "Intelligence + Strength + (Stealth / 2)";
	TargetScoreFormula = "BuildingSecurity + FireProtection";

	DisplayName = "$Bomb";
	Description = "$BombDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";

	BaseRewardXP = 20;
	Cooldown = 0.04167; //1 hour
	
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				SocialHigher = 1;
				PoliticalImportance = -1;
			};
		}
	};
	
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.5,-0.7};
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
	};
	CanFail = true;
	IsImmediatelyKnownByTarget = true;
	IsAggression = true;
	CriticalFactor = 0.95;

	DistanceFromTarget = 600;
	DistanceFromTargetMin = 600;
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bomb/bomb" }; };
	};
   
	CriticalSuccessResult = array
	{
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -40;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStatue";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -4;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -80;
			Duration = 0;
			Recover = false;
		},
		FunctionPickRandom
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
			ResultObjectIds =  array{"StartFireLow"};
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.05;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.05;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	
	SuccessResult = array
	{
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -25;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStatue";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -2;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -50;
			Duration = 0;
			Recover = false;
		},
        FunctionTriggerAction
        {
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
            ApplyTo = "Source";
			ActionTarget = "Target";
            Actions = array{"StartFireMidChance"};
        },
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.05;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 3;
			Amount = 0.05;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	
	FailureResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -20;
			Duration = 0;
			Recover = false;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectCurrentNeighborhoodToSource = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		};
	};

	CriticalFailureResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -40;
			Duration = 0;
			Recover = false;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectCurrentNeighborhoodToSource = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertBuilding"};
		};
	};
};

"StartFireMidChance" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "StartFireMidChance";
	ActionClassName = "G3Action";

	ShowCombatText = false;
	CanFail = true;

	ActionActor = "Character";
	TargetActor = "Building";

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	SuccessResult = array
	{
 		FunctionPickRandom
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
			ResultObjectIds =  array{"StartFireLow"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10 + min(Source.Stealth / 2, 5)";
			AffectTargetAllies = "-3 + min(Source.Stealth / 4, 3)";
			AffectTargetEnemies = "3 - min(Source.Stealth / 4, 3)";
			AffectCurrentNeighborhoodToSource = "-3 + min(Source.Stealth / 2, 3)";
		};
	};
	FailureResult = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-10 + min(Source.Stealth / 2, 5)";
			AffectTargetAllies = "-3 + min(Source.Stealth / 4, 3)";
			AffectTargetEnemies = "3 - min(Source.Stealth / 4, 3)";
			AffectCurrentNeighborhoodToSource = "-3 + min(Source.Stealth / 2, 3)";
		};
	};
};

"ThrowStinkBomb" = G3ActionTemplate //Stink bomb
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

	ArtefactName = "StinkBomb";
	ActionActor = "Character";
	
	TargetActor = "Building";
	
	ActionName = "ThrowStinkBomb";
	
	SourceScoreFormula = "Intelligence + Strength";
	TargetScoreFormula = "BuildingSecurity";
	
	DisplayName = "$StinkBomb";
	Description = "$StinkBombDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayersAllies";

	Cooldown = 0.04; //~1 hour
	BaseRewardXP = 27;
	IsAggression = true; 
	IsImmediatelyKnownByTarget = false;
	
	CanFail = true; 
	
	TargetTags = array{"FreemasonsGift", "StinkBomb"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			CityBuilding = -3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				SocialHigher = 1;
				PoliticalImportance = -1;
			};
		}
	};
			
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,-0.5,-0.5};
	};					
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
	};
	CanFail = true;
	CriticalFactor = 1.0;
   
	DistanceFromTarget = 600;
	DistanceFromTargetMin = 600;

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bomb/bomb" }; };
	};
			
	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "StinkBomb"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$StinkBomb";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "StinkBomb"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -40.0;
			Recover = true;
			@base/DebuffBuilding
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10 + min(Source.Stealth / 2, 5)";
			AffectTargetAllies = "-3 + min(Source.Stealth / 4, 3)";
			AffectTargetEnemies = "3 - min(Source.Stealth / 4, 3)";
			AffectCurrentNeighborhoodToSource = "-6 + min(Source.Stealth / 2, 3)";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.01;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	
	FailureResult = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		};
	};
};

"ApplyToadExcrements" = G3ActionTemplate //Mengenberg's Pest Juice
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	TargetActor = "Building";
	
	SourceScoreFormula = "Dexterity + (Stealth / 2)";
	TargetScoreFormula = "BuildingSecurity";

	TargetTags = array{"FreemasonsGift", "ToadExcrements"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			CityBuilding = -3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				SocialHigher = 1;
				PoliticalImportance = -1;
			};
		}
	};

	ArtefactName = "ToadExcrements";
	Duration = 0.001; //ingame years
	BaseRewardXP = 16;
	Cooldown = 0.04167; //1 hour
	CooldownFamilyWide = true;

	ActionName = "ApplyToadExcrements";
	DisplayName = "$ToadExcrements";
	Description = "$ToadExcrementsDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.4,0,-0.3};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throw_potion", 0, -1, -1};
	};
   
	DistanceFromTarget = 50;
	DistanceFromTargetMin = 50;

	CriticalFactor = 1; // "0" chance for critical successes and critical failures
   
	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "ToadExcrements"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$ToadExcrements";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadExcrements"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -15.0;
			Recover = true;
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadExcrements"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.5;
			Recover = false;
			@base/DebuffBuilding
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.08;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.03;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-12 + min(Source.Stealth / 2, 6)";
			AffectTargetAllies = "-4 + min(Source.Stealth / 4, 4)";
			AffectTargetEnemies = "4 - min(Source.Stealth / 4, 4)";
			AffectCurrentNeighborhoodToSource = "-6 + min(Source.Stealth / 2, 3)";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	
	FailureResult = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		};
	};
};

"ThrowPotGrenade" = G3ActionTemplate
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

	ArtefactName = "PotGrenade";
	ActionName = "ThrowPotGrenade";

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Strength";
	TargetScoreFormula = "Perception";
	
	DisplayName = "$PotGrenade";
	Description = "$PotGrenadeDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	BaseRewardXP = 20;
	Cooldown = 0.04167; //1 hour
	
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
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
		};
	};
	
	CanFail = true;
	IsImmediatelyKnownByTarget = false;
	IsAggression = true;
	CriticalFactor = 0.9;
   
	DistanceFromTarget = 600;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bomb/bomb" }; };
	};
   
	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.3,-0.5,-0.7};
	};

	CriticalSuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -30;
			Duration = 0;
		},
		DisplayEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Target";
			DisplayGroup = "wound";
			DisplayName = "$effect.debuff.BleedingWound";
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Target";
			ActorValue = "HealthRegeneration";
			Mod = -0.5;
			Recover = true;
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound", "eventdebuffBleedingWoundMain"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.25;
			Recover = false;
			@base/DebuffCharacter
		},
	};
	
	SuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -15;
			Duration = 0;
		},
		DisplayEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Target";
			DisplayGroup = "wound";
			DisplayName = "$effect.debuff.BleedingWound";
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Target";
			ActorValue = "HealthRegeneration";
			Mod = -0.5;
			Recover = true;
			@base/DebuffCharacter
		},
		ModifierEffect
		{
			Filter = "Target.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound", "eventdebuffBleedingWoundMain"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.25;
			Recover = false;
			@base/DebuffCharacter
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectTargetSocietyMembers = "-3";
			AffectTargetAlliedSocietyMembers = "-1";
			AffectTargetEnemySocietyMembers = "1";
			AffectCurrentNeighborhoodToSource = "-2";
			AffectLiaison = "0";
		}
	};
	
	FailureResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -20;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-8";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectTargetSocietyMembers = "-3";
			AffectTargetAlliedSocietyMembers = "-1";
			AffectTargetEnemySocietyMembers = "1";
			AffectCurrentNeighborhoodToSource = "-2";
			AffectLiaison = "0";
		}
	};

	CriticalFailureResult = array
	{
		ModifierEffect
		{
			Tags = array{"BombDamage"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -35;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-5";
			AffectTargetEnemies = "0";
			AffectTargetSocietyMembers = "-5";
			AffectTargetAlliedSocietyMembers = "-2";
			AffectTargetEnemySocietyMembers = "0";
			AffectCurrentNeighborhoodToSource = "0";
			AffectLiaison = "0";
		}
	};

	OnEndResult = array
	{
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"HighAlertCharacter"};
		};
	};
};

"ApplyToadSlime" = G3ActionTemplate //$ToadSlime
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		@base/MainThreeCharacters,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	
	SourceScoreFormula = "Dexterity + (Stealth / 2)";
	
	TargetTags = array{"FreemasonsGift", "ToadSlime"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			CityBuilding = -3;
			ResourceProducer = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				HigherRank = 1;
				SocialHigher = 1;
				PoliticalImportance = -1;
			};
		}
	};

	TargetActor = "Building";
	TargetScoreFormula = "BuildingSecurity";

	ArtefactName = "ToadSlime";
	Duration = 0.0015; //ingame years
	BaseRewardXP = 18;
	Cooldown = 0.04167; //1 hour
	CooldownFamilyWide = true;

	ActionName = "ApplyToadSlime";
	DisplayName = "$ToadSlime";
	Description = "$ToadSlimeDesc";
	Instruction = "$callToAction.ResidenceBusinessNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.03;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.2,0,-0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throwtoadslime", 0, -1, -1};
	};
   
	DistanceFromTarget = 4;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "ToadSlime"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$ToadSlime";
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadSlime"};
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = -0.5;
			Recover = true;
			@base/DebuffBuilding
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadSlime"};
			ApplyTo = "Target";
			ActorValue = "FireProtection";
			Mod = -1.0;
			Recover = true;
			@base/DebuffBuilding
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageSuccess";
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
			Amount = -0.05;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.05;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array{"TriggerPoisonTrap"};
		},
	};
	
	FailureResult = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "BuildingSabotageFailure";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectCurrentNeighborhoodToSource = "-3";
		},
		FunctionApplyResults
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"AlertBuilding"};
		};
	};
};
	
//-------------------SOCIAL ITEMS-------------------//
"GiveFlowers" = G3ActionTemplate //Bouquet of flowers
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/AnyMemberOfOwnFamily
	};
	UsableBy = array{ "$qs.charactertype.0" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "GiveFlowers";
	ArtefactName = "FlowerBouqet";
	DisplayName = "$FlowerBouqet";
	Description = "$FlowerBouqetDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";
	
	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "RelationshipScore / 25 + Charisma * 2 + Target.DoesHaveTag.RomPrefPresent";
	TargetScoreFormula = "Intelligence * 0.25";

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	Cooldown = 0.04;
	BaseRewardXP = 14;
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
		CustomAnimationInfo = array {"GiveFlowers", 5, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"AcceptPresent", 0, -1, -1};
	};
	
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	MoralAlignmentShift = 0.06;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.3,0.25,0.3};
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
			AffectLiaison = "(35 + (Target.hasTag.RomPrefPresent * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
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
			AffectLiaison = "30 * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
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
			AffectLiaison = "-15 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
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

"UseWashCloth" = G3ActionTemplate //Flannel
{
	GUIPresent = true;
	GUIData = array
	{
		@base/AnyMemberOfOwnFamily
	};
	UsableBy = array{ "$qs.charactertype.0" };

	UICategory = "Artifact";
	
	ActionClassName = "UseArtefactAction";

	ActionName = "UseWashCloth";
	ArtefactName = "WashCloth";
	DisplayName = "$WashCloth";
	Description = "$WashClothDesc";
	
	ActionActor = "Character";
	
	Cooldown = 0.083;
	
	BaseRewardXP = 12;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"washbody", 0, -1, -1};
	};
		
	MoralAlignmentShift = 0.04;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.2,0}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	EnterBuilding = "TryEnter";
	
	CanFail = false; //washing yourself should hopefully never fail ;-)
	
	CriticalFactor = 0.80;
	
	CriticalSuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Target";
			DisplayGroup = "perfume";
			DisplayName = "$statusEffect.Washed";
			@base/WashCharacter
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "RemovePoison";
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
			@base/WashCharacter
		},
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"Fleas"};
			ApplyTo = "Self";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
	
	SuccessResult = array
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
			ApplyTo = "Target";
			DisplayGroup = "perfume";
			DisplayName = "$statusEffect.Washed";
			@base/WashCharacter
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "RemovePoison";
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"Washed"};
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
			@base/WashCharacter
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
};

"UseDartagnansFragrance" = G3ActionTemplate //Dartagnan's fragrance
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults,
		@base/Henchmen
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "DartagnansFragrance";
	ActionName = "UseDartagnansFragrance";
	DisplayName = "$DartagnansFragrance";
	Description = "$DartagnansFragranceDesc";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 18;
	
	CanFail = false; // cannot fail, no dice roll
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.25,-0.5,-0.25};
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
			VisualName = "Compliment";
			Duration = 10.0;
		},
		DisplayEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			DisplayGroup = "perfume";
			DisplayName = "$DartagnansFragrance";
			@base/WashCharacter
		},
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = 1.0;
			Recover = true;
			@base/WashCharacter
		},
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = 1.0;
			Recover = true;
			@base/WashCharacter
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
	};
};

"UsePerfume" = G3ActionTemplate //Perfume
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

	ArtefactName = "Perfume";
	ActionName = "UsePerfume";
	DisplayName = "$Perfume";
	Description = "$PerfumeDesc";

	BaseRewardXP = 11;

	EnterBuilding = "TryEnter";
	
	CanFail = false; // cannot fail, no dice roll
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.5,0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"useperfume", 0, -1, -1};
	};

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Compliment";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			DisplayGroup = "perfume";
			DisplayName = "$Perfume";
			@base/WashCharacter
		};
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Recover = true;
			@base/WashCharacter
		};
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = 0.08;
			Recover = true;
			@base/WashCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
	};
};

"UseObligation" = G3ActionTemplate //Open letter of obligation
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "UseObligation";
	ArtefactName = "Obligation";
	DisplayName = "$UseObligation";
	Description = "$UseObligationDesc";
	Instruction = "$callToAction.Character";
	
	ActionActor = "Character";
		
	SourceScoreFormula = "1";

	EnterBuilding = "TryEnter";
	
	//Cooldown = 0.1;
	BaseRewardXP = 25;

	MoralAlignmentShift = 0.08;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,-0.25,0}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	CanFail = false;
	
	CriticalFactor = 0.8;
	
	CriticalSuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 200;
		}
	};
	
	SuccessResult = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 100;
		}
	};
};

"OpenPurse" = G3ActionTemplate //Open pouch with coins
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "OpenPurse";
	ArtefactName = "Purse";
	DisplayName = "$OpenPurse";
	Description = "$OpenPurseDesc";
	
	ActionActor = "Character";
		
	SourceScoreFormula = "1";

	EnterBuilding = "TryEnter";
	
	//Cooldown = 0.05;
	BaseRewardXP = 25;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0}; // honest/shady, philanthropic/egoistic, diplomatic/aggressive
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"checkpurse", 0, -1, -1};
	};
	
	CanFail = false;
	
	CriticalFactor = 0.8;
	
	CriticalSuccessResult = array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = 500;
		}
	};
	
	SuccessResult = array
	{
		FunctionTransferMoney
		{
			Receiver = "Source";
			Amount = 250;
		}
	};
};

"UsePoem" = G3ActionTemplate //Poem
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			//CharacterHasASpouse = 0;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	UICategory = "Artifact";
	ActionName = "UsePoem";
	ArtefactName = "Poem";
	DisplayName = "$Poem";
	Description = "$PoemDesc";
	Instruction = "$callToAction.CharacterRomanticRelationship";

	ActionActor = "Character";
	TargetActor = "Character";
	
	SourceScoreFormula = "Charisma + Target.DoesHaveTag.RomPrefPresent + Target.DoesHaveTag.RomPrefArtist";
	TargetScoreFormula = "Intelligence";
	
	Cooldown = 0.08333; //2 hours
	BaseRewardXP = 25;
	
	CanFail = true;
	
	EnterBuilding = "TryEnter";
	
	MoralAlignmentShift = 0.3;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.25,0.05,0};
	};

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
		CustomAnimationInfo = array {"read_love_letter1", 5, 54, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen_love_letter1", 0, -1, -1};
	};
	
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
	
	CriticalFactor = 0.95;
	
	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Duration = 2.0;
		},			
		FunctionUpdateRelationship
		{
			AffectLiaison = "(40 + ((Target.hasTag.RomPrefPresent + Target.hasTag.RomPrefArtist) * 5)) * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
			AffectCurrentNeighborhoodToSource = "8 * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds = array{"RomPref.Nothing", "RomPref.MoreDistance", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
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
			Duration = 2.0;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "30 * ((1.25 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (0.75 * hasTag.BuffHard) + (0.5 * hasTag.BuffImpossible))";
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
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
			Duration = 2.0;
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
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Insulted";
			Duration = 2.0;
		},
		FunctionUpdateRelationship
		{
			AffectLiaison = "-20 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
			AffectCurrentNeighborhoodToSource = "-8 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
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

"UseStatelyDispatch" = G3ActionTemplate //Poem
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
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	UICategory = "Artifact";
	ActionName = "UseStatelyDispatch";
	ArtefactName = "StatelyDispatch";
	DisplayName = "$StatelyDispatch";
	Description = "$StatelyDispatchDesc";
	Instruction = "$callToAction.CharacterOfficeHolder";

	ShowSelectionPrompt = "OfficeHolders";
	SelectionPromptNoTargetMessage = "$gui.no.office.holders";

	ActionActor = "Character";
	TargetActor = "Character";
	
	CooldownFamilyWide = true;
	Cooldown = 0.25;
	BaseRewardXP = 75;

	EnterBuilding = "TryEnter";
	
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
		
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	Dialogue = array{ "ACTION", "d.act.UseStatelyDispatch" };
};

"BribeWithWine" = G3ActionTemplate //Poem
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
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	UICategory = "Artifact";
	ActionName = "BribeWithWine";
	ArtefactName = "Wine";
	DisplayName = "$BribeWithWine";
	Description = "$WineDesc";
	Instruction = "$callToAction.CharacterOfficeHolder";

	ShowSelectionPrompt = "OfficeHolders";
	SelectionPromptNoTargetMessage = "$gui.no.office.holders";

	ActionActor = "Character";
	TargetActor = "Character";
	
	CooldownFamilyWide = true;
	Cooldown = 0.25;
	BaseRewardXP = 75;

	CurrencyType = "Prestige";
	PriceFormula = "50";

	EnterBuilding = "TryEnter";
	
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
		
	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	Dialogue = array{ "ACTION", "d.act.BribeWithWine" };
};

"ApplyPowderOfHygeia" = G3ActionTemplate //Powder of Hygeia
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ArtefactName = "PowderOfHygeia";
	ActionActor = "Character";
	TargetActor = "Building";
	
	BaseRewardXP = 19;
	
	Cooldown = 0.001; //~1sec
	
	ActionName = "ApplyPowderOfHygeia";
	DisplayName = "$PowderOfHygeia";
	Description = "$PowderOfHygeiaDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	CanFail = false;
	
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ResourceProducer = -3;
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
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "apply_powder"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Poison", "Poisoned"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 15;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"ApplyHolyWater" = G3ActionTemplate //Holy water
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ArtefactName = "HolyWater";
	ActionActor = "Character";
	TargetActor = "Building";
	
	BaseRewardXP = 19;
	
	Cooldown = 0.001; //~1sec
	
	IconName = "HolyWater";
	ActionName = "ApplyHolyWater";
	DisplayName = "$HolyWater";
	Description = "$HolyWater";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	CanFail = false;
	
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ResourceProducer = -3;
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
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "summoning"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Cursed"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 15;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"UsePestAway" = G3ActionTemplate //Flea away!
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
	
	UICategory = "Artifact";
	Cooldown = 0.25;     //24 hours

	ArtefactName = "PestAway";
	ActionName = "UsePestAway";
	DisplayName = "$PestAway";
	Description = "$PestAwayDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 16;
	
	CanFail = true;
	CriticalFactor = 1;

	SourceScoreFormula = "MedicineMastery";
	TargetScoreFormula = "3/(1+BuildingSecurity)";
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ExcludedTypes = array{"Statue"};
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
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "use_pest"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			Tags = array{"PestAway"};
			ApplyTo = "Target";
			DisplayGroup = "protected";
			DisplayName = "$PestAway";
			@base/BuffBuilding
		},
		IntervalExecutionEffect
		{
			Frequency = 5;
			ResultObjectId = "RemoveFleaSpread";
		},
		ForwardEffect
		{
			ApplyTo ="Target";
			Tags = array{"PestAway"};
			Relation = "Self";
			ResultObjectId = "RemoveFleas";
			@base/BuffBuilding
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
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
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -15;
			Recover = false;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

"UseStrongDoorLatch" = G3ActionTemplate //Attach a strong latch to building
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
	
	UICategory = "Artifact";
	Cooldown = 0.0415;
	Duration = 0.005;

	ArtefactName = "StrongDoorLatch";
	ActionName = "UseStrongDoorLatch";
	DisplayName = "$UseStrongDoorLatch";
	Description = "$UseStrongDoorLatchDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"StrongDoorLatch"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "HammerOnBuilding"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"StrongDoorLatch"};
			ResultObjectIds = array{ "StrongDoorLatch" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 20;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UseWarBanner" = G3ActionTemplate //Attach a war banner to building
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
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.005;

	ArtefactName = "WarBanner";
	ActionName = "UseWarBanner";
	DisplayName = "$action.ApplyWarBanner";
	Description = "$WarBannerDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"WarBanner"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "UseFlannel"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"WarBanner"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.WarBanner";
			Duration = 0.0;
		},
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"WarBanner"};
			ResultObjectIds = array{ "WarBanner" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 20;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UseConstructionPlan" = G3ActionTemplate //Use a construction plan on a building
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
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.005;

	ArtefactName = "ConstructionPlan";
	ActionName = "UseConstructionPlan";
	DisplayName = "$ApplyConstructionPlan";
	Description = "$ConstructionPlanDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"ConstructionPlan"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "UseConstructionPlan"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"ConstructionPlan"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.ConstructionPlan";
			Duration = 0.0;
		},
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"ConstructionPlan"};
			ResultObjectIds = array{ "ConstructionPlan" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UseSignetGuildofCraftsmen" = G3ActionTemplate //Use Signet of the guild of craftsmen on a building
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
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.002;

	ArtefactName = "SignetGuildofCraftsmen";
	ActionName = "UseSignetGuildofCraftsmen";
	DisplayName = "$ApplySignetGuildofCraftsmen";
	Description = "$SignetGuildofCraftsmenDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"SignetGuildofCraftsmen"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "PlaceSignetCraftsmen"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"SignetGuildofCraftsmen"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.SignetGuildofCraftsmen";
			Duration = 0.0;
		},
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"SignetGuildofCraftsmen"};
			ResultObjectIds = array{ "SignetGuildofCraftsmen" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UseSignetGuildofMerchants" = G3ActionTemplate //Use Signet of the guild of merchants on a building
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};

	ActionActor = "Character";
	TargetActor = "Building";
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.002;

	ArtefactName = "SignetGuildofMerchants";
	ActionName = "UseSignetGuildofMerchants";
	DisplayName = "$ApplySignetGuildofMerchants";
	Description = "$SignetGuildofMerchantsDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"SignetGuildofMerchants"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "PlaceSignetMerchants"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"SignetGuildofMerchants"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.SignetGuildofMerchants";
			Duration = 0.0;
		},
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"SignetGuildofMerchants"};
			ResultObjectIds = array{ "SignetGuildofMerchants" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UseBetrayedCaptain" = G3ActionTemplate //Use the Betrayed Captain painting on a building
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
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.005;

	ArtefactName = "BetrayedCaptain";
	ActionName = "UseBetrayedCaptain";
	DisplayName = "$ApplyBetrayedCaptain";
	Description = "$BetrayedCaptainDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "0";
	
	TargetTags = array{"BetrayedCaptain"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "ManipulateMiddle"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"BetrayedCaptain"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.BetrayedCaptain";
			Duration = 0.0;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Tags = array{"BetrayedCaptain"};
			Relation = "Self";
			ResultObjectId = "BetrayedCaptainForeward";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
	};
};

"UsePoisonTrap" = G3ActionTemplate //Use a poison trap on a building against saboteurs
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
	
	UICategory = "Artifact";
	Cooldown = 0.0;
	Duration = 0.005;

	ArtefactName = "PoisonTrap";
	ActionName = "UsePoisonTrap";
	DisplayName = "$ApplyPoisonTrap";
	Description = "$PoisonTrapDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 15;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"PoisonTrap"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CityBuilding = -3;
			MatchTargetTags = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "poison_human"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"PoisonTrap"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.PoisonTrap";
			Duration = 0.0;
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 15;
			ObjectiveTypename = "IncreaseSecurity";
		}
	};
};

"ApplyMuralPainting" = G3ActionTemplate //Apply wall paint
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
	
	UICategory = "Artifact";
	Cooldown = 0.0415;
	Duration = 0.005;

	ArtefactName = "MuralPainting";
	ActionName = "ApplyMuralPainting";
	DisplayName = "$ApplyMuralPainting";
	Description = "$ApplyMuralPaintingDesc";
	Instruction = "$callToAction.PlayerBusiness";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"MuralPainting"};
	
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			ExcludedTypes = array{"Statue", "Stage"};
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			MatchTargetTags = -3;
			Business = 3;
			CityBuilding = -3;
			ResourceProducer = -3;
		}
	};

	TargetSnapPoint = TargetSnapPoint
	{
		Required = true;
		ShouldReserve = true;
		ShouldOccupy = true;
		
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Artefact"; Inside = -3; IsFree = 3; },
		};
		Animations = array
		{
			TargetSnapPointAnimation{ Animation = "paint_wall"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.5,0.5,0};
	};

	SuccessResult = array
	{
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"MuralPainting"};
			ResultObjectIds = array{ "MuralPainting" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		},
		FunctionUpdateRelationship
		{
			AffectCurrentNeighborhoodToSource = "3";
		},
	};
};

"ApplySlateTile" = G3ActionTemplate //Apply slate tiles
{
	ActionClassName = "UseArtefactAction";
	ArtefactName = "SlateTile";
	ActionName = "ApplySlateTile";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	@base/SlateTile

	SuccessResult = array
	{
		FunctionApplyResults
		{
			ApplyTo ="Target";
			Tags = array{"SlateTile"};
			ResultObjectIds = array{ "SlateTile" };
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		};
	};
};

"UseAlmanac" = G3ActionTemplate //Almanac
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
	Duration = 0.02083; //30 minutes
	Cooldown = 1.0;     //24 hours

	ArtefactName = "Almanac";
	ActionName = "UseAlmanac";
	DisplayName = "$Almanac";
	Description = "$AlmanacDesc";

	BaseRewardXP = 440;
	
	CanFail = false; // cannot fail, no dice roll
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	EnterBuilding = "TryEnter";

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	};

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
	};
};

"UseAboutTalents1" = G3ActionTemplate //About Talents I
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
	Duration = 0.04166; //30 minutes
	Cooldown = 0.5;     //12 hours

	ArtefactName = "AboutTalents1";
	ActionName = "UseAboutTalents1";
	DisplayName = "$AboutTalents1";
	Description = "$AboutTalents1Desc";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 256;
	
	CanFail = false; // cannot fail, no dice roll
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	};

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	SuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"Skilled"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1.0;
			Recover = true;
			DisplayName = "$AboutTalents1";
			@base/TrainStatCharacter
		};
		
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
	};
}; 

"UseAboutTalents2" = G3ActionTemplate //About Talents II
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
	Duration = 0.04166; //30 minutes
	Cooldown = 1.0;     //24 hours

	ArtefactName = "AboutTalents2";
	ActionName = "UseAboutTalents2";
	DisplayName = "$AboutTalents2";
	Description = "$AboutTalents2Desc";

	EnterBuilding = "TryEnter";

	BaseRewardXP = 300;
	
	CanFail = false; // cannot fail, no dice roll
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	};

	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
	
	SuccessResult = array
	{
		ModifierEffect
		{
			Tags = array{"Skilled"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 2.0;
			Recover = true;
			DisplayName = "$AboutTalents2";
			@base/TrainStatCharacter
		};
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 6;
			Amount = -0.01;
		},
	};
};