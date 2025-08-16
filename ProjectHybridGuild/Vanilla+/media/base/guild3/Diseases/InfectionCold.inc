VisualEffect
{
	Tags = array{"Cold","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	@base/Disease
},
DisplayEffect
{
    Tags = array{"Cold","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Cold";
    @base/Disease
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -1.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -1.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.25;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"Cold","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	//Mod = -0.075; // -0.3
	Mod = -0.05;
	Recover = false;
	@base/Disease
},
DelayedExecutionEffect
{
	Tags = array{"RecentlyCured", "Disease"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/Disease
}