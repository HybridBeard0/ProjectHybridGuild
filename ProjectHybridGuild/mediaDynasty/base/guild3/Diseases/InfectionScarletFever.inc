VisualEffect
{
	Tags = array{"ScarletFever","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	Duration = 720;
},
DisplayEffect
{
    Tags = array{"ScarletFever","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.ScarletFever";
    Duration = 720;
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Duration = 720; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	Mod = -0.25;
	Duration = 720; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Duration = 720; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.1; // -1.5
	Mod = -0.2;
	Duration = 720; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = false;
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Duration = 720; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	Duration = 720.0;
	ResultObjectIds = array { "RecentlyCured" };
}