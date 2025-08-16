"UseAntidote" = G3ActionTemplate //Use antidote
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };
	
	ActionActor = "Character";
	UICategory = "Artifact";
	
	Cooldown = 0.001; //~1 sec

	ArtefactName = "Antidote";
	ActionName = "UseAntidote";
	DisplayName = "$action.UseAntidote";
	Description = "$action.UseAntidoteDesc";
	
	SourceScoreFormula = "MedicineMastery * 2";
	TargetScoreFormula = "4";

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 12;
	
	CanFail = true; 
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
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
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Poison", "Poisoned"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 12;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
		FunctionTransferItems
		{
			Filter = "Source.hasTag.eventbuffMasterAlchemist";
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Antidote"};
		}
	};
	
	FailureResult = array
	{
		FunctionTriggerAction
		{
			Filter = "IsAdult";
			ApplyTo = "Source";
			Actions = array{"UseAntidoteAdultDizzy"};
		},
		FunctionTransferItems
		{
			Filter = "Source.hasTag.eventbuffMasterAlchemist";
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Antidote"};
		}
	};
};

"UseAntidoteAdultDizzy" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "UseAntidoteAdultDizzy";
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";
	
	ShowCombatText = false;

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			VisualName = "Poison";
			Duration = 2.0;
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			DisplayGroup = "unconscious";
			Duration = 90;
			DisplayName = "$effect.sideEffect.dizzy";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Duration = 90;
			Recover = true;
		}
	};
};

"UseWonderCure" = G3ActionTemplate //Use wonder cure
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "WonderCure";
	ActionActor = "Character";
	
	CanFail = true;
	SourceScoreFormula = "0.33";
	TargetScoreFormula = "0.77";
	
	Cooldown = 0.01;

	EnterBuilding = "TryEnter";
		
	BaseRewardXP = 14;
	
	ActionName = "UseWonderCure";
	DisplayName = "$action.UseWonderCure";
	Description = "$action.UseWonderCureDesc";

	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
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
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array{"Plague"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 12;
			ObjectiveTypename = "IncreaseSecurity";
		},
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
			Filter = "IsAdult";
			ApplyTo = "Source";
			Actions = array{"UseWonderCureAdultDizzy"};
		}
	};
};

"UseWonderCureAdultDizzy" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "UseWonderCureAdultDizzy";
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	EnterBuilding = "TryEnter";
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			VisualName = "Poison";
			Duration = 2.0;
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			DisplayGroup = "unconscious";
			Duration = 90;
			DisplayName = "$effect.sideEffect.dizzy";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"SideEffect"};
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Duration = 90;
			Recover = true;
		}
	};
};

"UsePainKiller" = G3ActionTemplate //Use painkiller
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "PainKiller";
	ActionActor = "Character";
	
	CanFail = true;
	SourceScoreFormula = "1.0";
	TargetScoreFormula = "1.0";
	
	Cooldown = 0.01;
	
	BaseRewardXP = 11;
	
	ActionName = "UsePainKiller";
	DisplayName = "$action.UsePainKiller";
	Description = "$action.UsePainKillerDesc";
 
	EnterBuilding = "TryEnter";
	
	CriticalFactor = 1.0;
	
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
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
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Leprosy"};
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 12;
			ObjectiveTypename = "IncreaseSecurity";
		},
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
			Filter = "IsAdult";
			ApplyTo = "Source";
			Actions = array{"UsePainKillerAdultDizzy"};
		}
	};
};

"UsePainKillerAdultDizzy" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "UsePainKillerAdultDizzy";
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";
	
	ShowCombatText = false;

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Poison";
			Duration = 2.0;
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			DisplayGroup = "unconscious";
			Duration = 90;
			DisplayName = "$effect.sideEffect.dizzy";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Duration = 90;
			Recover = true;
		}
	};
};

"ApplyBandage" = G3ActionTemplate //Use bandage
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "Bandage";
	ActionActor = "Character";

	EnterBuilding = "TryEnter";
	
	CanFail = false;
	
	Cooldown = 0.01;
	Duration = 0.0032;
	
	BaseRewardXP = 10;
	
	ActionName = "ApplyBandage";
	DisplayName = "$action.ApplyBandage";
	Description = "$action.ApplyBandageDesc";
   
	CriticalFactor = 1.0;
		
	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"applybandage", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 50;
			Duration = 0;
			Recover = false;
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 10;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Self";
			ProductType = 5;
			Amount = -0.1;
		},
		FunctionTriggerAction
		{
			Filter = "Source.hasTag.eventdebuffBleedingWound";
			ApplyTo = "Self";
			Actions = array{"ApplyBandageRemoveBleeding"};
		},
	};
};

"ApplyBandageRemoveBleeding" = G3ActionTemplate //Use bandage remove bleeding
{
	GUIPresent = false;
	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";

	ActionName = "ApplyBandageRemoveBleeding";
	DisplayName = "$action.ApplyBandage";
	Description = "$action.ApplyBandageDesc";

	SourceScoreFormula = "Source.MedicineMastery";
	TargetScoreFormula = "5";

	CanFail = true;
	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Self";
		},
	};
};

"DrinkHerbTea" = G3ActionTemplate //Drink herb tea
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };
	
	ArtefactName = "HerbTea";
	ActionActor = "Character";

	CanFail = true;
	SourceScoreFormula = "0.77";
	TargetScoreFormula = "0.33";
	
	Cooldown = 0.01; //~1sec
	
	BaseRewardXP = 10;

	EnterBuilding = "TryEnter";
	
	ActionName = "DrinkHerbTea";
	DisplayName = "$action.DrinkHerbTea";
	Description = "$action.DrinkHerbTeaDesc";

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};
	
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Cold", "ScarletFever", "Measles"};
		},
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

"DrinkRoseWater" = G3ActionTemplate //Drink rose water
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "RoseWater";
	ActionActor = "Character";
	
	CanFail = false;
	
	Cooldown = 0.001; //~1sec

	EnterBuilding = "TryEnter";
	
	BaseRewardXP = 15;
	
	ActionName = "DrinkRoseWater";
	DisplayName = "$action.DrinkRoseWater";
	Description = "$action.DrinkRoseWaterDesc";

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	// Animation Props
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "vinecup/vinecup" }; };
	};
	
	CriticalFactor = 1.0;
	
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
			Filter = "Source.IsAdult";
			Tags = array{"RoseWaterBuff"};
			ApplyTo = "Self";
			ActorValue = "Fertility";
			Mod = 0.15;
			Recover = true;
			@base/BuffPotionCharacter
		},
		ModifierEffect
		{
			Tags = array{"RoseWaterBuff"};
			ApplyTo = "Self";
			ActorValue = "Intimidation";
			Mod = -2;
			Recover = true;
			@base/BuffPotionCharacter
		},
		DisplayEffect
		{
			Tags = array{"RoseWaterBuff"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$RoseWater";
			@base/BuffPotionCharacter
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2; // food
			Amount = -0.005;
		}
	};
};

"UseDrFaustusElixir" = G3ActionTemplate //Dr. Faustus' Elixir
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

	ArtefactName = "DrFaustusElixir";
	ActionName = "UseDrFaustusElixir";
	DisplayName = "$DrFaustusElixir";
	Description = "$DrFaustusElixirDesc";

	BaseRewardXP = 21;
	
	SourceScoreFormula = "MedicineMastery";
	TargetScoreFormula = "2 + (LifeExpectancy / 60)";

	EnterBuilding = "TryEnter";
	
	CanFail = true;
	CriticalFactor = 0.8;

	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.2,0,0};
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

	CriticalSuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "LongerLife";
			Duration = 2.0;
		},
		ModifierEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			ActorValue = "Fertility";
			Mod = 1.5;
			Recover = true;
			@base/BuffPotionCharacter
		},
		ModifierEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			ActorValue = "LifeExpectancy";
			Mod = 3;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$DrFaustusElixir";
			@base/BuffPotionCharacter
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
	};
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "LongerLife";
			Duration = 2.0;
		},
		ModifierEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			ActorValue = "Fertility";
			Mod = 1.0;
			Recover = true;
			@base/BuffPotionCharacter
		},
		ModifierEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			ActorValue = "LifeExpectancy";
			Mod = 1;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$DrFaustusElixir";
			@base/BuffPotionCharacter
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "FaustusSpread";
			Tags = array{"ReputationDecrease", "Poisoned", "FaustusDoT"};
			SpreadResult = "ReputationDecrease";
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
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Poison";
			Duration = 2.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "FaustusDoT"};
			ApplyTo = "Self";
			DisplayGroup = "poison";
			DisplayName = "$DrFaustusElixir";
			Duration = 30.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "FaustusDoT"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -0.66; //~ 20 dmg over 30 seconds
			Duration = 30;
			Recover = false;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "FaustusSpread";
			Tags = array{"ReputationDecrease", "Poisoned", "FaustusDoT"};
			SpreadResult = "ReputationDecrease";
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
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};
	CriticalFailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Self";
			VisualName = "Poison";
			Duration = 2.0;
		};
		
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "FaustusDoT"};
			ApplyTo = "Self";
			DisplayGroup = "poison";
			DisplayName = "$DrFaustusElixir";
			Duration = 30.0;
		};
		ModifierEffect
		{
			Tags = array{"FaustusBuff"};
			ApplyTo = "Self";
			ActorValue = "LifeExpectancy";
			Mod = -5;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "FaustusDoT"};
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -1; //~ 20 dmg over 30 seconds
			Duration = 30;
			Recover = false;
		},
		SpreadEffect
		{
			ApplyTo = "Self";
			UniqueTag = "FaustusSpread";
			Tags = array{"ReputationDecrease", "Poisoned", "FaustusDoT"};
			SpreadResult = "ReputationDecrease";
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
					TargetProperties = array{"Outside", "NotMyFamily", "IsConscious", "NotFleeing"};
					TargetScoreFormula = "Intelligence*0.25";
				}
			}; 
		}
	};

};

"UseEndurenceDrink" = G3ActionTemplate //Endurance potion
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

	ArtefactName = "EndurenceDrink";
	ActionName = "UseEndurenceDrink";
	DisplayName = "$EndurenceDrink";
	Description = "$EndurenceDrinkDesc";

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
			Tags = array{"Endurance", "Drunk"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$EndurenceDrink";
			@base/BuffPotionCharacter
		};
		ModifierEffect
		{
			Tags = array{"Endurance"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.25;
			Recover = true;
			@base/BuffPotionCharacter
		};
		ModifierEffect
		{
			Tags = array{"Endurance"};
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 2.0;
			Recover = true;
			@base/BuffPotionCharacter
		};
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
	
	FailureResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Drunk"};
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Endurance", "UncontrollablyDrunk"};
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

// ALCHIMISTS GUILD
"PotionOfSalutary" = G3ActionTemplate //Potion of salutary
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData // Leader in the action bar
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Alchimists";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$statusEffect.guild-alchimists" };

	ActionActor = "Character";
	TargetActor = "Character";

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			Adult = 3;
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				Feud = -2;
				Alliance = 2;
				GoodRelationWithMe = 2;
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

	UICategory = "Artifact";
	
	Cooldown = 0.33; //~1 sec

	ArtefactName = "PotionOfFateWomen";
	ActionName = "PotionOfSalutary";
	DisplayName = "$PotionOfSalutary";            
	Description = "$PotionOfSalutaryDesc";
	Instruction = "$callToAction.CharacterAdult";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	DistanceFromTarget = 60;
	DistanceFromTargetMin = 60;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"MakePresent", 5, 54, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1};
	};
	
	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "RemovePoison";
			Duration = 5.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Poison", "Poisoned", "Disease", "Sick"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "5";
		}
	};
};

"PotionOfContamination" = G3ActionTemplate //Potion of contamination
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData // Leader in the action bar
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Alchimists";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$statusEffect.guild-alchimists" };

	ActionActor = "Character";
	TargetActor = "Character";

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			IsSourceHuman = 3;

			Adult = 3;
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
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
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
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

	UICategory = "Artifact";
	
	Cooldown = 0.33; //~1 sec
	CooldownFamilyWide = true;
	
	ArtefactName = "PotionOfFateWomen";
	ActionName = "PotionOfContamination";
	DisplayName = "$PotionOfContamination";            
	Description = "$PotionOfContaminationDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayers";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	DistanceFromTarget = 150;
	DistanceFromTargetMin = 150;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throw_potion", 5, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	
	SuccessResult = array
	{
		FunctionPickRandom
		{
			ApplyTo = "Target";
			ResultObjectIds =  array{"InfectionCold", "InfectionCold", "InfectionLeprosy", "InfectionPlague"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-4";
			AffectTargetEnemies = "4";
		}
	};
};

"PotionOfDecay" = G3ActionTemplate //Potion of decay
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData // Leader in the action bar
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			DoesHaveTag = "Alchimists";
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$statusEffect.guild-alchimists" };

	ActionActor = "Character";
	TargetActor = "Character";

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			IsSourceHuman = 3;

			Adult = 3;
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -2;
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
			NPCGuard = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				GoodRelationWithMe = -2;
				Feud = 2;
				Alliance = -3;
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

	UICategory = "Artifact";
	
	Cooldown = 0.33; //~1 sec
	CooldownFamilyWide = true;

	ArtefactName = "PotionOfFateWomen";
	ActionName = "PotionOfDecay";
	DisplayName = "$PotionOfDecay";            
	Description = "$PotionOfDecayDesc";
	Instruction = "$callToAction.CharacterAdultNotPlayers";
	
	SourceScoreFormula = "1";
	TargetScoreFormula = "0";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	DistanceFromTarget = 150;
	DistanceFromTargetMin = 150;

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"throw_potion", 5, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"choc_react1", 0, -1, -1};
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonGhostlyFog", "ApplyPoisonGhostlyFog", "ApplyPoisonBlackWidowPoison", "ApplyPoisonParalysisPoison"};
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-6";
			AffectTargetEnemies = "3";
		}
	};
};