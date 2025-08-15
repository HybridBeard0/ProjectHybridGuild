VisualEffect
{
	Tags = array{"AnthonysFire","Poison"};
    ApplyTo = "Target";
	VisualName = "Poison";
	Duration = 5.0;
},
DisplayEffect
{
    Tags = array{"AnthonysFire","Poison"};
    ApplyTo = "Target";
    DisplayGroup = "poison";
    DisplayName = "$AnthonysFire";
    Duration = 810.0;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -2.0;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -2.0;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.5;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Fertility";
	Mod = -0.75;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -2;
	Duration = 810.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},