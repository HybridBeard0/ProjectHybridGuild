ResultObject
{
	Id = "WarEvent.Won.Soldier.CriticalSuccess";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.WarStatsPoor) + (275 * Source.hasTag.WarStatsAverage) + (300 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 150"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 250; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 100; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Soldier.Success";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.WarStatsPoor) + (200 * Source.hasTag.WarStatsAverage) + (225 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 75"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 75; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Soldier.Failure";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((50 * Source.hasTag.WarStatsPoor) + (75 * Source.hasTag.WarStatsAverage) + (100 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 25"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 30; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Soldier.CriticalFailure";
	Results = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 30; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Officer.CriticalSuccess";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((350 * Source.hasTag.WarStatsPoor) + (425 * Source.hasTag.WarStatsAverage) + (500 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Officer.Success";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((175 * Source.hasTag.WarStatsPoor) + (200 * Source.hasTag.WarStatsAverage) + (225 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Officer.Failure";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((75 * Source.hasTag.WarStatsPoor) + (100 * Source.hasTag.WarStatsAverage) + (125 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Won.Officer.CriticalFailure";
	Results = array
	{
		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Soldier.CriticalSuccess";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((100 * Source.hasTag.WarStatsPoor) + (75 * Source.hasTag.WarStatsAverage) + (50 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 75"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 250; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 100; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Soldier.Success";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((125 * Source.hasTag.WarStatsPoor) + (100 * Source.hasTag.WarStatsAverage) + (75 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 100"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 150; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 200; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 75; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Soldier.Failure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},
		
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((200 * Source.hasTag.WarStatsPoor) + (175 * Source.hasTag.WarStatsAverage) + (150 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 200"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 30; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Soldier.CriticalFailure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarStatsPoor"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((275 * Source.hasTag.WarStatsAverage) + (300 * Source.hasTag.WarStatsGood))"; },
		
		// EXPERIENCE
		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Officer.CriticalSuccess";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((200 * Source.hasTag.WarStatsPoor) + (150 * Source.hasTag.WarStatsAverage) + (100 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 225; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 275; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Officer.Success";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.WarStatsPoor) + (200 * Source.hasTag.WarStatsAverage) + (150 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 175; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 225; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Officer.Failure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},
		
		// MONEY
		FunctionTransferMoney // family member
		{ Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((400 * Source.hasTag.WarStatsPoor) + (350 * Source.hasTag.WarStatsAverage) + (300 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Lost.Officer.CriticalFailure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.WarStatsPoor"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((550 * Source.hasTag.WarStatsAverage) + (400 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 70; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 80; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Soldier.CriticalSuccess";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((125 * Source.hasTag.WarStatsPoor) + (150 * Source.hasTag.WarStatsAverage) + (175 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 125"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 75; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 125; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 50; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Soldier.Success";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((85 * Source.hasTag.WarStatsPoor) + (110 * Source.hasTag.WarStatsAverage) + (135 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 35"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 50; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 75; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 100; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 35; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Soldier.Failure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((200 * Source.hasTag.WarStatsPoor) + (150 * Source.hasTag.WarStatsAverage) + (100 * Source.hasTag.WarStatsGood))"; },

		FunctionTransferMoney // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * 100"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 25; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 30; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 35; },

		FunctionGiveExperience // is lansquenet
		{ Filter = "Source.hasTag.Lansquenet"; ApplyTo = "Source"; Amount = 15; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Soldier.CriticalFailure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarStatsPoor"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.WarStatsAverage) + (200 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 70; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasNotTag.Lansquenet && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // is MALE lansquenet
		{ Filter = "Source.IsMale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // is FEMALE lansquenet
		{ Filter = "Source.IsFemale && Source.hasTag.Lansquenet";
			ResultObjectIds =  array{"event.death" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Officer.CriticalSuccess";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((125 * Source.hasTag.WarStatsPoor) + (210 * Source.hasTag.WarStatsAverage) + (250 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 85; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 110; },

		FunctionGiveExperience // family member
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 135; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Axe", "Rapier", "ShortSword", "Longsword", "Mace", "Gambeson", "Chainmail", "Platemail", "IronBracelet", "Bomb", "Purse"}; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Longsword", "Platemail", "Bomb"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor"}; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb"}; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Officer.Success";
	Results = array
	{
		// MONEY
		FunctionTransferMoney // family member
		{ Receiver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((85 * Source.hasTag.WarStatsPoor) + (100 * Source.hasTag.WarStatsAverage) + (115 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 60; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 85; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 110; },

		// LOOT
		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Axe", "Rapier", "ShortSword", "Mace", "Gambeson", "Chainmail", "IronBracelet", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 0; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Dagger", "LeatherGloves", "Purse" }; },

		FunctionTransferItems // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 1;
			SpecificItems = array{"WarHorse", "ElegantRapier", "MedalOfHonor", "Purse", "Purse", "Purse" }; },

		FunctionTransferItems // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; Receiver = "Source"; MinAmount = 1; MaxAmount = 2;
			SpecificItems = array{"Longsword", "Platemail", "Bomb" }; },

		// BUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female", "event.buff.Nothing", "event.buff.Nothing"}; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero", "event.buff.DreadedSoldier", "event.buff.FlagBearer", "event.buff.Steadfast", "event.buff.Adventurer"}; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.buff.WarHero.female", "event.buff.DreadedSoldier.female", "event.buff.FlagBearer.female", "event.buff.Steadfast", "event.buff.Adventurer.female"}; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Officer.Failure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},
		
		// MONEY
		FunctionTransferMoney // family member
		{ Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((250 * Source.hasTag.WarStatsPoor) + (200 * Source.hasTag.WarStatsAverage) + (150 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, poor stats
		{ Filter = "Source.hasTag.WarStatsPoor"; ApplyTo = "Source"; Amount = 30; },

		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 35; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 40; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing", "event.buff.Nothing" ,"event.buff.Nothing" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing", "event.buff.Nothing" }; },
	};
},

ResultObject
{
	Id = "WarEvent.Truce.Officer.CriticalFailure";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{"WarRansom"};
			Duration = 0.0;
		},

		// MONEY
		FunctionTransferMoney // family member
		{ Filter = "Source.hasNotTag.WarStatsPoor"; Giver = "Source"; BudgetPost = "Family"; BudgetPot = "Other"; Amount = "Source.SocialLevel * ((500 * Source.hasTag.WarStatsAverage) + (400 * Source.hasTag.WarStatsGood))"; },

		// EXPERIENCE
		FunctionGiveExperience // family member, average stats
		{ Filter = "Source.hasTag.WarStatsAverage"; ApplyTo = "Source"; Amount = 35; },

		FunctionGiveExperience // family member, good stats
		{ Filter = "Source.hasTag.WarStatsGood"; ApplyTo = "Source"; Amount = 40; },

		// DEBUFFS
		FunctionPickRandom // MALE family member, poor stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // FEMALE family member, poor stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsPoor";
			ResultObjectIds =  array{"event.death" }; },

		FunctionPickRandom // MALE family member, average stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, average stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsAverage";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // MALE family member, good stats
		{ Filter = "Source.IsMale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },

		FunctionPickRandom // FEMALE family member, good stats
		{ Filter = "Source.IsFemale && Source.hasTag.WarStatsGood";
			ResultObjectIds =  array{"event.debuff.UglyBattleScars", "event.debuff.ArrowToKnee", "event.debuff.Coward", "event.debuff.Disobedient", "event.debuff.Disfigured", "event.debuff.DryBloodline", "event.debuff.FallenOnHead", "event.debuff.BleedingWound", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death", "event.death" }; },
	};
},

// ****************************************
// no buff/debuff
ResultObject
{
	Id = "event.buff.Nothing";
	DisplayName = "";
	Results = array
	{
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},

// kill character
ResultObject
{
	Id = "event.death";
	DisplayName = "";
	Results = array
	{
		FunctionKill
		{
			ApplyTo = "Source";
		}
	};
},

// buffs
ResultObject
{
	Id = "event.buff.WarHero";
	DisplayName = "$effect.buff.WarHero";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.WarHero";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			ActorValue = "PrestigeGainMult";
			Mod = 0.1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero", "eventbuffWarHeroMain"};
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.WarHero.female";
	DisplayName = "$effect.buff.WarHero.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.WarHero.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			ActorValue = "PrestigeGainMult";
			Mod = 0.1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffWarHeroMain";
			Tags = array{"eventbuffWarHero", "eventbuffWarHeroMain"};
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.DreadedSoldier";
	DisplayName = "$effect.buff.DreadedSoldier";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.DreadedSoldier";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			ActorValue = "AttackPower";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier", "eventbuffDreadedSoldierMain"};
			ApplyTo = "Source";
			ActorValue = "Damage";
			Mod = 5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.DreadedSoldier.female";
	DisplayName = "$effect.buff.DreadedSoldier.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.DreadedSoldier.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier"};
			ApplyTo = "Source";
			ActorValue = "AttackPower";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffDreadedSoldierMain";
			Tags = array{"eventbuffDreadedSoldier", "eventbuffDreadedSoldierMain"};
			ApplyTo = "Source";
			ActorValue = "Damage";
			Mod = 5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.FlagBearer";
	DisplayName = "$effect.buff.FlagBearer";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.FlagBearer";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer", "eventbuffFlagBearerMain"};
			ApplyTo = "Source";
			ActorValue = "Fertility";
			Mod = 0.5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.FlagBearer.female";
	DisplayName = "$effect.buff.FlagBearer.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.FlagBearer.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffFlagBearerMain";
			Tags = array{"eventbuffFlagBearer", "eventbuffFlagBearerMain"};
			ApplyTo = "Source";
			ActorValue = "Fertility";
			Mod = 0.5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Steadfast";
	DisplayName = "$effect.buff.Steadfast";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffSteadfastMain";
			Tags = array{"eventbuffSteadfast"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Steadfast";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffSteadfastMain";
			Tags = array{"eventbuffSteadfast"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffSteadfastMain";
			Tags = array{"eventbuffSteadfast"};
			ApplyTo = "Source";
			ActorValue = "DefensePower";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffSteadfastMain";
			Tags = array{"eventbuffSteadfast", "eventbuffSteadfastMain"};
			ApplyTo = "Source";
			ActorValue = "DamageReduction";
			Mod = 0.1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},

ResultObject
{
	Id = "event.buff.TradersIntuition";
	DisplayName = "$effect.buff.TradersIntuition";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.TradersIntuition";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition", "eventbuffTradersIntuitionMain"};
			ApplyTo = "Source";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.TradersIntuition.female";
	DisplayName = "$effect.buff.TradersIntuition.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.TradersIntuition.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffTradersIntuitionMain";
			Tags = array{"eventbuffTradersIntuition", "eventbuffTradersIntuitionMain"};
			ApplyTo = "Source";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.SenseForDanger";
	DisplayName = "$effect.buff.SenseForDanger";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffSenseForDanger";
			Tags = array{"eventbuffSenseForDanger"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.SenseForDanger";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterCrafter";
	DisplayName = "$effect.buff.MasterCrafter";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterCrafterMain";
			Tags = array{"eventbuffMasterCrafter"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterCrafter";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterCrafterMain";
			Tags = array{"eventbuffMasterCrafter", "eventbuffMasterCrafterMain"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = 0.2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterCrafter.female";
	DisplayName = "$effect.buff.MasterCrafter.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterCrafterMain";
			Tags = array{"eventbuffMasterCrafter"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterCrafter.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterCrafterMain";
			Tags = array{"eventbuffMasterCrafter", "eventbuffMasterCrafterMain"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = 0.2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.ExemplaryMaster";
	DisplayName = "$effect.buff.ExemplaryMasterName";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMasterMain";
			Tags = array{"eventbuffExemplaryMaster"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.ExemplaryMaster";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMasterMain";
			Tags = array{"eventbuffExemplaryMaster", "eventbuffExemplaryMasterMain"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = 0.05;
			Duration = 0.0;
			Recover = true;
		},

		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.ExemplaryMaster.female";
	DisplayName = "$effect.buff.ExemplaryMasterName.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMasterMain";
			Tags = array{"eventbuffExemplaryMaster"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.ExemplaryMaster.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffExemplaryMasterMain";
			Tags = array{"eventbuffExemplaryMaster", "eventbuffExemplaryMasterMain"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = 0.05;
			Duration = 0.0;
			Recover = true;
		},

		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterArchitect";
	DisplayName = "$effect.buff.MasterArchitect";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterArchitect";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect", "eventbuffMasterArchitectMain"};
			ApplyTo = "Source";
			ActorValue = "Intelligence";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterArchitect.female";
	DisplayName = "$effect.buff.MasterArchitect.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterArchitect.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect"};
			ApplyTo = "Source";
			ActorValue = "Strength";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterArchitectMain";
			Tags = array{"eventbuffMasterArchitect", "eventbuffMasterArchitectMain"};
			ApplyTo = "Source";
			ActorValue = "Intelligence";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Shadowwalker";
	DisplayName = "$effect.buff.Shadowwalker";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Shadowwalker";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker", "eventbuffShadowwalkerMain"};
			ApplyTo = "Source";
			ActorValue = "Stealth";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Shadowwalker.female";
	DisplayName = "$effect.buff.Shadowwalker.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Shadowwalker.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffShadowwalkerMain";
			Tags = array{"eventbuffShadowwalker", "eventbuffShadowwalkerMain"};
			ApplyTo = "Source";
			ActorValue = "Stealth";
			Mod = 2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.QuickChangeArtist";
	DisplayName = "$effect.buff.QuickChangeArtist";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffQuickChangeArtist";
			Tags = array{"eventbuffQuickChangeArtist"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.QuickChangeArtist";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.QuickChangeArtist.female";
	DisplayName = "$effect.buff.QuickChangeArtist.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffQuickChangeArtist";
			Tags = array{"eventbuffQuickChangeArtist"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.QuickChangeArtist.female";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterAlchemist";
	DisplayName = "$effect.buff.MasterAlchemist";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterAlchemist";
			Tags = array{"eventbuffMasterAlchemist"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterAlchemist";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.MasterAlchemist.female";
	DisplayName = "$effect.buff.MasterAlchemist.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffMasterAlchemist";
			Tags = array{"eventbuffMasterAlchemist"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.MasterAlchemist.female";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Initiated";
	DisplayName = "$effect.buff.Initiated";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Initiated";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated"};
			ApplyTo = "Source";
			ActorValue = "Resistance";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated"};
			ApplyTo = "Source";
			ActorValue = "MedicineMastery";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated", "eventbuffInitiatedMain"};
			ApplyTo = "Source";
			ActorValue = "HealthRegeneration";
			Mod = 1.5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Initiated";
	DisplayName = "$effect.buff.Initiated.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffWarHero"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Initiated.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated"};
			ApplyTo = "Source";
			ActorValue = "Resistance";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated"};
			ApplyTo = "Source";
			ActorValue = "MedecineMastery";
			Mod = 1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventbuffInitiatedMain";
			Tags = array{"eventbuffInitiated", "eventbuffInitiatedMain"};
			ApplyTo = "Source";
			ActorValue = "HealthRegeneration";
			Mod = 0.01;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Adventurer"; // all Arsenal events, FarTradeTrip, TradeMission, Longshore, Longshore2, SendCourtierToKing->(just for the spread effect)
	DisplayName = "$effect.buff.Adventurer";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffAdventurer"; // no Main needed
			Tags = array{"eventbuffAdventurer"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Adventurer";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.buff.Adventurer.female"; // all Arsenal events, FarTradeTrip, TradeMission, Longshore, Longshore2, SendCourtierToKing->(just for the spread effect)
	DisplayName = "$effect.buff.Adventurer.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventbuffAdventurer"; // no Main needed
			Tags = array{"eventbuffAdventurer"};
			ApplyTo = "Source";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.Adventurer.female";
			Duration = 0.0;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},

// debuffs
ResultObject
{
	Id = "event.debuff.UglyBattleScars";
	DisplayName = "$effect.debuff.UglyBattleScars";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffUglyBattleScarsMain";
			Tags = array{"eventdebuffUglyBattleScars"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.UglyBattleScars";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffUglyBattleScarsMain";
			Tags = array{"eventdebuffUglyBattleScars"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = -2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffUglyBattleScarsMain";
			Tags = array{"eventdebuffUglyBattleScars", "eventdebuffUglyBattleScarsMain"};
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = -0.5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.ArrowToKnee";
	DisplayName = "$effect.debuff.ArrowToKnee";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffArrowToKneeMain";
			Tags = array{"eventdebuffArrowToKnee"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.ArrowToKnee";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffArrowToKneeMain";
			Tags = array{"eventdebuffArrowToKnee"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffArrowToKneeMain";
			Tags = array{"eventdebuffArrowToKnee"};
			ApplyTo = "Source";
			ActorValue = "AttackPower";
			Mod = -2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffArrowToKneeMain";
			Tags = array{"eventdebuffArrowToKnee", "eventdebuffArrowToKneeMain"};
			ApplyTo = "Source";
			ActorValue = "Productivity";
			Mod = -0.15;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.Coward";
	DisplayName = "$effect.debuff.Coward";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffCowardMain";
			Tags = array{"eventdebuffCoward"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.Coward";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffCowardMain";
			Tags = array{"eventdebuffCoward"};
			ApplyTo = "Source";
			ActorValue = "AttackPower";
			Mod = -2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffCowardMain";
			Tags = array{"eventdebuffCoward", "eventdebuffCowardMain"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = -2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.Disobedient";
	DisplayName = "$effect.debuff.Disobedient";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisobedientMain";
			Tags = array{"eventdebuffDisobedient"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.Disobedient";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisobedientMain";
			Tags = array{"eventdebuffDisobedient"};
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = -0.3;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisobedientMain";
			Tags = array{"eventdebuffDisobedient", "eventdebuffDisobedientMain"};
			ApplyTo = "Source";
			ActorValue = "PrestigeGainMult";
			Mod = -0.4;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.Disfigured";
	DisplayName = "$effect.debuff.Disfigured";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisfiguredMain";
			Tags = array{"eventdebuffDisfigured"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.Disfigured";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisfiguredMain";
			Tags = array{"eventdebuffDisfigured"};
			ApplyTo = "Source";
			ActorValue = "Intimidation";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisfiguredMain";
			Tags = array{"eventdebuffDisfigured"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = -1.5;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisfiguredMain";
			Tags = array{"eventdebuffDisfigured"};
			ApplyTo = "Source";
			ActorValue = "Fertility";
			Mod = -0.15;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDisfiguredMain";
			Tags = array{"eventdebuffDisfigured", "eventdebuffDisfiguredMain"};
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = -0.2;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.TwitchingEye";
	DisplayName = "$effect.debuff.TwitchingEye";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffTwitchingEyeMain";
			Tags = array{"eventdebuffTwitchingEye"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.TwitchingEye";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffTwitchingEyeMain";
			Tags = array{"eventdebuffTwitchingEye"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffTwitchingEyeMain";
			Tags = array{"eventdebuffTwitchingEye", "eventdebuffTwitchingEyeMain"};
			ApplyTo = "Source";
			ActorValue = "BargainingBonus";
			Mod = -5;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject //Clumsy, wrongly named Clumbsy in some other files, to be fixed.
{
	Id = "event.debuff.Clumsy";
	DisplayName = "$effect.debuff.Clumsy";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumbsyMain";
			Tags = array{"eventdebuffClumbsy"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.Clumsy";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumbsyMain";
			Tags = array{"eventdebuffClumbsy"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumbsyMain";
			Tags = array{"eventdebuffClumbsy", "eventdebuffClumbsyMain"};
			ApplyTo = "Source";
			ActorValue = "Stealth";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject //Clumsy, wrongly named Clumbsy in some other files, to be fixed.
{
	Id = "event.debuff.Clumsy.female";
	DisplayName = "$effect.debuff.Clumsy.female";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumsyMain";
			Tags = array{"eventdebuffClumbsy"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.Clumsy.female";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumsyMain";
			Tags = array{"eventdebuffClumbsy"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffClumsyMain";
			Tags = array{"eventdebuffClumbsy", "eventdebuffClum0syMain"};
			ApplyTo = "Source";
			ActorValue = "Stealth";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.BurnedFingers";
	DisplayName = "$effect.debuff.BurnedFingers";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBurnedFingersMain";
			Tags = array{"eventdebuffBurnedFingers"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.BurnedFingers";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBurnedFingersMain";
			Tags = array{"eventdebuffBurnedFingers"};
			ApplyTo = "Source";
			ActorValue = "Dexterity";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBurnedFingersMain";
			Tags = array{"eventdebuffBurnedFingers"};
			ApplyTo = "Source";
			ActorValue = "Charisma";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBurnedFingersMain";
			Tags = array{"eventdebuffBurnedFingers", "eventdebuffBurnedFingersMain"};
			ApplyTo = "Source";
			ActorValue = "Entertainment";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.DullEyes";
	DisplayName = "$effect.debuff.DullEyes";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDullEyesMain";
			Tags = array{"eventdebuffDullEyes"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.DullEyes";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDullEyesMain";
			Tags = array{"eventdebuffDullEyes", "eventdebuffDullEyesMain"};
			ApplyTo = "Source";
			ActorValue = "Perception";
			Mod = -1;
			Duration = 0.0;
			Recover = true;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.DryBloodline";
	DisplayName = "$effect.debuff.DryBloodline";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDryBloodlineMain";
			Tags = array{"eventdebuffDryBloodline"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.DryBloodline";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDryBloodlineMain";
			Tags = array{"eventdebuffDryBloodline"};
			ApplyTo = "Source";
			ActorValue = "Fertility";
			Mod = -0.99;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffDryBloodlineMain";
			Tags = array{"eventdebuffDryBloodline", "eventdebuffDryBloodlineMain"};
			ApplyTo = "Target";
			ActorValue = "GoodGenetics";
			Mod = -0.05;
			Duration = 0.0;
			Recover = false;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject
{
	Id = "event.debuff.FallenOnHead";
	DisplayName = "$effect.debuff.FallenOnHead";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffFallenOnHeadMain";
			Tags = array{"eventdebuffFallenOnHead"};
			ApplyTo = "Source";
			DisplayGroup = "debuffed";
			DisplayName = "$effect.debuff.FallenOnHead";
			Duration = 0.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffFallenOnHeadMain";
			Tags = array{"eventdebuffFallenOnHead"};
			ApplyTo = "Source";
			ActorValue = "Intelligence";
			Mod = -2;
			Duration = 0.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffFallenOnHeadMain";
			Tags = array{"eventdebuffFallenOnHead", "eventdebuffFallenOnHeadMain"};
			ApplyTo = "Target";
			ActorValue = "ExperienceGainMult";
			Mod = -0.25;
			Duration = 0.0;
			Recover = false;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
},
ResultObject // can be healed with a bandange (just a chance) and at the medicus when there is bandange on stock
{
	Id = "event.debuff.BleedingWound";
	DisplayName = "$effect.debuff.BleedingWound";
	Results = array
	{
		DisplayEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Source";
			DisplayGroup = "wound";
			DisplayName = "$effect.debuff.BleedingWound";
			Duration = 1800.0;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound"};
			ApplyTo = "Source";
			ActorValue = "HealthRegeneration";
			Mod = -0.5;
			Duration = 1800.0;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "Source.hasNotTag.eventdebuffBleedingWoundMain";
			Tags = array{"eventdebuffBleedingWound", "eventdebuffBleedingWoundMain"};
			ApplyTo = "Source";
			ActorValue = "Health";
			Mod = -0.25;
			Duration = 1800.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = false;
		},
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventCharacterSurvived"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.hasNotTag.WarRansom && (Source.hasTag.WarWon || Source.hasTag.WarLost || Source.hasTag.WarTruce)"; ApplyTo = "Source"; Description = "WarEventWorkerSurvived"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsMale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomMale"; },
		FunctionSendMessage { Filter = "Source.hasNotTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventCharacterRansomFemale"; },
		FunctionSendMessage { Filter = "Source.hasTag.Lansquenet && Source.IsFemale && Source.hasTag.WarRansom"; ApplyTo = "Source"; Description = "WarEventWorkerRansomFemale"; },

		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.MerchantsGuildEvent"; ApplyTo = "Source"; Description = "MerchantsGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.FreemasonsEvent"; ApplyTo = "Source"; Description = "FreemasonsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.AlchimistsEvent"; ApplyTo = "Source"; Description = "AlchimistsEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.CraftmensGuildEvent"; ApplyTo = "Source"; Description = "CraftmensGuildEventCharacterSurvivedFemale"; },
		FunctionSendMessage { Filter = "Source.IsMale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedMale"; },
		FunctionSendMessage { Filter = "Source.IsFemale && Source.hasTag.ThievesGuildEvent"; ApplyTo = "Source"; Description = "ThievesGuildEventCharacterSurvivedFemale"; },
	};
}