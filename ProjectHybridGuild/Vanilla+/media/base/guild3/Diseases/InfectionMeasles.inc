VisualEffect
{
	Tags = array{"Measles","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	@base/MildDisease
},
DisplayEffect
{
    Tags = array{"Measles","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Measles";
    @base/MildDisease
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -4.0;
	Recover = true;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	Mod = -0.35;
	Recover = true;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -3.0;
	Recover = true;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.1; // -1.75
	Mod = -0.2;
	Recover = false;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Recover = true;
	@base/MildDisease
},
DelayedExecutionEffect
{
	Tags = array{"Measles","Disease"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/MildDisease
}