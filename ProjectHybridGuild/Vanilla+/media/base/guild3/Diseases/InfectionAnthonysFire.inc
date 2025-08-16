VisualEffect
{
	Tags = array{"AnthonysFire","Poison"};
    ApplyTo = "Target";
	VisualName = "Poison";
	Duration = 5.0;
},
DisplayEffect
{
    Tags = array{"AnthonysFire","Poison"};
    ApplyTo = "Target";
    DisplayGroup = "poison";
    DisplayName = "$AnthonysFire";
    @base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Perception";
	Mod = -2.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Dexterity";
	Mod = -2.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Strength";
	Mod = -2.0;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Productivity";
	Mod = -0.5;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Fertility";
	Mod = -0.75;
	Recover = true;
	@base/Disease
},
ModifierEffect
{
	Tags = array{"AnthonysFire","Poison"};
	ApplyTo = "Target";
	ActorValue = "Resistance";
	Mod = -2;
	Recover = true;
	@base/Disease
},