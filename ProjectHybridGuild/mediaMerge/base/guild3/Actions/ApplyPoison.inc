// poisons
"ApplyPoisonBlackWidowPoison" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonBlackWidowPoison";
	DisplayName = "$BlackWidowPoison";
	Description = "$BlackWidowPoisonDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			Tags = array{"Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 2.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$BlackWidowPoison";
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "BlackWidowPoison"};
			ApplyTo = "Target";
			ActorValue = "Health";
			Mod = -0.5;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = false;
		};
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictim";
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictim";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
	};
};

"ApplyPoisonParalysisPoison" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonParalysisPoison";
	DisplayName = "$ParalysisPoison";
	Description = "$ParalysisPoisonDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$ParalysisPoison";
			Duration = 180.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Speed";
			Mod = -25.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Dexterity";
			Mod = -2.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "ParalysisPoison"};
			ApplyTo = "Target";
			ActorValue = "Strength";
			Mod = -1.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		DisplayEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayGroup = "alarm";
			DisplayName = "$effect.CrimeVictim";
			Duration = 270.0;
		};
		ModifierEffect
		{
			Tags = array{"Alerted"};
			ApplyTo = "Target";
			DisplayName = "$effect.CrimeVictim";
			ActorValue = "Perception";
			Mod = 1.0;
			Duration = 270.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		},
	};
};

"ApplyPoisonGhostlyFog" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyPoisonGhostlyFog";
	DisplayName = "$GhostlyFog";
	Description = "$GhostlyFogDesc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			ApplyTo = "Target";
			Tags = array{"Poisoned", "GhostlyFog"};
			VisualName = "Inebriate";
			Duration = 10.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			DisplayGroup = "poison";
			DisplayName = "$GhostlyFog";
			Duration = 180;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			ActorValue = "Intelligence";
			Mod = -2.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "GhostlyFog"};
			ApplyTo = "Target";
			ActorValue = "Perception";
			Mod = -1.0;
			Duration = 180.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
			Recover = true;
		};
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"Alerted"};
		};
	};
};
