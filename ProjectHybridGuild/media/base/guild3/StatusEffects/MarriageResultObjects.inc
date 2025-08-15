// The names of these are hardcoded.
ResultObject
{
	// This will be applied twice, to the married couple, with source and target switched around.
	Id = "MarriageGained";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{ "Married" };
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array { "Divorced", "Mourning" };
		},
	};
},
ResultObject
{
	// This will be applied twice, when a couple gets divorced, with source and target switched around.
	// This gets applied BEFORE the MarriageLost effect.
	Id = "MarriageDivorced";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Source";
			Tags = array{ "Divorced" };
		},
	};
},
ResultObject
{
	// This will be applied ONCE, to the surviving partner, when one of the partners in a married couple dies. Source will be the survivor, Target the dead partner.
	// This gets applied BEFORE the MarriageLost effect.
	Id = "SpouseDied";
	Results = array
	{
		// DisplayEffects don't support gendered strings; instead, use two separate DisplayEffects.
		DisplayEffect
		{
			Filter = "IsMale";
			ApplyTo = "Source";
			Tags = array{ "Mourning" };
			DisplayGroup = "mourning";
			DisplayName = "$statusEffect.mourningDesc";
		},
		DisplayEffect
		{
			Filter = "IsFemale";
			ApplyTo = "Source";
			Tags = array{ "Mourning" };
			DisplayGroup = "mourning";
			DisplayName = "$statusEffect.mourningDesc.female";
		},
	};
},
ResultObject
{
	// This will be applied twice, whenever a marriage is dissolved (divorce or death), with source and target switched around.
	Id = "MarriageLost";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Source";
			MatchAny = true;
			Tags = array{ "Married" };
		},
	};
},
ResultObject
{
	// will be applied after church wedding
	Id = "ChurchWeddingAftermath";
	DisplayName = "$action.ChurchWeddingAction";
	Results = array
	{
		FunctionGiveExperience
		{
			ApplyTo = "Source";
			Amount = 50;
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"JustMarried"};
			ActorValue = "Fertility";
			Mod = 0.1;
			Duration = 900.0;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			Tags = array{"JustMarried"};
			ActorValue = "GoodGenetics";
			Mod = 0.04;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Source";
			Tags = array{"JustMarried"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.justmarried";
			Duration = 900.0;
		},
		FunctionGiveExperience
		{
			ApplyTo = "Target";
			Amount = 50;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"JustMarried"};
			ActorValue = "Fertility";
			Mod = 0.1;
			Duration = 900.0;
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"JustMarried"};
			ActorValue = "GoodGenetics";
			Mod = 0.04;
			Duration = 900.0;
			Recover = true;
		},
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"JustMarried"};
			DisplayGroup = "buffed";
			DisplayName = "$effect.justmarried";
			Duration = 900.0;
		},
	};
}