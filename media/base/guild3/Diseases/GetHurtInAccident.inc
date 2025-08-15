VisualEffect
{
	Tags = array{"Accident"};
    ApplyTo = "Target";
	VisualName = "Wound";
	Duration = 5.0;
},
DisplayEffect
{
    Tags = array{"Accident"};
    ApplyTo = "Target";
    DisplayGroup = "wound";
    DisplayName = "$GetHurtInAccident";
    Duration = 60.0;
},
ModifierEffect
{
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -30; // -100
	Duration = 0;
	Recover = false;
},
ModifierEffect
{
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -0.15; // -100
	Duration = 60.0;
	Recover = false;
},

ModifierEffect
{
	Tags = array{"Accident"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -2;
	Duration = 60.0;
	Recover = true;
},
ModifierEffect
{
	Tags = array{"Accident"};
	ApplyTo = "Target";
	ActorValue = "HealthRegeneration";
	Mod = -1.5;
	Duration = 60.0;
	Recover = true;
},