//$NPC.DoNothing
//$NPC.DoNothingDesc
//$NPC.Stroll
//$NPC.StrollDesc
//$NPC.Thinking
//$NPC.ThinkingDesc

// choose random short follow up action for AI dynasty characters
"NPCDynRandomFollowUpShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	IconName = "Idle";
	
	ActionName = "NPCDynRandomFollowUpShort";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;
	EnterBuilding = "TryEnter";

	CriticalFactor = 0.95;

	CriticalSuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
            Actions = array{"NPCEatBreadShort", "NPCDrinkShort"};
        },
	};

	SuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
			ActionTarget = "FromTargetProfile";
            Actions = array{"NPCFindRandomSpot", "NPCFindRandomBuilding"}; // add SitOnBench
        },
	};
};
"NPCFindRandomSpot" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Walk";
	
	ActionName = "NPCFindRandomSpot";
	DisplayName = "$NPC.Stroll";
	Description = "$NPC.StrollDesc";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Coordinate";
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			CloseToActor = 2;
			OnStreet = 3;
			QuarterSurrounding = -3;
			MaxDistance = 5000;
		}
	};

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	SuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
            Actions = array{"NPCWaitShort", "NPCReadLetterShort", "NPCReadBookShort"};
        },
	};
};
"NPCFindRandomBuilding" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Walk";
	
	ActionName = "NPCFindRandomBuilding";
	DisplayName = "$NPC.Stroll";
	Description = "$NPC.StrollDesc";

	ActionClassName = "SimpleExecutionAction";

	ActionActor = "Character";
	TargetActor = "Building";
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			CloseToActor = 2;
			ExcludedTypes = array{"Mine", "Quarry", "LumberYard", "Cemetary", "Grove", "Brushwood", "trademarket", "RobberCamp"};
			MaxDistance = 8000;
		}
	};

	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	DistanceFromTarget = 75;
	DistanceFromTargetMin = 50;

	SuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
            Actions = array{"NPCWaitShort"};
        },
	};
};

// choose random short follow up action for NPCs
"NPCRandomFollowUpShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Walk";
	
	ActionName = "NPCRandomFollowUpShort";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	CriticalFactor = 0.98;

	CriticalSuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
            Actions = array{"NPCEatBreadShort", "NPCDrinkShort", "NPCReadLetterShort", "NPCReadBookShort"};
        },
	};

	SuccessResult = array
	{
        FunctionTriggerAction
        {
            Filter = "!IsControlledByHuman";
            ApplyTo = "Source";
            Actions = array{"NPCWaitShort"};
        },
	};
};

"NPCWaitShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCWaitShort";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.005;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
		CustomAnimationInfo = array {"idle1", 0, -1, -1};
		CustomAnimationInfo = array {"idle2", 0, -1, -1};
	};
};

"NPCWaitLong" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCWaitLong";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.03;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"listen1", 0, -1, -1};
		CustomAnimationInfo = array {"idle1", 0, -1, -1};
		CustomAnimationInfo = array {"idle2", 0, -1, -1};
	};
};

"NPCDrinkShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Drunk";
	
	ActionName = "NPCDrinkShort";
	DisplayName = "$NPC.DoNothing2";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.005;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"drink_poison1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "antidote/antidote" }; };
	};
};

"NPCEatBreadShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Eat";
	
	ActionName = "NPCEatBreadShort";
	DisplayName = "$NPC.DoNothing2";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.005;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"eat", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "bread/bread" }; };
	};
};

"NPCReadLetterShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCReadLetterShort";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.005;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"read_love_letter1", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "loveletter/loveletter" }; };
	};
};

"NPCReadBookShort" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCReadBookShort";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	EnterBuilding = "TryEnter";
	ResumeAfterInterruption = false;
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.005;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"idle_readbook1", 0, -1, -1};
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "book2/book2" }; };
	};
};

"NPCRunHomeSharpenSword" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCRunHomeSharpenSword";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";
	
	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";

	DesiredProfiles = array
	{
		TargetProfileBuilding 
		{					
			Burning = -3;
			Home = 3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};

	DistanceFromTarget = 50;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	Duration = 0.015;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"sharpensword", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};
	AnimationProps = array
	{
		PropSpawnDesc { PropNames = array { "longsword/longsword" }; };
	};
};

// **********************************

// delete OldBoot from inventory
"NPCDeleteOldBoot" = G3ActionTemplate
{
	GUIPresent = false;

	IconName = "Idle";
	
	ActionName = "NPCDeleteOldBoot";
	DisplayName = "$NPC.DoNothing";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	InteractionPriority = 5;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";

	CanFail = false;
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Giver = "Source";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"OldBoot"};
		},
	};
};

// delete Remains from inventory
"NPCDeleteRemains" = G3ActionTemplate
{
	GUIPresent = false;

	IconName = "Idle";
	
	ActionName = "NPCDeleteRemains";
	DisplayName = "$NPC.DoNothing";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	InteractionPriority = 5;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";

	CanFail = false;
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionTransferItems
		{
			Giver = "Source";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"Remains"};
		},
		FunctionTriggerAction
		{
			Filter = "!IsControlledByHuman";
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// equip HaresPaw
"NPCEquipHaresPaw" = G3ActionTemplate
{
	GUIPresent = false;

	IconName = "Idle";
	
	ActionName = "NPCEquipHaresPaw";
	DisplayName = "$NPC.DoNothing";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	InteractionPriority = 5;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";

	CanFail = false;
	CriticalFactor = 1.0;
	
	SuccessResult = array
	{
		FunctionEquipItem
		{
			Item = "HaresPaw";
			ItemSources = array{"Inventory"}; // Market (instant purchase if available), Ether (magic), Acquire (try to produce it), Family (buildings) ; the options are checked in sequence
			ItemDestinations = array{"Ether"}; // Family (building), Market (instant sell), Ether (delete) ; the options are checked in sequence
			Replace = "Better"; // Better (replace only if the tier is better), Never (don't replace if slot is blocked), Always (always replace)
		},
		FunctionTransferItems // destroy all surplus HaresPaws
		{
			Giver = "Source";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"HaresPaw"};
		},
	};
};

// the child should equip the trained rat
"NPCEquipRatCompanion" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 0;
		}
	};

	IconName = "TrainRat";
	
	ActionName = "NPCEquipRatCompanion";
	DisplayName = "$NPC.DoNothing";
	Description = "$NPC.DoNothingDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	InteractionPriority = 5;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";

	Duration = 0.005;

	CanFail = false;
	CriticalFactor = 1.0;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"giving_money1", 0, -1, -1}; // SoundCategory, Sound Id, Sound sub id
	};

	SuccessResult = array
	{
		FunctionEquipItem
		{
			Item = "RatCompanion";
			ItemSources = array{"Inventory"}; // Market (instant purchase if available), Ether (magic), Acquire (try to produce it), Family (buildings) ; the options are checked in sequence
			ItemDestinations = array{"Ether"}; // Family (building), Market (instant sell), Ether (delete) ; the options are checked in sequence
			Replace = "Better"; // Better (replace only if the tier is better), Never (don't replace if slot is blocked), Always (always replace)
		},
		FunctionTransferItems // destroy all surplus RatCompanions
		{
			Giver = "Source";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"RatCompanion"};
		},
		FunctionTransferItems // destroy all surplus RatCompanions
		{
			Giver = "Source";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"Rat"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// let the character move to the marketplace and sell stuff
"NPCSellAllAtMarketpace" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "GoMarket";
	
	ActionName = "NPCSellAllAtMarketpace";
	DisplayName = "$GoMarket";
	Description = "$GoMarketDesc";

	ActionActor = "Character";
	ActionClassName = "GoMarket";
	
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	EnterBuilding = "TryEnter";

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		// now sell all stuff in your inventory...
		FunctionEmptyCharacterInventory
		{
			Mode = "DestroyRest";
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// let the character go home and store the Mandrake
"NPCBringHomeMandrake" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "GoHome";
	
	ActionName = "NPCBringHomeMandrake";
	DisplayName = "$GoHome";
	Description = "$GoHomeDesc";

	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";

	DesiredProfiles = array
	{
		TargetProfileBuilding 
		{					
			Burning = -3;
			Home = 3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};
	
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	EnterBuilding = "TryEnter";

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionTransferItems
		{
			Giver = "Source";
			Receiver = "Target";
			MinAmount = 20;
			MaxAmount = 20;
			SpecificItems = array{"Mandrake"};
		},
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"Exit"};
		}
	};
};

// let the character go home and unload all
"NPCGoHomeUnloadAll" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "GoHome";
	
	ActionName = "NPCGoHomeUnloadAll";
	DisplayName = "$GoHome";
	Description = "$GoHomeDesc";

	ActionActor = "Character";
	TargetActor = "Building";
	ActionClassName = "SimpleExecutionAction";

	DesiredProfiles = array
	{
		TargetProfileBuilding 
		{					
			Burning = -3;
			Home = 3;
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		};
	};
	
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;

	RestartAfterUnconsciousness = true;
	ResumeProgress = true;

	EnterBuilding = "TryEnter";

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionEmptyCharacterInventory
		{
			Mode = "KeepRest";
		}
	};
};

// let the character empty their inventory
"NPCEmptyInventory" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	IconName = "Idle";
	
	ActionName = "NPCEmptyInventory";
	DisplayName = "$NPC.Thinking";
	Description = "$NPC.ThinkingDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	InteractionPriority = 0;
	ShowCombatText = false;
	CanFail = false;
	EnterBuilding = "TryEnter";

	RestartAfterUnconsciousness = true;
	ResumeProgress = true;

	CriticalFactor = 1.0;

	SuccessResult = array
	{
		FunctionEmptyCharacterInventory
		{
			Mode = "DestroyAll";
		}
	};
};
