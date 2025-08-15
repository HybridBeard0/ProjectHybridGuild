//Success Effects here
DialogueSuccessType
{
	  Type = "Success";
},
FunctionTransferPrestige
{
	Receiver = "Source";
	Giver = "Target";
	Amount = 25;
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
