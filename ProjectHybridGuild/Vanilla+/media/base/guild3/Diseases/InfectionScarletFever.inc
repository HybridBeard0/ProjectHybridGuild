VisualEffect
{
	Tags = array{"ScarletFever","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	@base/Disease
},
DisplayEffect
{
    Tags = array{"ScarletFever","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.ScarletFever";
    @base/Disease
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	Mod = -0.25;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.1; // -1.5
	Mod = -0.2;
	Recover = false;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Recover = true;
	@base/Disease
},
DelayedExecutionEffect
{
	Tags = array{"ScarletFever","Disease"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/Disease
}