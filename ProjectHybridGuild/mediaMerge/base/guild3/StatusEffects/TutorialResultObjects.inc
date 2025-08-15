ResultObject
{
	Id = "TutorialGiveMoneyToBuySkills";
	Results = array
	{
		FunctionTransferMoney
		{
			Receiver = "Target";
			Amount = 5000;
			BudgetPost = "Initial";
		}
	};
},
ResultObject
{
	Id = "TutorialGiveStrength";
	DisplayName = "$sce.name.Wenighusen";
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Strength";
			Mod = 3;
			Duration = 260.0;
			Recover = true;
		}
	};
}