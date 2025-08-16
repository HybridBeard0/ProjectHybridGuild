DisplayEffect
{
    Tags = array{"Fleas","Pest"};
    ApplyTo = "Target";
    DisplayGroup = "sick";
    DisplayName = "$effect.InfectedWithFleas";
    @base/MildDisease
},
VisualEffect
{
	Tags = array{"Fleas","Pest"};
    ApplyTo = "Target";
	VisualName = "Pests";
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	ActorValue = "MovementSpeedMult";
	Mod = -0.02;
	Recover = true;
	@base/MildDisease
},
ModifierEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	ActorValue = "BargainingBonus";
	Mod = -2;
	Recover = true;
	@base/MildDisease
},
DelayedExecutionEffect
{
	Tags = array{"Fleas","Pest"};
	ApplyTo = "Target";
	ResultObjectIds = array { "RecentlyCured" };
	@base/MildDisease
}