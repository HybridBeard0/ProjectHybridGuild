VisualEffect
{
	Tags = array{"Plague","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	Duration = 2160;
},
DisplayEffect
{
    Tags = array{"Plague","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Plague";
    Duration = 2160;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -3.0;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	//Mod = -0.15;
	Mod = -0.3;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -2.0;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -0.1; // -0.75
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = false;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "ReputationBonus";
	Mod = -0.4;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "BargainingBonus";
	Mod = -0.5;
	Duration = 1080; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.75;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Duration = 2160; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	Duration = 2160.0;
	ResultObjectIds = array { "RecentlyCured" };
}