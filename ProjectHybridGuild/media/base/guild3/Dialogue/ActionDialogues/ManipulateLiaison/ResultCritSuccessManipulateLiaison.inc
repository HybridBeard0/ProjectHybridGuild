//Crit Success Effects here
DialogueSuccessType
{
	  Type = "CriticalSuccess";
},
FunctionTransferPrestige
{
	Receiver = "Source";
	Giver = "Target";
	Amount = 30;
},
FunctionTransferEvidence
{
	Receiver = "Source";
	Giver = "Target";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "ManipulateLiaisonSuccess";
},
FunctionPickRandom
{
	ApplyTo = "Target";
	ResultObjectIds = array{"RomPref.Present", "RomPref.CloseApproach", "RomPref.ContraryGoodBehavior"};
},
