//Failure Effects Here
DialogueSuccessType
{
	  Type = "Failure";
},
FunctionUpdateRelationship
{
	AffectLiaison = "-10 * ((0.75 * hasTag.BuffEasy) + (1 * hasTag.BuffNormal) + (1.25 * hasTag.BuffHard) + (1.5 * hasTag.BuffImpossible))";
},
FunctionApplyResults
{
	ResultObjectIds = array{"RomPref.Nothing"};
},
