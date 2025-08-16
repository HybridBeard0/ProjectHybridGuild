VisualEffect
{
	Tags = array{"Plague","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	@base/SevereDisease
},
DisplayEffect
{
    Tags = array{"Plague","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Plague";
    @base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -3.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeed";
	//Mod = -0.15;
	Mod = -0.3;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -2.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -0.1; // -0.75
	Recover = false;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "ReputationBonus";
	Mod = -0.4;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "BargainingBonus";
	Mod = -0.5;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.75;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Recover = true;
	@base/SevereDisease
},
DelayedExecutionEffect
{
	Tags = array{"Plague","Disease"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/SevereDisease
}