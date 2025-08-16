VisualEffect
{
	Tags = array{"Leprosy","Disease"};
    ApplyTo = "Target";
	VisualName = "Disease";
	@base/SevereDisease
},
DisplayEffect
{
    Tags = array{"Leprosy","Sick", "Disease"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$Disease.Leprosy";
    @base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Charisma";
	Mod = -3.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	//Mod = -3.0;
	Mod = -0.2;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -3.0;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Health";
	Mod = -0.075; // -0.5
	Recover = false;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "ReputationBonus";
	Mod = -0.25;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "AttackPower";
	Mod = -2;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.5;
	Recover = true;
	@base/SevereDisease
},
ModifierEffect
{
	Tags = array{"Leprosy","Disease"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -3;
	Recover = true;
	@base/SevereDisease
},
DelayedExecutionEffect
{
	Tags = array{"RecentlyCured", "Disease"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/SevereDisease
}