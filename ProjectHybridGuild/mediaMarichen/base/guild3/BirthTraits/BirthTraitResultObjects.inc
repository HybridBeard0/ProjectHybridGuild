// Place all ResultObjects you want to use as effect of BirthTrait here in a FLAT list
ResultObject
{
	Id = "BirthTrait_Clever";
	DisplayName = "$pregnancy.birthtrait.Clever";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = +3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = +3;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Mean";
	DisplayName = "$pregnancy.birthtrait.Mean";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = +3;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_SonOfZeus";
	DisplayName = "$pregnancy.birthtrait.SonOfZeus";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 10;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_SixthSense";
	DisplayName = "$pregnancy.birthtrait.SixthSense";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Backstabber";
	DisplayName = "$pregnancy.birthtrait.Backstabber";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = -1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Afraid";
	DisplayName = "$pregnancy.birthtrait.Afraid";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = -1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Weak";
	DisplayName = "$pregnancy.birthtrait.Weak";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Swordsman";
	DisplayName = "$pregnancy.birthtrait.Swordsman";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Charismatic";
	DisplayName = "$pregnancy.birthtrait.Charismatic";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 2;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Dreamer";
	DisplayName = "$pregnancy.birthtrait.Dreamer";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = -2;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Steadfast";
	DisplayName = "$pregnancy.birthtrait.Steadfast";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 25;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_NaturalResistance";
	DisplayName = "$pregnancy.birthtrait.NaturalResistance";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 5;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_RatEyes";
	DisplayName = "$pregnancy.birthtrait.RatEyes";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = -3;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Nervous";
	DisplayName = "$pregnancy.birthtrait.Nervous";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_CatBurglar";
	DisplayName = "$pregnancy.birthtrait.CatBurglar";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Stealth";
			Mod = 3;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_PurpleLantern";
	DisplayName = "$pregnancy.birthtrait.PurpleLantern";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.03;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Ugly";
	DisplayName = "$pregnancy.birthtrait.Ugly";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = -3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Sickly";
	DisplayName = "$pregnancy.birthtrait.Sickly";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = -3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = -20;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = -3;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_StVitusDance";
	DisplayName = "$pregnancy.birthtrait.StVitusDance";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "LifeExpectancy";
			Mod = -5;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Methuselah";
	DisplayName = "$pregnancy.birthtrait.Methuselah";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 70;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "LifeExpectancy";
			Mod = 15;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Expeditious";
	DisplayName = "$pregnancy.birthtrait.Expeditious";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = 0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Crippled";
	DisplayName = "$pregnancy.birthtrait.Crippled";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "MovementSpeedMult";
			Mod = -0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_SpeechImpediment";
	DisplayName = "$pregnancy.birthtrait.SpeechImpediment";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = -5;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Untalented";
	DisplayName = "$pregnancy.birthtrait.Untalented";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Productivity";
			Mod = -0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_NaturalBornFighter";
	DisplayName = "$pregnancy.birthtrait.NaturalBornFighter";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Damage";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = 2;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_ChildOfSiegfried";
	DisplayName = "$pregnancy.birthtrait.ChildOfSiegfried";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Health";
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Talented";
	DisplayName = "$pregnancy.birthtrait.Talented";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Productivity";
			Mod = 0.06;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Literary";
	DisplayName = "$pregnancy.birthtrait.Literary";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_DarkKnight";
	DisplayName = "$pregnancy.birthtrait.DarkKnight";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = -3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Damage";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Stealth";
			Mod = 4;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Temperamental";
	DisplayName = "$pregnancy.birthtrait.Temperamental";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Damage";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_Dealmaker";
	DisplayName = "$pregnancy.birthtrait.Dealmaker";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Stealth";
			Mod = -1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_TuFelixAustriaNube";
	DisplayName = "$pregnancy.birthtrait.TuFelixAustriaNube";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Charisma";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = -3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = 0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_DaVincisBrains";
	DisplayName = "$pregnancy.birthtrait.DaVincisBrains";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Strength";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Intelligence";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Damage";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_MarkOfTheSpider";
	DisplayName = "$pregnancy.birthtrait.MarkOfTheSpider";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Dexterity";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "BargainingBonus";
			Mod = -10;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 1;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "BirthTrait_MaidOfOrleans";
	DisplayName = "$pregnancy.birthtrait.MaidOfOrleans";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Damage";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "AttackPower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "DefensePower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			ActorValue = "Stealth";
			Mod = -4;
			Recover = true;
		}
	};
}