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
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 1;
			Duration = 0;
			Recover = false;
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
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 3;
			Duration = 0;
			Recover = false;
		},
		FunctionAffectNeeds
		{
			ApplyTo = "Source";
			ProductType = 2;
			Amount = -0.02;
		},
	};
};

"HatchChicken" = G3ActionTemplate
{
	UICategory = "Artifact";
	GUIPresent = true;
	GUIData = array
	{
		@base/OwnFamilyKids
	};
	UsableBy = array{ "$characters.Age.Child" };
	
	ActionClassName = "UseArtefactAction";
	
	ActionName = "HatchChicken";
	ArtefactName = "EggBasket";
	DisplayName = "$action.HatchChicken";
	Description = "$action.HatchChickenDesc";
	
	ActionActor = "Character";
	EnterBuilding = "TryEnter";
		
	SourceScoreFormula = "Intelligence";
	TargetScoreFormula = "8";
	
	//Cooldown = 0.1;
	BaseRewardXP = 5;
	
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
			SpecificItems = array{"ChickenCompanion"};
		}
	};
	FailureResult = array
	{
	};
};

"HandOverAboutTalents1" = G3ActionTemplate {
	ActionName = "HandOverAboutTalents1";
	IconName = "AboutTalents1";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.AboutTalents1.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"AboutTalents1"};
		},
	};
};

"HandOverAboutTalents2" = G3ActionTemplate {
	ActionName = "HandOverAboutTalents2";
	IconName = "AboutTalents2";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.AboutTalents2.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"AboutTalents2"};
		},
	};
};

"HandOverAlmanac" = G3ActionTemplate {
	ActionName = "HandOverAlmanac";
	IconName = "Almanac";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Almanac.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Almanac"};
		},
	};
};

"HandOverAntidote" = G3ActionTemplate {
	ActionName = "HandOverAntidote";
	IconName = "Antidote";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Antidote.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Antidote"};
		},
	};
};

"HandOverArgusEyeglasses" = G3ActionTemplate {
	ActionName = "HandOverArgusEyeglasses";
	IconName = "ArgusEyeglasses";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ArgusEyeglasses.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ArgusEyeglasses"};
		},
	};
};

"HandOverAxe" = G3ActionTemplate {
	ActionName = "HandOverAxe";
	IconName = "Axe";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Axe.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Axe"};
		},
	};
};

"HandOverBandage" = G3ActionTemplate {
	ActionName = "HandOverBandage";
	IconName = "Bandage";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Bandage.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Bandage"};
		},
	};
};

"HandOverBarleybread" = G3ActionTemplate {
	ActionName = "HandOverBarleybread";
	IconName = "Barleybread";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Barleybread.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Barleybread"};
		},
	};
};

"HandOverBarrelBrewerBeer" = G3ActionTemplate {
	ActionName = "HandOverBarrelBrewerBeer";
	IconName = "BarrelBrewerBeer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BarrelBrewerBeer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BarrelBrewerBeer"};
		},
	};
};

"HandOverBeltOfMetaphysics" = G3ActionTemplate {
	ActionName = "HandOverBeltOfMetaphysics";
	IconName = "BeltOfMetaphysics";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BeltOfMetaphysics.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BeltOfMetaphysics"};
		},
	};
};

"HandOverBetrayedCaptain" = G3ActionTemplate {
	ActionName = "HandOverBetrayedCaptain";
	IconName = "BetrayedCaptain";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BetrayedCaptain.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BetrayedCaptain"};
		},
	};
};

"HandOverBlackWidowPoison" = G3ActionTemplate {
	ActionName = "HandOverBlackWidowPoison";
	IconName = "BlackWidowPoison";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BlackWidowPoison.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BlackWidowPoison"};
		},
	};
};

"HandOverBlanket" = G3ActionTemplate {
	ActionName = "HandOverBlanket";
	IconName = "Blanket";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Blanket.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Blanket"};
		},
	};
};

"HandOverBomb" = G3ActionTemplate {
	ActionName = "HandOverBomb";
	IconName = "Bomb";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Bomb.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Bomb"};
		},
	};
};

"HandOverBoneBracelet" = G3ActionTemplate {
	ActionName = "HandOverBoneBracelet";
	IconName = "BoneBracelet";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BoneBracelet.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BoneBracelet"};
		},
	};
};

"HandOverBoneTalisman" = G3ActionTemplate {
	ActionName = "HandOverBoneTalisman";
	IconName = "BoneTalisman";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BoneTalisman.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BoneTalisman"};
		},
	};
};

"HandOverBoozyBreathBeer" = G3ActionTemplate {
	ActionName = "HandOverBoozyBreathBeer";
	IconName = "BoozyBreathBeer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BoozyBreathBeer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BoozyBreathBeer"};
		},
	};
};

"HandOverBreadRoll" = G3ActionTemplate {
	ActionName = "HandOverBreadRoll";
	IconName = "BreadRoll";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.BreadRoll.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"BreadRoll"};
		},
	};
};

"HandOverCake" = G3ActionTemplate {
	ActionName = "HandOverCake";
	IconName = "Cake";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Cake.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Cake"};
		},
	};
};

"HandOverChickenCompanion" = G3ActionTemplate {
	ActionName = "HandOverChickenCompanion";
	IconName = "ChickenCompanion";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ChickenCompanion.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ChickenCompanion"};
		},
	};
};

"HandOverCider" = G3ActionTemplate {
	ActionName = "HandOverCider";
	IconName = "Cider";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Cider.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Cider"};
		},
	};
};

"HandOverComb" = G3ActionTemplate {
	ActionName = "HandOverComb";
	IconName = "Comb";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Comb.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Comb"};
		},
	};
};

"HandOverConstructionPlan" = G3ActionTemplate {
	ActionName = "HandOverConstructionPlan";
	IconName = "ConstructionPlan";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ConstructionPlan.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ConstructionPlan"};
		},
	};
};

"HandOverCookie" = G3ActionTemplate {
	ActionName = "HandOverCookie";
	IconName = "Cookie";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Cookie.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Cookie"};
		},
	};
};

"HandOverCopperBracelet" = G3ActionTemplate {
	ActionName = "HandOverCopperBracelet";
	IconName = "CopperBracelet";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.CopperBracelet.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"CopperBracelet"};
		},
	};
};

"HandOverCouncilorsChain" = G3ActionTemplate {
	ActionName = "HandOverCouncilorsChain";
	IconName = "CouncilorsChain";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.CouncilorsChain.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"CouncilorsChain"};
		},
	};
};

"HandOverCreamPie" = G3ActionTemplate {
	ActionName = "HandOverCreamPie";
	IconName = "CreamPie";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.CreamPie.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"CreamPie"};
		},
	};
};

"HandOverCrossbow" = G3ActionTemplate {
	ActionName = "HandOverCrossbow";
	IconName = "Crossbow";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Crossbow.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Crossbow"};
		},
	};
};

"HandOverDagger" = G3ActionTemplate {
	ActionName = "HandOverDagger";
	IconName = "Dagger";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Dagger.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Dagger"};
		},
	};
};

"HandOverDarkTalisman" = G3ActionTemplate {
	ActionName = "HandOverDarkTalisman";
	IconName = "DarkTalisman";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DarkTalisman.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DarkTalisman"};
		},
	};
};

"HandOverDartagnansFragrance" = G3ActionTemplate {
	ActionName = "HandOverDartagnansFragrance";
	IconName = "DartagnansFragrance";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DartagnansFragrance.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DartagnansFragrance"};
		},
	};
};

"HandOverDiamond" = G3ActionTemplate {
	ActionName = "HandOverDiamond";
	IconName = "Diamond";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Diamond.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Diamond"};
		},
	};
};

"HandOverDiamondStaff" = G3ActionTemplate {
	ActionName = "HandOverDiamondStaff";
	IconName = "DiamondStaff";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DiamondStaff.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DiamondStaff"};
		},
	};
};

"HandOverDogCompanion" = G3ActionTemplate {
	ActionName = "HandOverDogCompanion";
	IconName = "DogCompanion";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DogCompanion.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DogCompanion"};
		},
	};
};

"HandOverDrFaustusElixir" = G3ActionTemplate {
	ActionName = "HandOverDrFaustusElixir";
	IconName = "DrFaustusElixir";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DrFaustusElixir.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DrFaustusElixir"};
		},
	};
};

"HandOverDrunkardBrewBeer" = G3ActionTemplate {
	ActionName = "HandOverDrunkardBrewBeer";
	IconName = "DrunkardBrewBeer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.DrunkardBrewBeer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"DrunkardBrewBeer"};
		},
	};
};

"HandOverEgg" = G3ActionTemplate {
	ActionName = "HandOverEgg";
	IconName = "Egg";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Egg.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Egg"};
		},
	};
};

"HandOverElegantRapier" = G3ActionTemplate {
	ActionName = "HandOverElegantRapier";
	IconName = "ElegantRapier";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ElegantRapier.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ElegantRapier"};
		},
	};
};

"HandOverEndurenceDrink" = G3ActionTemplate {
	ActionName = "HandOverEndurenceDrink";
	IconName = "EndurenceDrink";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.EndurenceDrink.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"EndurenceDrink"};
		},
	};
};

"HandOverFamilySword" = G3ActionTemplate {
	ActionName = "HandOverFamilySword";
	IconName = "FamilySword";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FamilySword.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FamilySword"};
		},
	};
};

"HandOverFlatBread" = G3ActionTemplate {
	ActionName = "HandOverFlatBread";
	IconName = "FlatBread";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FlatBread.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FlatBread"};
		},
	};
};

"HandOverFlowerBouqet" = G3ActionTemplate {
	ActionName = "HandOverFlowerBouqet";
	IconName = "FlowerBouqet";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FlowerBouqet.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FlowerBouqet"};
		},
	};
};

"HandOverFlowerOfDiscord" = G3ActionTemplate {
	ActionName = "HandOverFlowerOfDiscord";
	IconName = "FlowerOfDiscord";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FlowerOfDiscord.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FlowerOfDiscord"};
		},
	};
};

"HandOverFortuneCake" = G3ActionTemplate {
	ActionName = "HandOverFortuneCake";
	IconName = "FortuneCake";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FortuneCake.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FortuneCake"};
		},
	};
};

"HandOverFriedChicken" = G3ActionTemplate {
	ActionName = "HandOverFriedChicken";
	IconName = "FriedChicken";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FriedChicken.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FriedChicken"};
		},
	};
};

"HandOverFriedTrout" = G3ActionTemplate {
	ActionName = "HandOverFriedTrout";
	IconName = "FriedTrout";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FriedTrout.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FriedTrout"};
		},
	};
};

"HandOverFruitCake" = G3ActionTemplate {
	ActionName = "HandOverFruitCake";
	IconName = "FruitCake";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.FruitCake.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"FruitCake"};
		},
	};
};

"HandOverGemRing" = G3ActionTemplate {
	ActionName = "HandOverGemRing";
	IconName = "GemRing";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.GemRing.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"GemRing"};
		},
	};
};

"HandOverGhostlyFog" = G3ActionTemplate {
	ActionName = "HandOverGhostlyFog";
	IconName = "GhostlyFog";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.GhostlyFog.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"GhostlyFog"};
		},
	};
};

"HandOverGingerbread" = G3ActionTemplate {
	ActionName = "HandOverGingerbread";
	IconName = "Gingerbread";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Gingerbread.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Gingerbread"};
		},
	};
};

"HandOverGoldChain" = G3ActionTemplate {
	ActionName = "HandOverGoldChain";
	IconName = "GoldChain";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.GoldChain.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"GoldChain"};
		},
	};
};

"HandOverGrainPap" = G3ActionTemplate {
	ActionName = "HandOverGrainPap";
	IconName = "GrainPap";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.GrainPap.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"GrainPap"};
		},
	};
};

"HandOverGrindstone" = G3ActionTemplate {
	ActionName = "HandOverGrindstone";
	IconName = "Grindstone";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Grindstone.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Grindstone"};
		},
	};
};

"HandOverHaresPaw" = G3ActionTemplate {
	ActionName = "HandOverHaresPaw";
	IconName = "HaresPaw";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.HaresPaw.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"HaresPaw"};
		},
	};
};

"HandOverHerbTea" = G3ActionTemplate {
	ActionName = "HandOverHerbTea";
	IconName = "HerbTea";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.HerbTea.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"HerbTea"};
		},
	};
};

"HandOverIronBracelet" = G3ActionTemplate {
	ActionName = "HandOverIronBracelet";
	IconName = "IronBracelet";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.IronBracelet.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"IronBracelet"};
		},
	};
};

"HandOverJuice" = G3ActionTemplate {
	ActionName = "HandOverJuice";
	IconName = "Juice";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Juice.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Juice"};
		},
	};
};

"HandOverLeatherGloves" = G3ActionTemplate {
	ActionName = "HandOverLeatherGloves";
	IconName = "LeatherGloves";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.LeatherGloves.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"LeatherGloves"};
		},
	};
};

"HandOverLockPicks" = G3ActionTemplate {
	ActionName = "HandOverLockPicks";
	IconName = "LockPicks";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.LockPicks.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"LockPicks"};
		},
	};
};

"HandOverLongsword" = G3ActionTemplate {
	ActionName = "HandOverLongsword";
	IconName = "Longsword";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Longsword.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Longsword"};
		},
	};
};

"HandOverLuckyStone" = G3ActionTemplate {
	ActionName = "HandOverLuckyStone";
	IconName = "LuckyStone";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.LuckyStone.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"LuckyStone"};
		},
	};
};

"HandOverMace" = G3ActionTemplate {
	ActionName = "HandOverMace";
	IconName = "Mace";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Mace.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Mace"};
		},
	};
};

"HandOverMead" = G3ActionTemplate {
	ActionName = "HandOverMead";
	IconName = "Mead";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Mead.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Mead"};
		},
	};
};

"HandOverMedalOfHonor" = G3ActionTemplate {
	ActionName = "HandOverMedalOfHonor";
	IconName = "MedalOfHonor";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.MedalOfHonor.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"MedalOfHonor"};
		},
	};
};

"HandOverMetalHammer" = G3ActionTemplate {
	ActionName = "HandOverMetalHammer";
	IconName = "MetalHammer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.MetalHammer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"MetalHammer"};
		},
	};
};

"HandOverMoneyBag" = G3ActionTemplate {
	ActionName = "HandOverMoneyBag";
	IconName = "MoneyBag";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.MoneyBag.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"MoneyBag"};
		},
	};
};

"HandOverMuralPainting" = G3ActionTemplate {
	ActionName = "HandOverMuralPainting";
	IconName = "MuralPainting";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.MuralPainting.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"MuralPainting"};
		},
	};
};

"HandOverNightcap" = G3ActionTemplate {
	ActionName = "HandOverNightcap";
	IconName = "Nightcap";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Nightcap.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Nightcap"};
		},
	};
};

"HandOverOakwoodRing" = G3ActionTemplate {
	ActionName = "HandOverOakwoodRing";
	IconName = "OakwoodRing";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.OakwoodRing.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"OakwoodRing"};
		},
	};
};

"HandOverObligation" = G3ActionTemplate {
	ActionName = "HandOverObligation";
	IconName = "Obligation";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Obligation.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Obligation"};
		},
	};
};

"HandOverPainKiller" = G3ActionTemplate {
	ActionName = "HandOverPainKiller";
	IconName = "PainKiller";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PainKiller.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PainKiller"};
		},
	};
};

"HandOverParalysisPoison" = G3ActionTemplate {
	ActionName = "HandOverParalysisPoison";
	IconName = "ParalysisPoison";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ParalysisPoison.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ParalysisPoison"};
		},
	};
};

"HandOverPerfume" = G3ActionTemplate {
	ActionName = "HandOverPerfume";
	IconName = "Perfume";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Perfume.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Perfume"};
		},
	};
};

"HandOverPestAway" = G3ActionTemplate {
	ActionName = "HandOverPestAway";
	IconName = "PestAway";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PestAway.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PestAway"};
		},
	};
};

"HandOverPistol" = G3ActionTemplate {
	ActionName = "HandOverPistol";
	IconName = "Pistol";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Pistol.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Pistol"};
		},
	};
};

"HandOverPoem" = G3ActionTemplate {
	ActionName = "HandOverPoem";
	IconName = "Poem";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Poem.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Poem"};
		},
	};
};

"HandOverPoisonDagger" = G3ActionTemplate {
	ActionName = "HandOverPoisonDagger";
	IconName = "PoisonDagger";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PoisonDagger.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PoisonDagger"};
		},
	};
};

"HandOverPoisonTrap" = G3ActionTemplate {
	ActionName = "HandOverPoisonTrap";
	IconName = "PoisonTrap";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PoisonTrap.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PoisonTrap"};
		},
	};
};

"HandOverPotionOfFateWomen" = G3ActionTemplate {
	ActionName = "HandOverPotionOfFateWomen";
	IconName = "PotionOfFateWomen";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PotionOfFateWomen.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PotionOfFateWomen"};
		},
	};
};

"HandOverPowderOfHygeia" = G3ActionTemplate {
	ActionName = "HandOverPowderOfHygeia";
	IconName = "PowderOfHygeia";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.PowderOfHygeia.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"PowderOfHygeia"};
		},
	};
};

"HandOverPurse" = G3ActionTemplate {
	ActionName = "HandOverPurse";
	IconName = "Purse";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Purse.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Purse"};
		},
	};
};

"HandOverRapier" = G3ActionTemplate {
	ActionName = "HandOverRapier";
	IconName = "Rapier";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Rapier.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Rapier"};
		},
	};
};

"HandOverRatCompanion" = G3ActionTemplate {
	ActionName = "HandOverRatCompanion";
	IconName = "RatCompanion";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.RatCompanion.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RatCompanion"};
		},
	};
};

"HandOverRoastBeef" = G3ActionTemplate {
	ActionName = "HandOverRoastBeef";
	IconName = "RoastBeef";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.RoastBeef.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RoastBeef"};
		},
	};
};

"HandOverRoastVenison" = G3ActionTemplate {
	ActionName = "HandOverRoastVenison";
	IconName = "RoastVenison";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.RoastVenison.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RoastVenison"};
		},
	};
};

"HandOverRoseWater" = G3ActionTemplate {
	ActionName = "HandOverRoseWater";
	IconName = "RoseWater";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.RoseWater.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RoseWater"};
		},
	};
};

"HandOverRubinStaff" = G3ActionTemplate {
	ActionName = "HandOverRubinStaff";
	IconName = "RubinStaff";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.RubinStaff.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"RubinStaff"};
		},
	};
};

"HandOverSausage" = G3ActionTemplate {
	ActionName = "HandOverSausage";
	IconName = "Sausage";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Sausage.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Sausage"};
		},
	};
};

"HandOverShadowDagger" = G3ActionTemplate {
	ActionName = "HandOverShadowDagger";
	IconName = "ShadowDagger";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ShadowDagger.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ShadowDagger"};
		},
	};
};

"HandOverShield" = G3ActionTemplate {
	ActionName = "HandOverShield";
	IconName = "Shield";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Shield.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Shield"};
		},
	};
};

"HandOverShortSword" = G3ActionTemplate {
	ActionName = "HandOverShortSword";
	IconName = "ShortSword";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ShortSword.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ShortSword"};
		},
	};
};

"HandOverSignetGuildofCraftsmen" = G3ActionTemplate {
	ActionName = "HandOverSignetGuildofCraftsmen";
	IconName = "SignetGuildofCraftsmen";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SignetGuildofCraftsmen.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SignetGuildofCraftsmen"};
		},
	};
};

"HandOverSignetGuildofMerchants" = G3ActionTemplate {
	ActionName = "HandOverSignetGuildofMerchants";
	IconName = "SignetGuildofMerchants";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SignetGuildofMerchants.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SignetGuildofMerchants"};
		},
	};
};

"HandOverSignetRing" = G3ActionTemplate {
	ActionName = "HandOverSignetRing";
	IconName = "SignetRing";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SignetRing.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SignetRing"};
		},
	};
};

"HandOverSilverChain" = G3ActionTemplate {
	ActionName = "HandOverSilverChain";
	IconName = "SilverChain";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SilverChain.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SilverChain"};
		},
	};
};

"HandOverSilverRing" = G3ActionTemplate {
	ActionName = "HandOverSilverRing";
	IconName = "SilverRing";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SilverRing.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SilverRing"};
		},
	};
};

"HandOverSkullLamp" = G3ActionTemplate {
	ActionName = "HandOverSkullLamp";
	IconName = "SkullLamp";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SkullLamp.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SkullLamp"};
		},
	};
};

"HandOverSlateBoard" = G3ActionTemplate {
	ActionName = "HandOverSlateBoard";
	IconName = "SlateBoard";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SlateBoard.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SlateBoard"};
		},
	};
};

"HandOverSlateTile" = G3ActionTemplate {
	ActionName = "HandOverSlateTile";
	IconName = "SlateTile";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SlateTile.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SlateTile"};
		},
	};
};

"HandOverSlideRule" = G3ActionTemplate {
	ActionName = "HandOverSlideRule";
	IconName = "SlideRule";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SlideRule.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SlideRule"};
		},
	};
};

"HandOverSmallBeer" = G3ActionTemplate {
	ActionName = "HandOverSmallBeer";
	IconName = "SmallBeer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SmallBeer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SmallBeer"};
		},
	};
};

"HandOverSmokedPerch" = G3ActionTemplate {
	ActionName = "HandOverSmokedPerch";
	IconName = "SmokedPerch";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SmokedPerch.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SmokedPerch"};
		},
	};
};

"HandOverSpinningTop" = G3ActionTemplate {
	ActionName = "HandOverSpinningTop";
	IconName = "SpinningTop";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.SpinningTop.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"SpinningTop"};
		},
	};
};

"HandOverStatelyDispatch" = G3ActionTemplate {
	ActionName = "HandOverStatelyDispatch";
	IconName = "StatelyDispatch";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.StatelyDispatch.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"StatelyDispatch"};
		},
	};
};

"HandOverStinkBomb" = G3ActionTemplate {
	ActionName = "HandOverStinkBomb";
	IconName = "StinkBomb";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.StinkBomb.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"StinkBomb"};
		},
	};
};

"HandOverStoneSoldier" = G3ActionTemplate {
	ActionName = "HandOverStoneSoldier";
	IconName = "StoneSoldier";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.StoneSoldier.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"StoneSoldier"};
		},
	};
};

"HandOverStrongDoorLatch" = G3ActionTemplate {
	ActionName = "HandOverStrongDoorLatch";
	IconName = "StrongDoorLatch";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.StrongDoorLatch.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"StrongDoorLatch"};
		},
	};
};

"HandOverTalismanOfInspiration" = G3ActionTemplate {
	ActionName = "HandOverTalismanOfInspiration";
	IconName = "TalismanOfInspiration";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.TalismanOfInspiration.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"TalismanOfInspiration"};
		},
	};
};

"HandOverThrowingKnife" = G3ActionTemplate {
	ActionName = "HandOverThrowingKnife";
	IconName = "ThrowingKnife";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ThrowingKnife.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ThrowingKnife"};
		},
	};
};

"HandOverToadExcrements" = G3ActionTemplate {
	ActionName = "HandOverToadExcrements";
	IconName = "ToadExcrements";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ToadExcrements.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ToadExcrements"};
		},
	};
};

"HandOverToadSlime" = G3ActionTemplate {
	ActionName = "HandOverToadSlime";
	IconName = "ToadSlime";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.ToadSlime.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"ToadSlime"};
		},
	};
};

"HandOverTorch" = G3ActionTemplate {
	ActionName = "HandOverTorch";
	IconName = "Torch";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.Torch.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"Torch"};
		},
	};
};

"HandOverWalkingStick" = G3ActionTemplate {
	ActionName = "HandOverWalkingStick";
	IconName = "WalkingStick";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WalkingStick.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WalkingStick"};
		},
	};
};

"HandOverWarBanner" = G3ActionTemplate {
	ActionName = "HandOverWarBanner";
	IconName = "WarBanner";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WarBanner.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WarBanner"};
		},
	};
};

"HandOverWashCloth" = G3ActionTemplate {
	ActionName = "HandOverWashCloth";
	IconName = "WashCloth";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WashCloth.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WashCloth"};
		},
	};
};

"HandOverWeaponPoison" = G3ActionTemplate {
	ActionName = "HandOverWeaponPoison";
	IconName = "WeaponPoison";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WeaponPoison.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WeaponPoison"};
		},
	};
};

"HandOverWheatBeer" = G3ActionTemplate {
	ActionName = "HandOverWheatBeer";
	IconName = "WheatBeer";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WheatBeer.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WheatBeer"};
		},
	};
};

"HandOverWheatBread" = G3ActionTemplate {
	ActionName = "HandOverWheatBread";
	IconName = "WheatBread";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WheatBread.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WheatBread"};
		},
	};
};

"HandOverWonderCure" = G3ActionTemplate {
	ActionName = "HandOverWonderCure";
	IconName = "WonderCure";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WonderCure.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WonderCure"};
		},
	};
};

"HandOverWoodenShield" = G3ActionTemplate {
	ActionName = "HandOverWoodenShield";
	IconName = "WoodenShield";

@base/EggModHandOverItemActionsInclude

	SuccessResult = array {
		FunctionTransferItems
		{
			Filter = "Source.hasItems.WoodenShield.1";
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 1;
			MaxAmount = 1;
			SpecificItems = array{"WoodenShield"};
		},
	};
};
// LandlordMod Actions
"MakePeaceBetweenEnemies" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";

	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 136;
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Sovereign" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	Cooldown = 1.0;
	Duration = 0.005;

	ActionName = "MakePeaceBetweenEnemies";
	DisplayName = "$MakePeaceBetweenEnemies";
	Description = "$MakePeaceBetweenEnemiesDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 50;
	CurrencyType = "Prestige";
	PriceFormula = "500";
	
	CanFail = false;
	CriticalFactor = 1;

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
		},
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

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0,0.5,0.5};
	};
	
	OnlyExecute = true;
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Target";
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "50";
			AffectSource = "50";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "MakePeaceBetweenEnemiesSource";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Target";
			Description = "MakePeaceBetweenEnemiesTarget1";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Target";
			Description = "MakePeaceBetweenEnemiesTarget1femaleSovereign";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Context";
			Description = "MakePeaceBetweenEnemiesTarget2";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Context";
			Description = "MakePeaceBetweenEnemiesTarget2femaleSovereign";
		}
	};
};

"SparkAFeud" = G3ActionTemplate
{
	ActionClassName = "SimpleExecutionAction";

	GUIPresent = true;
	UICategory = "Diplomacy";
	OrderIndex = 137;
	GUIData = array
	{
		@base/OfficeHolder
	};
	UsableBy = array{ "$gui.politics.office.Sovereign" };

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Family";
	
	Cooldown = 1.0;
	Duration = 0.005;

	ActionName = "SparkAFeud";
	DisplayName = "$SparkAFeud";
	Description = "$SparkAFeudDesc";
	Instruction = "$callToAction.OtherDynastyAdultMember";

	BaseRewardXP = 50;
	CurrencyType = "Prestige";
	PriceFormula = "500";
	
	CanFail = false;
	CriticalFactor = 1;

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
		},
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

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.5,0,-0.5};
	};
	
	OnlyExecute = true;
		
	SuccessResult = array
	{
		FunctionUpdateRelationship
		{
			AffectSource = "10";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Source";
			AffectTarget = "-50";
			AffectSource = "-50";
		},
		FunctionUpdateRelationship
		{
			UseContextAs = "Target";
			AffectSource = "-20";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "SparkAFeudSource";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Target";
			Description = "SparkAFeudTarget1";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Target";
			Description = "SparkAFeudTarget1femaleSovereign";
		},
		FunctionSendMessage
		{
			Filter = "Source.IsMale";
			ApplyTo = "Context";
			Description = "SparkAFeudTarget2";
		},
		FunctionSendMessage
		{
			Filter = "!Source.IsMale";
			ApplyTo = "Context";
			Description = "SparkAFeudTarget2femaleSovereign";
		}
	};
};

"UseMatchmaker" = G3ActionTemplate
{
    GUIPresent = true;
    UICategory = "Romance";
    OrderIndex = 66;

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
	
    ActionName = "UseMatchmaker";
    DisplayName = "$action.UseMatchmaker";
    Description = "$action.UseMatchmakerDesc";
    Instruction = "$callToAction.StartRomance";
    ActionActor = "Character";
    TargetActor = "Character";
    
	EnterBuilding = "TryEnter";
    SuppressBuildingEnterBehavior = true;
    
    Cooldown = 0.015;
    
	PriceFormula = "(SocialLevel * 10) * ((25 * hasTag.BuffEasy) + (50 * hasTag.BuffNormal) + (75 * hasTag.BuffHard) + (100 * hasTag.BuffImpossible))";

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
			OppositeGender = 3;
			DynastyMember = -3; 
			NPCGuard = -3;
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
		FunctionTransferPrestige
		{
			Giver = "Source";
			Receiver = "";
			Amount = "(Target.SocialLevel + 1) * ((25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible))";
		},
		FunctionCreateRomanceWithTarget
		{
			// no members
		},
		FunctionCreateEngagementWithTarget
		{
			// no members
		},
		FunctionMarryTarget
		{
			ApplyTo = "Source";
			Target = "Target";
		},
		FunctionSendMessage
		{
			ApplyTo = "Source";
			Description = "UseMatchmaker";
		}
	};
};

"ActivateForRent" = G3ActionTemplate //Activate "ForRent" for this residence
{
	GUIPresent = true;
	UICategory = "Family";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "ActivateForRent";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.ActivateForRent";
	Description = "$action.ActivateForRentDesc";
	Instruction = "$selectionPrompt.ActivateForRent";

	ActionActor = "Character";
	TargetActor = "Building";
	
	Cooldown = 0.0;
	Duration = 0.005;
	
	CanFail = false;
	CriticalFactor = 1;

	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			ActiveResidence = -3;
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
			TargetSnapPointAnimation{ Animation = "UseConstructionPlan"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SuccessResult = array
	{
		DisplayEffect
		{
			Filter = "Target.hasTag.CountryHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated3";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.PoorHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated5";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.CityHouse";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated8";
			Duration = 0.0;
		},
		DisplayEffect
		{
			Filter = "Target.hasTag.Mansion";
			Tags = array{"ForRent"};
			ApplyTo = "Target";
			DisplayGroup = "forrent";
			DisplayName = "$ForRentActivated12";
			Duration = 0.0;
		}
	};
};

"DeactivateForRent" = G3ActionTemplate //Deactivate "ForRent" for this residence
{
	GUIPresent = true;
	UICategory = "Family";

	GUIData = array
	{
		@base/OwnFamilyAdults
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ActionName = "DeactivateForRent";
	ActionClassName = "SimpleExecutionAction";
	
	DisplayName = "$action.DeactivateForRent";
	Description = "$action.DeactivateForRentDesc";
	Instruction = "$selectionPrompt.DeactivateForRent";

	ActionActor = "Character";
	TargetActor = "Building";
	
	Cooldown = 0.0;
	Duration = 0.005;
	
	CanFail = false;
	CriticalFactor = 1;

	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
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
			TargetSnapPointAnimation{ Animation = "UseConstructionPlan"; },
		};
	};

	EnterBuilding = "TryEnter";
	SuppressBuildingEnterBehavior = true;
	
	SuccessResult = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array { "ForRent" };
		},
	};
};

"NPCRentSleepPlace" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesNotHaveTag = "NoService"; // courted characters should not go to bed
		}
	};

	CanFail = false;

	ActionActor = "Character";
	IconName = "Idle";

	ActionName = "NPCRentSleepPlace";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";

	ActionClassName = "SimpleExecutionAction";

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	EnterBuilding = "TryEnter";

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionTriggerAction
		{
			Filter = "(Date % 1.0) > 0.9166 || (Date % 1.0) < 0.25";
			ApplyTo = "Source";
			ActionTarget = "FromTargetProfile";
			Actions = array{"NPCRentSleepPlaceSleep"};
		}
	};
};

"NPCRentSleepPlaceSleep" = G3ActionTemplate
{
	ActionClassName = "SleepAction";
	GUIPresent = false;
	CanFail = false;
	
	TargetTags = array{"ForRent"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			IncludedTypes = array{"CountryHouse", "PoorHouse", "CityHouse", "Mansion"};
			CloseToActor = 2;
			Burning = -3;
			FamilyProfile = TargetProfileFamily
			{
				GoodRelationWithMe = 2;
			};
		};
	};
	
	ShowCombatText = false;
	AskConfirmationOnCancel = false;
	InterruptForSleep = false; // We don't want the sleep automation to interrupt manual sleep.
	
	ActionActor = "Character";
	TargetActor = "Building";

	IconName = "Sleep";
	ActionName = "NPCRentSleepPlaceSleep";
	DisplayName = "$action.Sleep";
	Description = "$action.SleepDesc";
	
	Cooldown = 0.001; //~1sec
	
	Duration = 0.25;
		
	EnterBuilding = "ForceEnter";
	
	TargetSnapPoint = TargetSnapPoint
	{
		Required = false;
		ShouldReserve = false;
		ShouldOccupy = false;

		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "GoToBed"; },
		};
	};
	
	CriticalFactor = 1.0;

	BudgetPost = "Services";
	BudgetPot = "Business";
	@base/ForRentInclude

	OnFinishResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"WakeUpAction"};
			CheckSourceProfile = false; // The WakeUpAction checks if the target is asleep. This gets executed after the target has already awoken, so ignore that check here.
		},
	};
};