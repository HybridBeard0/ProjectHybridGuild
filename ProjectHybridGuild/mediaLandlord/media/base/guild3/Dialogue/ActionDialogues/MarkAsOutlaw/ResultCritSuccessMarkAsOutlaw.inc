DialogueSuccessType
{
	  Type = "CriticalSuccess";
},
DisplayEffect
{
	Tags = array{"Outlawed"};
	ApplyTo = "Target";
	Duration = 540;
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
