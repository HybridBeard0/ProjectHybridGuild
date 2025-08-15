DialogueSuccessType
{
	Type = "Success";
},
FunctionGiveMoney
{
	ApplyTo = "Target";
	Amount = 10000;
	IsDiceDependent = true;
},
FunctionTransferPrestige
{
	Receiver = "Target";
	Amount = 500;
},
FunctionUpdateRelationship
{
	AffectTarget = "15";
	AffectTargetAllies = "10";
	AffectTargetEnemies = "-10";
	AffectLiaison = "30";
}