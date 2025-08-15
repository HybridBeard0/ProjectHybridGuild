"ApplyAuDeToiletteEffect" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "ApplyAuDeToiletteEffect";
	DisplayName = "$AuDeToilette.iron.name";
	Description = "$AuDeToilette.iron.desc";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;
	EnterBuilding = "TryEnter";

	SuccessResult = array
	{
		VisualEffect
		{
			Tags = array{"Poisoned", "AuDeToilette"};
			ApplyTo = "Target";
			VisualName = "Poison";
			Duration = 600.0;
		};
		DisplayEffect
		{
			Tags = array{"Poison", "Poisoned", "AuDeToilette"};
			ApplyTo = "Target";
			DisplayGroup = "debuffed";
			DisplayName = "$AuDeToilette.iron.name";
			Duration = 600.0;
		};
		ModifierEffect
		{
			Tags = array{"Poisoned", "AuDeToilette"};
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = -2.0;
			Duration = 600.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
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
