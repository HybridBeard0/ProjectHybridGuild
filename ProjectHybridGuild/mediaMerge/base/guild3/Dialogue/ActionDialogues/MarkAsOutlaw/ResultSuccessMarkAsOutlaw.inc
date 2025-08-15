DialogueSuccessType
{
	  Type = "Success";
},
DisplayEffect
{
	Tags = array{"Outlawed"};
	ApplyTo = "Target";
	Duration = 360;
	DisplayGroup = "alarm";
	DisplayName = "$effect.outlawed";
},
FunctionUpdateRelationship
{
	AffectTarget = "-25";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "CharacterOutlawed";
};