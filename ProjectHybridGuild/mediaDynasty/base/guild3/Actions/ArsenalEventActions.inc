// all ArsenalEvent actions that can be started by talking to the MoA

"ArsenalEvent" = G3ActionTemplate // dummy action used to make an action icon visible in the dialogue with the MoA
{
	GUIPresent = false;
	ActionName = "ArsenalEvent";
	ActionClassName = "SimpleExecutionAction";
	DisplayName = "$action.ArsenalEvent";
	ActionActor = "Character";
};

"WarEventSoldier" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsLeader = 0;
			//IsFamilyMember = 1;
			HasProfession = "Mercenary";
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			HasProfession = "Mercenary";
			//IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "WarEventSoldier";
	IconName = "WarEventFootSoldier";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.WarEvent.Soldier";
	Description = "$action.WarEvent.SoldierDesc";
	
	SourceScoreFormula = "Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Armor * 0.3 + Source.Damage * 1.2 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
	
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"WarEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		// apply war tag
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Won";
			ApplyTo = "Source";
			Tags = array{"WarWon"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Lost";
			ApplyTo = "Source";
			Tags = array{"WarLost"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Truce";
			ApplyTo = "Source";
			Tags = array{"WarTruce"};
			Duration = 0.0;
		},
		
		// apply stats tag
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) <= 100)";
			ApplyTo = "Source";
			Tags = array{"WarStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) > 100 && (Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) <= 160)";
			ApplyTo = "Source";
			Tags = array{"WarStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) > 160)";
			ApplyTo = "Source";
			Tags = array{"WarStatsGood"};
			Duration = 0.0;
		},		
	};
	OnEndResult = array
	{
	};

	CriticalSuccessResult = array
	{	
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Soldier.CriticalSuccess" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Soldier.CriticalSuccess" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Soldier.CriticalSuccess" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	SuccessResult = array
	{	
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Soldier.Success" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Soldier.Success" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Soldier.Success" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	FailureResult = array
	{
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Soldier.Failure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Soldier.Failure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Soldier.Failure" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Soldier.CriticalFailure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Soldier.CriticalFailure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Soldier.CriticalFailure" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
};

"WarEventOfficer" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "WarEventOfficer";
	IconName = "WarEventOfficer";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.WarEvent.Officer";
	Description = "$action.WarEvent.OfficerDesc";
	
	SourceScoreFormula = "Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Armor * 0.3 + Source.Damage * 1.2 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"WarEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Won";
			ApplyTo = "Source";
			Tags = array{"WarWon"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Lost";
			ApplyTo = "Source";
			Tags = array{"WarLost"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.WarEvent && ExistsScriptEventWithTag.Truce";
			ApplyTo = "Source";
			Tags = array{"WarTruce"};
			Duration = 0.0;
		},

		// apply stats tag
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) <= 100)";
			ApplyTo = "Source";
			Tags = array{"WarStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) > 100 && (Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) <= 160)";
			ApplyTo = "Source";
			Tags = array{"WarStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.Lansquenet && ((Source.AttackPower * 6 + Source.DefensePower * 7.5 + Source.Damage * 1.2 + Source.Armor * 0.3) > 160)";
			ApplyTo = "Source";
			Tags = array{"WarStatsGood"};
			Duration = 0.0;
		},		
	};
	OnEndResult = array
	{
	};

	CriticalSuccessResult = array
	{	
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Officer.CriticalSuccess" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Officer.CriticalSuccess" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Officer.CriticalSuccess" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	SuccessResult = array
	{	
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Officer.Success" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Officer.Success" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Officer.Success" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	FailureResult = array
	{
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Officer.Failure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Officer.Failure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Officer.Failure" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarWon";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Won.Officer.CriticalFailure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarLost";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Lost.Officer.CriticalFailure" };
		},
		FunctionApplyResults
		{
			Filter = "Source.hasTag.WarTruce";
			ApplyTo ="Source";
			ResultObjectIds = array{ "WarEvent.Truce.Officer.CriticalFailure" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"WarWon", "WarLost", "WarTruce", "WarRansom", "WarStatsPoor", "WarStatsAverage", "WarStatsGood"};
		},
	};
};

"MerchantsGuildEventNormal" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "MerchantsGuildEventNormal";
	IconName = "MerchantsGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.MerchantsGuildEvent";
	Description = "$action.MerchantsGuildEventDesc";
	
	SourceScoreFormula = "Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;

	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.250, -0.250, 0.075};
	};
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.MerchantsGuildEvent";
			ApplyTo = "Source";
			Tags = array{"MerchantsGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) > 100 && (Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};

	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 250; },


		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl", "Purse", "Obligation", "Purse", "Obligation", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "Purse", "Obligation" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.GuildStatsPoor) + (200 * Source.hasTag.GuildStatsAverage) + (225 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 200; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 2; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.GuildStatsPoor) + (75 * Source.hasTag.GuildStatsAverage) + (100 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"MerchantsGuildEventMember" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesHaveTag = "MerchantsGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesHaveTag = "MerchantsGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "MerchantsGuildEventMember";
	IconName = "MerchantsGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.MerchantsGuildEvent";
	Description = "$action.MerchantsGuildEventDesc";
	
	SourceScoreFormula = "40 + Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(20 * Source.hasTag.BuffEasy) + (40 * Source.hasTag.BuffNormal) + (80 * Source.hasTag.BuffHard) + (160 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.250, -0.250, 0.075};
	};
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.MerchantsGuildEvent";
			ApplyTo = "Source";
			Tags = array{"MerchantsGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) > 100 && (Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Charisma * 10 + Source.Perception * 10 + Source.BargainingBonus * 3) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.GuildStatsPoor) + (425 * Source.hasTag.GuildStatsAverage) + (500 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 20"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "SignetGuildofMerchants", "DiamondStaff", "Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Pepper", "Porcelain", "Purple", "Salt", "Silk", "Tobacco", "Wine", "Amber", "Brocade", "Ivory", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 5"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 10"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofMerchants", "DiamondStaff", "MoneyBag", "Perfume", "Poem", "GoldChain", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition", "event.buff.SenseForDanger", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.TradersIntuition.female", "event.buff.SenseForDanger", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.GuildStatsPoor) + (100 * Source.hasTag.GuildStatsAverage) + (125 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"MerchantsGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"FreemasonsEventNormal" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "FreemasonsEventNormal";
	IconName = "FreemasonsEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.FreemasonsEvent";
	Description = "$action.FreemasonsEventDesc";
	
	SourceScoreFormula = "Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)";
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.500, 0.250, 0.250};
	};
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.FreemasonsEvent";
			ApplyTo = "Source";
			Tags = array{"FreemasonsEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) > 100 && (Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 250; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk", "Purse", "Obligation", "Purse", "Obligation", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "Purse", "Obligation" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.GuildStatsPoor) + (200 * Source.hasTag.GuildStatsAverage) + (225 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 200; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 2; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.GuildStatsPoor) + (75 * Source.hasTag.GuildStatsAverage) + (100 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"FreemasonsEventMember" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesHaveTag = "Freemasons";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesHaveTag = "Freemasons";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "FreemasonsEventMember";
	IconName = "FreemasonsEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.FreemasonsEvent";
	Description = "$action.FreemasonsEventDesc";
	
	SourceScoreFormula = "40 + Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(20 * Source.hasTag.BuffEasy) + (40 * Source.hasTag.BuffNormal) + (80 * Source.hasTag.BuffHard) + (160 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.500, 0.250, 0.250};
	};
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.FreemasonsEvent";
			ApplyTo = "Source";
			Tags = array{"FreemasonsEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) > 100 && (Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Charisma * 10 + Source.Intimidation * 7) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.GuildStatsPoor) + (425 * Source.hasTag.GuildStatsAverage) + (500 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 20"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"ConstructionPlan", "MetalHammer" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"AboutTalents1", "AboutTalents2", "Almanac", "CartBig", "LuckyStone", "Amber", "Wine", "Brocade", "Ivory", "Pearl", "Silk"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 5"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 10"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"ConstructionPlan", "MetalHammer", "AboutTalents1", "AboutTalents2", "Almanac", "LuckyStone", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster", "event.buff.MasterArchitect", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.ExemplaryMaster.female", "event.buff.MasterArchitect.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.GuildStatsPoor) + (100 * Source.hasTag.GuildStatsAverage) + (125 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"FreemasonsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"AlchimistsEventNormal" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "AlchimistsEventNormal";
	IconName = "AlchimistsEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.AlchimistsEvent";
	Description = "$action.AlchimistsEventDesc";
	
	SourceScoreFormula = "Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)";
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.500, -0.075, -0.250};
	};
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.AlchimistsEvent";
			ApplyTo = "Source";
			Tags = array{"AlchimistsEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) > 100 && (Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 250; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl", "Purse", "Obligation", "Purse", "Obligation", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Purse", "Obligation" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.GuildStatsPoor) + (200 * Source.hasTag.GuildStatsAverage) + (225 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 200; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 2; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.GuildStatsPoor) + (75 * Source.hasTag.GuildStatsAverage) + (100 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"AlchimistsEventMember" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesHaveTag = "Alchimists";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesHaveTag = "Alchimists";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "AlchimistsEventMember";
	IconName = "AlchimistsEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.AlchimistsEvent";
	Description = "$action.AlchimistsEventDesc";
	
	SourceScoreFormula = "40 + Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(20 * Source.hasTag.BuffEasy) + (40 * Source.hasTag.BuffNormal) + (80 * Source.hasTag.BuffHard) + (160 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.500, -0.075, -0.250};
	};
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.AlchimistsEvent";
			ApplyTo = "Source";
			Tags = array{"AlchimistsEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) > 100 && (Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Intelligence * 10 + Source.Dexterity * 10 + Source.Resistance * 2.5) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.GuildStatsPoor) + (425 * Source.hasTag.GuildStatsAverage) + (500 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 20"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "PoisonTrap", "TalismanOfInspiration", "Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Almanac", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "PlagueSuit", "PowderOfHygeia", "Amber", "Wine", "Ivory", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 5"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 10"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"PoisonTrap", "TalismanOfInspiration", "Antidote", "DrFaustusElixir", "EndurenceDrink", "PestAway", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist", "event.buff.Initiated", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterAlchemist.female", "event.buff.Initiated", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.GuildStatsPoor) + (100 * Source.hasTag.GuildStatsAverage) + (125 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.BurnedFingers", "event.debuff.DullEyes", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"AlchimistsEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"CraftmensGuildEventNormal" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "CraftmensGuildEventNormal";
	IconName = "CraftmensGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.CraftmensGuildEvent";
	Description = "$action.CraftmensGuildEventDesc";
	
	SourceScoreFormula = "Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)";
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.250, 0.075, 0.500};
	};
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.CraftmensGuildEvent";
			ApplyTo = "Source";
			Tags = array{"CraftmensGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) > 100 && (Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 250; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl", "Purse", "Obligation", "Purse", "Obligation", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "Purse", "Obligation" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.GuildStatsPoor) + (200 * Source.hasTag.GuildStatsAverage) + (225 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 200; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 2; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.GuildStatsPoor) + (75 * Source.hasTag.GuildStatsAverage) + (100 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"CraftmensGuildEventMember" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesHaveTag = "CraftmensGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesHaveTag = "CraftmensGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "CraftmensGuildEventMember";
	IconName = "CraftmensGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.CraftmensGuildEvent";
	Description = "$action.CraftmensGuildEventDesc";
	
	SourceScoreFormula = "40 + Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(20 * Source.hasTag.BuffEasy) + (40 * Source.hasTag.BuffNormal) + (80 * Source.hasTag.BuffHard) + (160 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{0.250, 0.075, 0.500};
	};
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.CraftmensGuildEvent";
			ApplyTo = "Source";
			Tags = array{"CraftmensGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) > 100 && (Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Strength * 10 + Source.Intelligence * 10 + Source.Productivity * 30) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.GuildStatsPoor) + (425 * Source.hasTag.GuildStatsAverage) + (500 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 20"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"RubinStaff", "CartBig", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "GoldChain", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 5"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 10"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"SignetGuildofCraftsmen", "MetalHammer", "RubinStaff", "BeltOfMetaphysics", "DrunkardBrewBeer", "EndurenceDrink", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter", "event.buff.ExemplaryMaster", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.MasterCrafter.female", "event.buff.ExemplaryMaster.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.GuildStatsPoor) + (100 * Source.hasTag.GuildStatsAverage) + (125 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.Disfigured", "event.debuff.Clumsy", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"CraftmensGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"ThievesGuildEventNormal" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		}
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "ThievesGuildEventNormal";
	IconName = "ThievesGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.ThievesGuildEvent";
	Description = "$action.ThievesGuildEventDesc";
	
	SourceScoreFormula = "Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)";
	TargetScoreFormula = "(25 * Source.hasTag.BuffEasy) + (50 * Source.hasTag.BuffNormal) + (100 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.750, -0.750, -0.500};
	};
	
	CriticalFactor = 0.9;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.ThievesGuildEvent";
			ApplyTo = "Source";
			Tags = array{"ThievesGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) > 100 && (Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 250; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl", "Purse", "Obligation", "Purse", "Obligation", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "Purse", "Obligation" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.GuildStatsPoor) + (200 * Source.hasTag.GuildStatsAverage) + (225 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 200; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Purse", "Obligation", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 2; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.GuildStatsPoor) + (75 * Source.hasTag.GuildStatsAverage) + (100 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"ThievesGuildEventMember" = G3ActionTemplate
{
	GUIPresent = false;
	
	GUIData = array
	{
		ActionGUIData
		{
			IsControlledByHuman = 1; // These settings apply to HUMAN controlled characters
			IsCharacter = 1;
			IsFamilyMember = 1;
			BelongsToOwnFamily = 1;
			IsAdult = 1;
			IsLeader = 0;
			DoesHaveTag = "ThievesGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
		ActionGUIData
		{
			IsControlledByHuman = 0; // These settings apply to AI controlled characters
			IsCharacter = 1;
			//BelongsToOwnFamily = 1;
			IsLeader = 0; // Prevent the AI from sending their leader
			IsHeir = 0; // Prevent the AI from sending their heir
			IsEmployee = 0;
			IsFamilyMember = 1;
			IsAdult = 1;
			DoesHaveTag = "ThievesGuild";
			DoesNotHaveTag = "Pregnant";
			IsUnlockedAction = -1;
		},
	};
	
	ActionClassName = "TradePostAction";
	ActionName = "ThievesGuildEventMember";
	IconName = "ThievesGuildEventNormal";
	ActionActor = "Character";
	TargetActor = "Building";
	DisplayName = "$action.ThievesGuildEvent";
	Description = "$action.ThievesGuildEventDesc";
	
	SourceScoreFormula = "40 + Source.Dexterity * 10 + Source.Perception * 10 + Source.Steqlth * 4 + (Source.Luck - Source.BadLuck + Source.hasTag.eventbuffAdventurer) * 50";
//	TargetScoreFormula = "(30 * Source.hasTag.BuffEasy) + (75 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (300 * Source.hasTag.BuffImpossible)"; 
	TargetScoreFormula = "(20 * Source.hasTag.BuffEasy) + (40 * Source.hasTag.BuffNormal) + (80 * Source.hasTag.BuffHard) + (160 * Source.hasTag.BuffImpossible)"; 
				
	CanBeCancelled = false;
	CanFail = true;
	ShowCombatText = false;

	BudgetPost = "Family";
	
	Duration = 0.5;
	
	MoralAlignmentShift = 0.5;
	MoralAlignment = MoralAlignment
	{
		Values = array{-0.750, -0.750, -0.500};
	};
	
	CriticalFactor = 0.8;
	
	TargetTags = array{"GuildEventTarget"};

	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			AutoSelect = true;
		};
	};

	OnStartResult = array
	{
		TagEffect
		{
			Filter = "ExistsScriptEventWithTag.GuildEvent && ExistsScriptEventWithTag.ThievesGuildEvent";
			ApplyTo = "Source";
			Tags = array{"ThievesGuildEvent"};
			Duration = 0.0;
		},
		// apply stats tag
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) <= 100";
			ApplyTo = "Source";
			Tags = array{"GuildStatsPoor"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) > 100 && (Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) <= 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsAverage"};
			Duration = 0.0;
		},
		TagEffect
		{
			Filter = "(Source.Dexterity * 10 + Source.Perception * 10 + Source.Stealth * 4 ) > 160";
			ApplyTo = "Source";
			Tags = array{"GuildStatsGood"};
			Duration = 0.0;
		},
	};
	
	CriticalSuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.GuildStatsPoor) + (425 * Source.hasTag.GuildStatsAverage) + (500 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 20"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "BetrayedCaptain", "LockPicks", "StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"BetrayedCaptain", "LockPicks" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"StinkBomb", "ToadExcrements", "ToadSlime", "WeaponPoison", "SkullLamp", "ShadowDagger", "Amber", "Wine", "Ivory", "Brocade", "Pearl"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	SuccessResult = array
	{	
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.GuildStatsPoor) + (275 * Source.hasTag.GuildStatsAverage) + (300 * Source.hasTag.GuildStatsGood))"; },

		// INFLUENCE
		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 5"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 10"; },

		FunctionTransferPrestige // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; Amount = "Source.SocialLevel * 15"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.GuildStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.GuildStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.GuildStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"BetrayedCaptain", "LockPicks", "StinkBomb", "WeaponPoison", "SkullLamp", "ShadowDagger", "Purse", "Obligation"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker", "event.buff.QuickChangeArtist", "event.buff.Adventurer", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.buff.Shadowwalker.female", "event.buff.QuickChangeArtist.female", "event.buff.Adventurer.female", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	FailureResult = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.GuildStatsPoor) + (100 * Source.hasTag.GuildStatsAverage) + (125 * Source.hasTag.GuildStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
	CriticalFailureResult = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.GuildStatsGood"; ApplyTo = "Source"; Amount = 80; },
		
		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsPoor";
			ResultObjectIds =  array{"event.death"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsAverage";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.GuildStatsGood";
			ResultObjectIds =  array{"event.debuff.TwitchingEye", "event.debuff.BurnedFingers", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death"}; },


		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array {"ThievesGuildEvent", "GuildStatsPoor", "GuildStatsAverage", "GuildStatsGood"};
		},
	};
};

"BribePrisonerRelease" = G3ActionTemplate
{
	GUIPresent = false;
	
	ActionClassName = "SimpleExecutionAction";
	ActionName = "BribePrisonerRelease";

	ActionActor = "Character";
	TargetActor = "Character";
	ThirdPartyActor = "Character";
	DisplayName = "$action.BribePrisonerRelease";
	Description = "$action.BribePrisonerReleaseDesc";
	
	PriceFormula = "ThirdParty.SocialLevel < 1 ? 0 : 200.0 + ThirdParty.SocialLevel * 100.0 * ThirdParty.RemainingPrisonSentenceYears + 0.05 * ThirdParty.MarketValue"; // The price formula should produce a result of 0 when there is no third party. This way we won't display any price unless in situations where there is a third party (e.g. before selecting a third party target).
	BudgetPot = "Diplomacy";
	BudgetPost = "Offices";
	
	CanFail = false;
	ShowCombatText = false;
	EnterBuilding = "TryEnter";
	
	DistanceFromTarget = 45;
	DistanceFromTargetMin = 45;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"MakePresent", 0, -1, -1};
	}; 

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"accept1", 0, -1, -1};
	};
	
	SuccessResult = array
	{	
		FunctionTransferMoneyToOfficeHolder
		{
			FractionOfActionCost = 0.2;
			Office = "ArsenalMaster";
			Message = "BribeReleasedPrisoner";
		},
		FunctionReleaseFromJail
		{
			ApplyTo = "Context";
		},
	};
	
	TargetTags = array{"MoA"};
	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			MatchTargetTags = 3;
			IsTargetable = 0; // Allow targeting the MoA (who cannot usually be targeted by ordinary means)
		}
	};
	
	ThirdPartyProfiles = array
	{
		// Technically, valid prisoners for freeing must be in the same prison as the current MoA who got selected as primary target.
		// We cannot easily express this in the target profile though. We will handle this externally instead:
		// - for human players, the UI will show only prisoners from the current prison building
		// - for AI players, we will implement a custom target search in code, which will contain this additional condition
		
		TargetProfileCharacter
		{
			IsSourceHuman = 3; // This profile only applies to human players
			Prisoner = 3;
			
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		},
		TargetProfileCharacter
		{
			IsSourceHuman = -3; // This profile only applies to AI players
			Prisoner = 3;
			
			PartyMember = 3; // The AI shall only free the primary party members
			
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
		}
	};
};
