ModifierEffect
{
	Tags = array{"Alerted"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = 2.0;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
}