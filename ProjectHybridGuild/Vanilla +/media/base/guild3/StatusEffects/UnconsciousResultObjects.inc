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
			Tags = array{"Unconscious"};
			ApplyTo = "Target";
			DisplayGroup = "unconscious";
			DisplayName = "$effect.Unconscious";
		}
	};
}