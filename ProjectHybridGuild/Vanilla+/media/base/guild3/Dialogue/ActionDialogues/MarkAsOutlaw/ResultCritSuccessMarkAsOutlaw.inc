DialogueSuccessType
{
	  Type = "CriticalSuccess";
},
DisplayEffect
{
	Tags = array{"Outlawed"};
	ApplyTo = "Target";
	@base/DebuffCharacter
	DisplayGroup = "alarm";
	DisplayName = "$effect.outlawed";
},
FunctionUpdateRelationship
{
	AffectTarget = "-15";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "CharacterOutlawed";
};
