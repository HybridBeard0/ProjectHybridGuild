ResultObject
{
	Id = "ForwardRogueZeroToBuildings";
	Filter = "IsBuilding && Target.hasTag.RobberCamp";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RogueZeroModifiers";
		}
	};
},
ResultObject
{
	Id = "RogueZeroModifiers";
	DisplayName = "$Robber";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Strength";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardRogueOneToBuildings";
	Filter = "IsBuilding && Target.hasTag.RobberCamp";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RogueOneModifiers";
		}
	};
},
ResultObject
{
	Id = "RogueOneModifiers";
	DisplayName = "$Robber";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandZero";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandZero";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandZero";
	DisplayName = "$SleightOfHand";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Stealth";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandOne";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandOne";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandOne";
	DisplayName = "$SleightOfHand";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandTwo";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandTwo";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandTwo";
	DisplayName = "$SleightOfHand";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Stealth";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandThree";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandThree";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandThree";
	DisplayName = "$SleightOfHand";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandStealthZero";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandStealthZero";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandStealthZero";
	DisplayName = "$SleightOfHandStealth";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Stealth";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSleightOfHandStealthOne";
	Filter = "IsBuilding && Target.hasTag.ThiefHideout";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SleightOfHandStealthOne";
		}
	};
},
ResultObject
{
	Id = "SleightOfHandStealthOne";
	DisplayName = "$SleightOfHandStealth";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Stealth";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardGravediggeryZero";
	Filter = "IsBuilding && Target.hasTag.Gravedigger";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "GravediggeryZero";
		}
	};
},
ResultObject
{
	Id = "GravediggeryZero";
	DisplayName = "$Gravediggery";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardFightingZero";
	Filter = "IsBuilding && Target.hasTag.GuardPost";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "FightingZero";
		}
	};
},
ResultObject
{
	Id = "FightingZero";
	DisplayName = "$Fighting";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardFightingThree";
	Filter = "IsBuilding && Target.hasTag.GuardPost";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "FightingThree";
		}
	};
},
ResultObject
{
	Id = "FightingThree";
	DisplayName = "$Fighting";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "AttackPower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "DefensePower";
			Mod = 3;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardFightingCombatOne";
	Filter = "IsBuilding && Target.hasTag.GuardPost";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "FightingCombatOne";
		}
	};
},
ResultObject
{
	Id = "FightingCombatOne";
	DisplayName = "$FightingSabotage";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "AttackPower";
			Mod = 3;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardHandicraftStoneThree";
	DisplayName = "$HandicraftStone";
	Filter = "IsBuilding";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsBuilding";
			ActorValue = "NaturalDecayMult";
			Mod = -0.2; // This value has to be in sync with ModifierEffect in HandicraftStone level 3
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardAmbitiousZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "AmbitiousZero";
		}
	};
},
ResultObject
{
	Id = "AmbitiousZero";
	DisplayName = "$Ambitious";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardHardWorkerZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "HardWorkerZero";
		}
	};
},
ResultObject
{
	Id = "HardWorkerZero";
	DisplayName = "$HardWorker";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardCheeseToastFancierZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "CheeseToastFancierZero";
		}
	};
},
ResultObject
{
	Id = "CheeseToastFancierZero";
	DisplayName = "$CheeseToastFancier";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = 10;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardAsToughAsLeatherZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "AsToughAsLeatherZero";
		}
	};
},
ResultObject
{
	Id = "AsToughAsLeatherZero";
	DisplayName = "$AsToughAsLeather";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Armor";
			Mod = 15;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardDrunkenComradeZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "DrunkenComradeZero";
		}
	};
},
ResultObject
{
	Id = "DrunkenComradeZero";
	DisplayName = "$DrunkenComrade";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardTaskmasterZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "TaskmasterZero";
		}
	};
},
ResultObject
{
	Id = "TaskmasterZero";
	DisplayName = "$Taskmaster";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardTaskmasterOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "TaskmasterOne";
		}
	};
},
ResultObject
{
	Id = "TaskmasterOne";
	DisplayName = "$Taskmaster";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSevenMilesBootsZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SevenMilesBootsZero";
		}
	};
},
ResultObject
{
	Id = "SevenMilesBootsZero";
	DisplayName = "$SevenMilesBoots";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "MovementSpeedMult";
			Mod = 0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardNervousZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "NervousZero";
		}
	};
},
ResultObject
{
	Id = "NervousZero";
	DisplayName = "$Nervous";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardSpellboundZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SpellboundZero";
		}
	};
},
ResultObject
{
	Id = "SpellboundZero";
	DisplayName = "$Spellbound";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Resistance";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardSpellboundOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SpellboundOne";
		}
	};
},
ResultObject
{
	Id = "SpellboundOne";
	DisplayName = "$Spellbound";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = -0.02;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardStreetSmartZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "StreetSmartZero";
		}
	};
},
ResultObject
{
	Id = "StreetSmartZero";
	DisplayName = "$StreetSmart";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardStreetSmartOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "StreetSmartOne";
		}
	};
},
ResultObject
{
	Id = "StreetSmartOne";
	DisplayName = "$StreetSmart";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardStreetSmartTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "StreetSmartTwo";
		}
	};
},
ResultObject
{
	Id = "StreetSmartTwo";
	DisplayName = "$StreetSmart";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Stealth";
			Mod = 2;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardCommandZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "CommandZero";
		}
	};
},
ResultObject
{
	Id = "CommandZero";
	DisplayName = "$Command";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardCommandOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "CommandOne";
		}
	};
},
ResultObject
{
	Id = "CommandOne";
	DisplayName = "$Command";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardCommandTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "CommandTwo";
		}
	};
},
ResultObject
{
	Id = "CommandTwo";
	DisplayName = "$Command";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardMasterOfTheSlideRuleZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "MasterOfTheSlideRuleZero";
		}
	};
},
ResultObject
{
	Id = "MasterOfTheSlideRuleZero";
	DisplayName = "$MasterOfTheSlideRule";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardMathZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "MathZero";
		}
	};
},
ResultObject
{
	Id = "MathZero";
	DisplayName = "$Math";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intelligence";
			Mod = 2;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardMathOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "MathOne";
		}
	};
},
ResultObject
{
	Id = "MathOne";
	DisplayName = "$Math";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardMathTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "MathTwo";
		}
	};
},
ResultObject
{
	Id = "MathTwo";
	DisplayName = "$Math";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardNegotiatingZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "NegotiatingZero";
		}
	};
},
ResultObject
{
	Id = "NegotiatingZero";
	DisplayName = "$Negotiating";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = 2;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardNegotiatingOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "NegotiatingOne";
		}
	};
},
ResultObject
{
	Id = "NegotiatingOne";
	DisplayName = "$Negotiating";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardFlirtousZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "FlirtousZero";
		}
	};
},
ResultObject
{
	Id = "FlirtousZero";
	DisplayName = "$Flirtous";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricZero";
		}
	};
},
ResultObject
{
	Id = "RhetoricZero";
	DisplayName = "$Rhetoric";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricOne";
		}
	};
},
ResultObject
{
	Id = "RhetoricOne";
	DisplayName = "$Rhetoric";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = 5;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricTwo";
		}
	};
},
ResultObject
{
	Id = "RhetoricTwo";
	DisplayName = "$Rhetoric";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Intelligence";
			Mod = 5;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPrivateZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPrivateZero";
		}
	};
},
ResultObject
{
	Id = "RhetoricPrivateZero";
	DisplayName = "$RhetoricPrivate";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPrivateOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPrivateOne";
		}
	};
},
ResultObject
{
	Id = "RhetoricPrivateOne";
	DisplayName = "$RhetoricPrivate";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPrivateTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPrivateTwo";
		}
	};
},
ResultObject
{
	Id = "RhetoricPrivateTwo";
	DisplayName = "$RhetoricPrivate";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPublicZero";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPublicZero";
		}
	};
},
ResultObject
{
	Id = "RhetoricPublicZero";
	DisplayName = "$RhetoricPublic";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPublicOne";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPublicOne";
		}
	};
},
ResultObject
{
	Id = "RhetoricPublicOne";
	DisplayName = "$RhetoricPublic";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "ForwardRhetoricPublicTwo";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "RhetoricPublicTwo";
		}
	};
},
ResultObject
{
	Id = "RhetoricPublicTwo";
	DisplayName = "$RhetoricPublic";
	Filter = "(IsEmployeeOfBuilding || IsHenchmanOfBuilding) && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Recover = true;
		},
	};
},

ResultObject
{
	Id = "ForwardMinstrel1ToEmployees";
	Filter = "IsBuilding && Target.hasTag.MinstrelTent";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "Minstrel1ToEmployees";
		}
	};
},
ResultObject
{
	Id = "Minstrel1ToEmployees";
	DisplayName = "$Gleeman";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "ForwardMinstrel2ToEmployees";
	Filter = "IsBuilding && Target.hasTag.MinstrelTent";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "Minstrel2ToEmployees";
		}
	};
},
ResultObject
{
	Id = "Minstrel2ToEmployees";
	DisplayName = "$Gleeman";
	Filter = "IsEmployeeOfBuilding && !IsFamilyMember";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Entertainment";
			Mod = 2;
			Recover = true;
		}
	};
}