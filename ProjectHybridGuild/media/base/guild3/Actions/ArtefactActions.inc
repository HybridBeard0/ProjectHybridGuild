//-------------------HEALING ITEMS-------------------//
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
	FailureResult = array
	{
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
	FailureResult = array
	{
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
			Duration = 150.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"RoseWaterBuff"};
			ApplyTo = "Self";
			ActorValue = "Intimidation";
			Mod = -2;
			Duration = 150.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"RoseWaterBuff"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$RoseWater";
			Duration = 150.0;
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

"UseSkullLamp" = G3ActionTemplate //Place skull lamp
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ArtefactName = "SkullLamp";
	ActionActor = "Character";
	TargetActor = "Building";

	TargetTags = array{"Cursed","FreemasonsGift"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			IsSourceHuman = 3;
			
			MatchTargetTags = -3;
			Business = 3;
			CloseToActor = 1;
			CityBuilding = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
		},
		TargetProfileBuilding
		{
			IsSourceHuman = -3;
			
			MatchTargetTags = -3;
			Business = 3;
			CloseToActor = 1;
			CityBuilding = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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

	SourceScoreFormula = "(Dexterity / 2) + Intimidation + (Stealth / 2)";
	TargetScoreFormula = "(Level / 3) + (2 * BuildingSecurity)";
	
	CanFail = true;
	
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
			Duration = 540.0;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"Cursed"};
			ActorValue = "Attractiveness";
			Mod = -5;
			Duration = 540;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.PoisonTrap";
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = -75;
			Duration = 0;
			Recover = false;
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "TargetOfSkullLamp";
		}
	};
	FailureResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.cursed";
			Duration = 540.0;
		},
		ModifierEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Self";
			ActorValue = "Intimidation";
			Mod = -2;
			Duration = 540;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Cursed"};
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = -1;
			Duration = 540;
			Recover = true;
		}
	};
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
			ExcludedTypes = array{"Statue", "Stage"};
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

//-------------------BUFF ITEMS-------------------//
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
			Duration = 450.0;
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
			Duration = 810.0;
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 810.0;
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Drunken"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.07;
			Duration = 810.0;
			Recover = true;
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
			Duration = 810.0;
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 810.0;
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Drunken"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.07;
			Duration = 810.0;
			Recover = true;
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
			Duration = 810.0;
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 810.0;
			Recover = true;
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
			Duration = 810.0;
		};
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 810.0;
			Recover = true;
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
			Duration = 300;
			Recover = true;
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
			Duration = 300.0;
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
			Duration = 300;
			Recover = true;
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
			Duration = 300.0;
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
			Duration = 360.0;
		};
		ModifierEffect
		{
			Tags = array{"Endurance"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.25;
			Duration = 360.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Endurance"};
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 2.0;
			Duration = 360.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
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
			Duration = 810.0;
		},
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = 1.0;
			Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = 1.0;
			Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
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
	// Animation Props
	//AnimationProps = array
	//{
	//	PropSpawnDesc { PropNames = array { "antidote/antidote" }; };
	//};

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
			Duration = 810.0;
		};
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 1.0;
			Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Perfume"};
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = 0.08;
			Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = -0.01;
		},
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
			Duration = 1800.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
			DisplayName = "$AboutTalents1";
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
			Duration = 1800.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
			DisplayName = "$AboutTalents2";
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
//-------------------AGGRESSIVE ITEMS-------------------//
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
			Mod = -35;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStatue";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -3;
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
			Mod = -60;
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
	};
	
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictimBuilding";
			Duration = 540.0;
		},
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictimBuilding";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 540.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -15;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStatue";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -1;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
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
		}	
		
	};

	CriticalFailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictimBuilding";
			Duration = 1080.0;
		},
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictimBuilding";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 1080.0; 
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.IsStage";
			Tags = array{"BombDamage"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -5;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Filter = "!Target.hasTag.IsStatue && !Target.hasTag.IsStage";
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
		}	
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
	
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			CityBuilding = -3;
			ResourceProducer = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Alerted"};
		},
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "StinkBomb"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$StinkBomb";
			Duration = 320.0;
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "StinkBomb"};
			ApplyTo = "Target";
			ActorValue = "BuildingSecurity";
			Mod = -2.0;
			Duration = 320.0; 
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "StinkBomb"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -2.0;
			Duration = 320;
			Recover = true;
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
	};
	
	FailureResult = array
	{
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictimBuilding";
			Duration = 540.0;
		},
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictimBuilding";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 540.0;
			Recover = true;
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
			IsSourceHuman = 3;

			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
		},
		TargetProfileBuilding
		{
			IsSourceHuman = -3;

			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadExcrements"};
			ApplyTo = "Target";
			ActorValue = "Attractiveness";
			Mod = -50.0;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadExcrements"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.5;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = false;
		};
		ModifierEffect
		{
			Filter = "Target.hasTag.PoisonTrap";
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = -75;
			Duration = 0;
			Recover = false;
		},
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictimBuilding";
			Duration = 540.0;
		};
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictimBuilding";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 540.0;
			Recover = true;
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
	};
	
	FailureResult = array
	{				
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictimBuilding";
			Duration = 540.0;
		};
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictimBuilding";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 540.0;
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-4";
		};
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
			Duration = 450.0;
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
			Duration = 180;
		},
		ModifierEffect
		{
			Tags = array{"BadBreath", "BoozyBreathBeer"};
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = -3.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"BadBreath", "BoozyBreathBeer"};
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -0.1;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Duration = 180.0;
			Recover = true;
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
		};
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.Suspicious";
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.Suspicious";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-4";
			AffectLiaison = "-10";
		};
	};
};

//"ThrowPotGrenade" = G3ActionTemplate
//{
//	ActionClassName = "UseArtefactAction";
//	GUIPresent = true;
//	UICategory = "Artifact";
//
//	GUIData = array
//	{
//		@base/Henchmen
//	};
//
//	ArtefactName = "PotGrenade";
//	ActionActor = "Character";
//	
//	TargetActor = "Character";
//	
//	ActionName = "ThrowPotGrenade";
//	
//	SourceScoreFormula = "Strength";
//	TargetScoreFormula = "Perception";
//	
//	DisplayName = "$PotGrenade";
//	Description = "$PotGrenadeDesc";
//	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";
//
//	BaseRewardXP = 90;
//	Cooldown = 0.04167; //1 hour
//	Duration = 0.01;
//	
//	DesiredProfiles = array
//	{
//		TargetProfileCharacter
//		{
//			Adult = 3;
//			CloseToActor = 1;
//			Boat = -3;
//
//			FamilyProfile = TargetProfileFamily
//			{
//				MyFamily = -3;
//				Feud = 2;
//				Alliance = -2;
//				GoodRelationWithMe = -2;
//				HigherRank = 1;
//				PoliticalImportance = 1;
//				SocialHigher = -1;
//			};
//		};
//	};
//	
//	CanFail = true;
//	IsImmediatelyKnownByTarget = false;
//	IsAggression = true; 
//	Detect = "OnFinish";
//	CriticalFactor = 0.9;
//   
//	DistanceFromTarget = 600;
//	CustomAnimationPool = array
//	{
//		CustomAnimationInfo = array {"throwing_bomb", 0, -1, -1};
//	};
//	AnimationProps = array
//	{
//		PropSpawnDesc { PropNames = array { "bomb/bomb" }; };
//	};
//   
//	MoralAlignmentShift = 1.0;
//  MoralAlignment = MoralAlignment
//	{
//		Values = array{-0.005, 0.000, -0.010};
//	};
//
//	CriticalSuccessResult = array
//	{
//		ModifierEffect
//		{
//			Tags = array{"BombDamage"};
//			ApplyTo = "Target";
//			ActorValue = "Health";
//			Mod = -80;
//			Duration = 0;
//		},
//
//		ModifierEffect
//		{
//			Tags = array{"Slow"};
//			ApplyTo = "Target";
//			ActorValue = "Speed";
//			Mod = -100.0;
//			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
//			Recover = true;
//		},
//		
//		DisplayEffect
//		{
//			Tags = array{"Alerted"};
//			ApplyTo = "Target";
//			DisplayGroup = "alarm";
//			DisplayName = "$PotGrenade";
//			Duration = 270.0;
//		},
//		
//		@base/AlertLowCharacter
//	};
//	
//	SuccessResult = array
//	{
//		ModifierEffect
//		{
//			Tags = array{"BombDamage"};
//			ApplyTo = "Target";
//			ActorValue = "Health";
//			Mod = -50;
//			Duration = 0;
//		},
//
//		ModifierEffect
//		{
//			Tags = array{"Slow"};
//			ApplyTo = "Target";
//			ActorValue = "Speed";
//			Mod = -75.0;
//			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
//			Recover = true;
//		},
//		
//		DisplayEffect
//		{
//			Tags = array{"Alerted"};
//			ApplyTo = "Target";
//			DisplayGroup = "alarm";
//			DisplayName = "$PotGrenade";
//			Duration = 540.0;
//		},
//		
//		@base/AlertMedCharacter;
//
//		FunctionUpdateRelationship
//		{
//			AffectTarget = "-8";
//			AffectTargetAllies = "-3";
//			AffectTargetEnemies = "3";
//			AffectTargetSocietyMembers = "-3";
//			AffectTargetAlliedSocietyMembers = "-1";
//			AffectTargetEnemySocietyMembers = "1";
//			AffectCurrentNeighborhoodToSource = "-2";
//			AffectLiaison = "0";
//		}
//	};
//	
//	FailureResult = array
//	{
//		DisplayEffect
//		{
//			Tags = array{"Alerted"};
//			ApplyTo = "Target";
//			DisplayGroup = "alarm";
//			DisplayName = "$PotGrenade";
//			Duration = 540.0;
//		},
//		
//		@base/AlertMedCharacter,
//
//		ModifierEffect
//		{
//			Tags = array{"BombDamage"};
//			ApplyTo = "Self";
//			ActorValue = "Health";
//			Mod = -20;
//		},
//		
//		FunctionUpdateRelationship
//		{
//			AffectTarget = "-8";
//			AffectTargetAllies = "-3";
//			AffectTargetEnemies = "3";
//			AffectTargetSocietyMembers = "-3";
//			AffectTargetAlliedSocietyMembers = "-1";
//			AffectTargetEnemySocietyMembers = "1";
//			AffectCurrentNeighborhoodToSource = "-2";
//			AffectLiaison = "0";
//		}
//	};
//
//	CriticalFailureResult = array
//	{
//		DisplayEffect
//		{
//			Tags = array{"Alerted"};
//			ApplyTo = "Target";
//			DisplayGroup = "alarm";
//			DisplayName = "$PotGrenade";
//			Duration = 1080.0;
//		},
//		
//		@base/AlertHighCharacter,
//
//		ModifierEffect
//		{
//			Tags = array{"BombDamage"};
//			ApplyTo = "Self";
//			ActorValue = "Health";
//			Mod = -35;
//		},
//		
//		FunctionUpdateRelationship
//		{
//			AffectTarget = "-10";
//			AffectTargetAllies = "-5";
//			AffectTargetEnemies = "0";
//			AffectTargetSocietyMembers = "-5";
//			AffectTargetAlliedSocietyMembers = "-2";
//			AffectTargetEnemySocietyMembers = "0";
//			AffectCurrentNeighborhoodToSource = "0";
//			AffectLiaison = "0";
//		}
//	};
//};

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
	
	TargetTags = array{"FreemasonsGift"};
	DesiredProfiles = array
	{                
		TargetProfileBuilding
		{
			IsSourceHuman = 3;

			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
		},
		TargetProfileBuilding
		{
			IsSourceHuman = -3;

			CityBuilding = -3;
			ResourceProducer = -3;
			MatchTargetTags = -3;
			ExcludedTypes = array{"Statue", "Stage"};
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
//		CustomAnimationInfo = array {"giving_money1", 0, -1, -1};
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
			Duration = 270.0;
		},
		ModifierEffect
		{
			Tags = array{"Poisoned", "ToadSlime"};
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = -0.5;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.Suspicious";
			Duration = 270.0;
		},
		ModifierEffect
		{
			Filter = "Target.hasTag.PoisonTrap";
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = -75;
			Duration = 0;
			Recover = false;
		},
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.Suspicious";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 270.0; 
			Recover = true;
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
	};
	
	FailureResult = array
	{				
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.Suspicious";
			Duration = 270.0;
		},
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.Suspicious";
			ActorValue = "BuildingSecurity";
			Mod = 2.0;
			Duration = 270.0; 
			Recover = true;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "-10";
			AffectTargetAllies = "-3";
			AffectTargetEnemies = "3";
			AffectCurrentNeighborhoodToSource = "-3";
		}
	};
};
	
"ApplyBlackWidowPoison" = G3ActionTemplate //Black widow poison
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

	TargetActor = "Character";
	
	TargetScoreFormula = "Perception + Target.hasTag.eventbuffSenseForDanger * 10";
	
	ArtefactName = "BlackWidowPoison";
	BaseRewardXP = 26;
	Cooldown = 0.04167; //1 hour
	CooldownFamilyWide = true;

	ActionName = "ApplyBlackWidowPoison";
	DisplayName = "$BlackWidowPoison";
	Description = "$BlackWidowPoisonDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-1,-0.5,-0.75};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"poison_human", 0, -1, -1};
	};
	
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonBlackWidowPoison"};
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
			Amount = -0.03;
		},
		
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 7;
			Amount = 0.08;
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

"ApplyParalysisPoison" = G3ActionTemplate //Paralysis poison
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
	TargetActor = "Character";
	
	SourceScoreFormula = "Dexterity + (Stealth / 2)";
	TargetScoreFormula = "Perception + Target.hasTag.eventbuffSenseForDanger * 10";	

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
	
	ArtefactName = "ParalysisPoison";
	BaseRewardXP = 22;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyParalysisPoison";
	DisplayName = "$ParalysisPoison";
	Description = "$ParalysisPoisonDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.4,-0.6};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"blowingpipe", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonParalysisPoison"};
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
	
"ApplyGhostlyFog" = G3ActionTemplate //Ghostly fog
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
	TargetActor = "Character";
	
	SourceScoreFormula = "Charisma + (Stealth / 2)";
	TargetScoreFormula = "Intelligence + Target.hasTag.eventbuffSenseForDanger * 10";
	
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
				PoliticalImportance = 1;
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
				PoliticalImportance = 1;
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
	
	ArtefactName = "GhostlyFog";
	BaseRewardXP = 18;
	Cooldown = 0.04167; //1 hour

	ActionName = "ApplyGhostlyFog";
	DisplayName = "$GhostlyFog";
	Description = "$GhostlyFogDesc";
	Instruction = "$callToAction.CharacterAdultNotEmployeeNotPlayers";

	CanFail = true;
	IsAggression = true;
	IsImmediatelyKnownByTarget = false;

	MoralAlignmentShift = 0.1;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.6,-0.4,-0.2};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"poison_human", 0, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"courting_process_receive", 0, -1, -1};
	};
   
	DistanceFromTarget = 35;
	DistanceFromTargetMin = 35;
	CriticalFactor = 1; // "0" chance for critical successes and critical failures

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"ApplyPoisonGhostlyFog"};
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
			Amount = 0.03;
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
			Duration = 360;
			DisplayGroup = "perfume";
			DisplayName = "$statusEffect.Washed";
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
			Duration = 360; // 1/4 year
			Recover = true;
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
			Duration = 360;
			DisplayGroup = "perfume";
			DisplayName = "$statusEffect.Washed";
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
			Duration = 360; // 1/4 year
			Recover = true;
		},
		FunctionTrackObjectiveProgress
		{
			Amount = 5;
			ObjectiveTypename = "IncreaseSecurity";
		}
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

"TrainRat" = G3ActionTemplate //Train a rat
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "TrainRat";
	ArtefactName = "Rat";
	DisplayName = "$TrainRat";
	Description = "$TrainRatDesc";
	
	ActionActor = "Character";
	EnterBuilding = "TryEnter";
		
	SourceScoreFormula = "Charisma + Intelligence";
	TargetScoreFormula = "1";
	
	Cooldown = 0.025;
	BaseRewardXP = 25;
	
	// Animation Character
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"ReapHerbs", 0, -1, -1};
	};
	
	CanFail = true;
	
	CriticalFactor = 1.0;
		
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Receiver = "Source";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RatCompanion"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			CheckSourceProfile = false;
			ApplyTo = "Source";
			Actions = array{"NPCEquipRatCompanion"};
		}
	};
	FailureResult = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -10;
			Recover = false;
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
			Duration = 450.0;
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
			Duration = 200.0;
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
			Duration = 200.0;
			Recover = true;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = 1;
			Duration = 200.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = -1;
			Duration = 200.0;
			Recover = true;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"CreamPie"};
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = 50;
			Duration = 200.0;
			Recover = true;
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
			Duration = 450.0;
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
			Duration = 35.0;
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
			Duration = 35.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 35.0;
			Recover = true;
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
			Duration = 12.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 12.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			Duration = 12.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 12.0;
			Recover = true;
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
			Duration = 35.0;
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
			Duration = 35.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 35.0;
			Recover = true;
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
			Duration = 12.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 12.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Cider";
			Duration = 12.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 12.0;
			Recover = true;
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
			Duration = 450.0;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 200.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Duration = 200.0;
			Recover = true;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$SmallBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
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
			Duration = 450.0;
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
			Duration = 200.0;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
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
			Duration = 200.0;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$BarrelBrewerBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
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
			Duration = 450.0;
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
			Duration = 200.0;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
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
			Duration = 200.0;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 200.0;
			Recover = true;
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
			Duration = 25.0;
		},
		VisualEffect
		{
			ApplyTo = "Self";
			Tags = array{"Endurance", "UncontrollablyDrunk"};
			VisualName = "Poisoned";
			Duration = 25.0;
		},
		DisplayEffect
		{
			Tags = array{"Drunk", "Drunken"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$WheatBeer";
			Duration = 25.0;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Drunken"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.25;
			Duration = 25.0;
			Recover = true;
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
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"FortuneCake"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = 80;
			Duration = 200.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"FortuneCake"};
			ApplyTo = "Target";
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Duration = 200.0;
			Recover = true;
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
			Duration = 350.0;
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
			Duration = 350.0;
			ResultObjectId = "RemoveFleas";
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
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"StrongDoorLatch"};
			DisplayGroup = "buffed";
			DisplayName = "$StrongDoorLatchBuff";
			Duration = 1800.0;
		},
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
		//FunctionApplyResults
		//{
		//	ApplyTo ="Target";
		//	Tags = array{"BetrayedCaptain"};
		//	ResultObjectIds = array{ "BetrayedCaptain" };
		//},
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
		//FunctionApplyResults
		//{
		//	ApplyTo ="Target";
		//	Tags = array{"PoisonTrap"};
		//	ResultObjectIds = array{ "PoisonTrap" };
		//},
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
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"MuralPainting"};
			DisplayGroup = "buffed";
			DisplayName = "$MuralPaintingBuff";
			Duration = 1800.0;
		},
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

	ArtefactName = "SlateTile";
	ActionName = "ApplySlateTile";
	DisplayName = "$ApplySlateTile";
	Description = "$ApplySlateTileDesc";
	Instruction = "$callToAction.ResidenceBusinessPlayers";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1;

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";
	
	TargetTags = array{"SlateTile"};
	
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
			CityBuilding = -3;
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
		Values = array{0,0,0};
	};

	SuccessResult = array
	{
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"SlateTile"};
			DisplayGroup = "buffed";
			DisplayName = "$SlateTileBuff";
			Duration = 1800.0;
		},
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
		}
	};
};

"UseFlowerOfDiscord" = G3ActionTemplate //Use flower of discord
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		ActionGUIData // Leader in the action bar
		{
			IsCharacter = 1;
			IsLeader = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
		},
	};
	UsableBy = array{ "$guiLeader" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	UICategory = "Artifact";
	Cooldown = 0.0415;
	Duration = 0.005;

	ArtefactName = "FlowerOfDiscord";
	ActionName = "UseFlowerOfDiscord";
	DisplayName = "$UseFlowerOfDiscord";
	Description = "$UseFlowerOfDiscordDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 25;
	
	CanFail = false;
	CriticalFactor = 1;

	EnterBuilding = "TryEnter";

	SourceScoreFormula = "1";
	TargetScoreFormula = "1";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			IsSourceHuman = 3;

			Adult = 3;
			Boat = -3;
			SimilarSocialStandingToMine = 2;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -2;
				GoodRelationWithMe = -2;
				SocialHigher = -1;
				PoliticalImportance = 1;
				HigherRank = -1;
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
			SimilarSocialStandingToMine = 2;
			NPC = -3;
			NPCGuard = -3;
			Employee = -3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Feud = 2;
				Alliance = -3;
				GoodRelationWithMe = -2;
				SocialHigher = -1;
				PoliticalImportance = 1;
				HigherRank = -1;
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

	ShowSelectionPrompt = "FamilySelectionNoTargetNoSource";
	SelectionPromptCallToAction = "$selectionPrompt.SelectFamily";
	SelectionPromptNoTargetMessage = "$selectionPrompt.NoFamilies";

	ThirdPartyProfiles = array
	{
		TargetProfileFamily
		{
			MyFamily = -3;
			PoliticalImportance = 2;
			HigherRank = 1;
			Rich = 1;
		};
	};

	MoralAlignmentShift = 0.2;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,-0.4,-0.4};
	};
	DistanceFromTarget = 100;
	DistanceFromTargetMin = 100;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"smear", 5, 71, -1};
	};
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "-20";
			AffectSource = "-20";
		},
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "UseFlowerOfDiscordVictim1";
		},
		FunctionSendMessage
		{
			ApplyTo = "Context";
			Description = "UseFlowerOfDiscordVictim2";
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
			Duration = 540;
			Recover = true;
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

//-------- Marijuana -------------
"SmokeJoint" = G3ActionTemplate //Marijuana
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
			DoesNotHaveTag = "NoSmoking";
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionActor = "Character";
	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "Joint";
	ActionName = "SmokeJoint";
	DisplayName = "$Joint";
	Description = "$JointDesc";

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
			Duration = 1.0;
		},
		DisplayEffect
		{
			Tags = array{"High", "Stoned"};
			ApplyTo = "Self";
			DisplayGroup = "drunk";
			DisplayName = "$Joint";
			Duration = 400.0;
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Self";
			MatchAny = true;
			Tags = array {"Influenza"};
		},
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = -.2;
			Duration = 450.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 1;
			Duration = 400.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Slow","Sleepy"};
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.15;
			Duration = 400.0;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Target";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"DrinkMarijuanaTea" = G3ActionTemplate //Drink herb tea
{
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;
	UICategory = "Artifact";

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ArtefactName = "MarijuanaTea";
	ActionActor = "Character";

	CanFail = true;
	SourceScoreFormula = "0.77";
	TargetScoreFormula = "0.33";
	
	Cooldown = 0.01; //~1sec
	
	BaseRewardXP = 10;

	EnterBuilding = "TryEnter";
	
	ActionName = "DrinkMarijuanaTea";
	DisplayName = "$MarijuanaTea";
	Description = "$MarijuanaTeaDesc";

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
	FailureResult = array
	{
	};
};

"EatMarijuanaCake" = G3ActionTemplate //Gingerbread
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
	UsableBy = array{ "$characters.Age.Adult" };

	ActionActor = "Character";

	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "MarijuanaCake";
	ActionName = "EatMarijuanaCake";
	DisplayName = "$MarijuanaCake";
	Description = "$MarijuanaCakeDesc";
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
			DisplayName = "$MarijuanaCake";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = 1;
			Duration = 200.0;
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"Cake"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = -1;
			Duration = 200.0;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"GiveMarijuanaCake" = G3ActionTemplate //Give a gingerbread
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
	
	ActionName = "GiveMarijuanaCake";
	ArtefactName = "MarijuanaCake";
	DisplayName = "$MarijuanaCake";
	Description = "$MarijuanaCakeDesc";
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

"EatMarijuanaCreamPie" = G3ActionTemplate //Cream cake
{
	ActionClassName = "UseArtefactAction";

	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$characters.Age.Adult" };

	ActionActor = "Character";

	UICategory = "Artifact";
	Cooldown = 1.0;     //24 hours

	ArtefactName = "MarijuanaCreamPie";
	ActionName = "EatMarijuanaCreamPie";
	DisplayName = "$MarijuanaCreamPie";
	Description = "$MarijuanaCreamPieDesc";
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
			DisplayName = "$MarijuanaCreamPie";
			Duration = 200.0;
		},
		ModifierEffect
		{
			Tags = array{"CreamPie"};
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = 50;
			Duration = 200.0;
			Recover = true;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.01;
		},
	};
};

"GiveMarijuanaCreamPie" = G3ActionTemplate //Give a cream cake
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "GiveMarijuanaCreamPie";
	ArtefactName = "MarijuanaCreamPie";
	DisplayName = "$GiveCreamPie";
	Description = "$MarijuanaCreamPieDesc";
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

"ApplyHempBandage" = G3ActionTemplate //Use bandage
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "HempBandage";
	ActionActor = "Character";

	EnterBuilding = "TryEnter";
	
	CanFail = false;
	
	Cooldown = 0.01;
	Duration = 0.0032;
	
	BaseRewardXP = 10;
	
	ActionName = "ApplyHempBandage";
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

"UseCBDExtract" = G3ActionTemplate //Use painkiller
{
	UICategory = "Artifact";
	ActionClassName = "UseArtefactAction";
	GUIPresent = true;

	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };

	ArtefactName = "MarijuanaExtract";
	ActionActor = "Character";
	
	CanFail = true;
	SourceScoreFormula = "1.0";
	TargetScoreFormula = "1.0";
	
	Cooldown = 0.01;
	
	BaseRewardXP = 11;
	
	ActionName = "UseCBDExtract";
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