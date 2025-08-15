VisualEffect
{
	Tags = array{"Measles","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	Duration = 540;
},
DisplayEffect
{
    Tags = array{"Measles","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Measles";
    Duration = 540;
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -4.0;
	Duration = 540; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	Mod = -0.35;
	Duration = 540; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -3.0;
	Duration = 540; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.1; // -1.75
	Mod = -0.2;
	Duration = 540; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = false;
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Duration = 540; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	Duration = 540.0;
	ResultObjectIds = array { "RecentlyCured" };
}