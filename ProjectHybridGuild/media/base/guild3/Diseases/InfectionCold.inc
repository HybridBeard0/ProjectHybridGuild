VisualEffect
{
	Tags = array{"Cold","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	Duration = 540;
},
DisplayEffect
{
    Tags = array{"Cold","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Cold";
    Duration = 540.0;
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -1.0;
	Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -1.0;
	Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.25;
	Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.075; // -0.3
	Mod = -0.15;
	Duration = 540.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = false;
},
DelayedExecutionEffect
{
	Tags = array{"RecentlyCured", "Disease"};
	ApplyTo = "Target";
	Duration = 540.0;
	ResultObjectIds = array { "RecentlyCured" };
}