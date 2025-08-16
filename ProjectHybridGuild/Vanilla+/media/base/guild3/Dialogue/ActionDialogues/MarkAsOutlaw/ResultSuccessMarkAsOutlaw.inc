DialogueSuccessType
{
	  Type = "Success";
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
	AffectTarget = "-25";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "CharacterOutlawed";
};