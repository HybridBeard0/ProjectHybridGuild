DisplayEffect
{
    Tags = array{"Fleas","Pest"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$effect.InfectedWithFleas";
    Duration = 60.0;
},
VisualEffect
{
	Tags = array{"Fleas","Pest"};
    ApplyTo = "Target";
	VisualName = "Pests";
	Duration = 60; 
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeedMult";
	Mod = -0.02;
	Duration = 60.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	ActorValue = "BargainingBonus";
	Mod = -2;
	Duration = 60.0; // 1 tick = 1 second in real time, while 45 ticks are 1 ingame hour (based on NormalYearTime = 1080)
	Recover = true;
},
DelayedExecutionEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	Duration = 60.0;
	ResultObjectIds = array { "RecentlyCured" };
}