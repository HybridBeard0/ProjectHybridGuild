ResultObject
{
	Id = "Unconscious";
	DisplayName = "$effect.Unconscious";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Unconscious"};
			MatchAny = false;
		},
		DisplayEffect
		{
			Tags = array{"Unconscious", "DiseaseImmunity"};
			ApplyTo = "Target";
			DisplayGroup = "unconscious";
			DisplayName = "$effect.Unconscious";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Resistance";
			Mod = 5;
			Tags = array {"Unconscious"};
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "HealthRegeneration";
			Mod = 0.075;
			Duration = 60;
			Tags = array {"Unconscious"};
			Recover = true;
		}
	};
}