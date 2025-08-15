VisualEffect
{
	Tags = array{"Leprosy","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	Duration = 1080.0;
},
DisplayEffect
{
    Tags = array{"Leprosy","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Leprosy";
    Duration = 1080.0;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	//Mod = -3.0;
	Mod = -0.2;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -3.0;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -0.1; // -0.5
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = false;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "ReputationBonus";
	Mod = -0.25;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "AttackPower";
	Mod = -2;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.5;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Duration = 1080.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"RecentlyCured", "Disease"};
	ApplyTo = "Target";
	Duration = 1080.0;
	ResultObjectIds = array { "RecentlyCured" };
}