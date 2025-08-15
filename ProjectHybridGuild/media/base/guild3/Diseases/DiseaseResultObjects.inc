ResultObject
{
	Id = "InfectWithFleas";
	DisplayName = "$effect.InfectedWithFleas";
	Results = array
	{
		@base/SpreadFleas,
		@base/InfectionFleas
	};
},
ResultObject
{
	Id = "InfectionCold";
	DisplayName = "$Disease.Cold";
	Results = array
	{
		@base/SpreadCold,
		@base/InfectionCold
	};
},
ResultObject
{
	Id = "InfectionLeprosy";
	DisplayName = "$Disease.Leprosy";
	Results = array
	{
		@base/SpreadLeprosy,
		@base/InfectionLeprosy
	};
},
ResultObject // AnthonysFire is a poison --> Antidote / Apothecary
{
	Id = "InfectionAnthonysFire";
	DisplayName = "$AnthonysFire";
	Results = array
	{
		@base/InfectionAnthonysFire
	};
},
ResultObject // had an accident and got hurt --> Bandage / GetHealthService
{
	Id = "GetHurtInAccident";
	DisplayName = "$GetHurtInAccident";
	Results = array
	{
		@base/GetHurtInAccident
	};
},
ResultObject
{
	Id = "InfectionPlague";
	DisplayName = "$Disease.Plague";
	Results = array
	{
		@base/SpreadPlague,
		@base/InfectionPlague
	};
},
ResultObject
{
	Id = "SpreadScarletFever";
	DisplayName = "$Disease.ScarletFever";
	Results = array
	{
		@base/SpreadScarletFever
	};
},
ResultObject
{
	Id = "InfectionScarletFever";
	DisplayName = "$Disease.ScarletFever";
	Results = array
	{
		@base/SpreadScarletFever,
		@base/InfectionScarletFever
	};
},
ResultObject
{
	Id = "SpreadMeasles";
	DisplayName = "$Disease.Measles";
	Results = array
	{
		@base/SpreadMeasles
	};
},
ResultObject
{
	Id = "InfectionMeasles";
	DisplayName = "$Disease.Measles";
	Results = array
	{
		@base/SpreadMeasles,
		@base/InfectionMeasles
	};
},
ResultObject
{
	Id = "PoisonWellSpreadCold";
	DisplayName = "$Disease.Cold";
	Results = array
	{
		@base/PoisonWellSpreadCold
	};
},
ResultObject
{
	Id = "PoisonWellSpreadLeprosy";
	DisplayName = "$Disease.Leprosy";
	Results = array
	{
		@base/PoisonWellSpreadLeprosy
	};
},
ResultObject
{
	Id = "PoisonWellSpreadPlague";
	DisplayName = "$Disease.Plague";
	Results = array
	{
		@base/PoisonWellSpreadPlague
	};
},
ResultObject
{
	// This 'RecentlyCured' is to be used in most cases, when infecting someone else. 
	// The ApplyTo is Target, which means that whoever was infected will also get the buff at the end.
	Id = "RecentlyCured";
	DisplayName = "";
	Results = array
	{
		DisplayEffect
		{
			Tags = array{"RecentlyCured"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$Buff.RecentlyCured";
			Duration = 540;
		},
		ModifierEffect
		{
			Filter = "IsCharacter";
			Tags = array{"RecentlyCured"};
			ApplyTo = "Target";
			ActorValue = "Resistance";
			Mod = 10;
			Recover = true;
			Duration = 540;
		},
	};
},
ResultObject
{
	// This 'RecentlyCured' is to be used when someone infects him/herself.
	// The ApplyTo is Self, which causes the buff to appear on the originator.
	Id = "RecentlyCuredSelf";
	DisplayName = "";
	Results = array
	{
		DisplayEffect
		{
			Tags = array{"RecentlyCured"};
			ApplyTo = "Self";
			DisplayGroup = "buffed";
			DisplayName = "$Buff.RecentlyCured";
			Duration = 540;
		},
		ModifierEffect
		{
			Filter = "IsCharacter";
			Tags = array{"RecentlyCured"};
			ApplyTo = "Self";
			ActorValue = "Resistance";
			Mod = 10;
			Recover = true;
			Duration = 540;
		},
	};
}