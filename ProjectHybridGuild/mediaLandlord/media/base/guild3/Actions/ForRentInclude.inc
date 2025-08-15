OnStartResult = array
{
	FunctionEndAction
	{
		Filter = "(Target.hasTag.CountryHouse && (Target.Guests > 2)) || (Target.hasTag.PoorHouse && (Target.Guests > 4)) || (Target.hasTag.CityHouse && (Target.Guests > 7)) || (Target.hasTag.Mansion && (Target.Guests > 11))";
		ApplyTo = "Source";
		Type = "Cancel";
	},
	ModifierEffect
	{
		Filter = "(Target.hasTag.CountryHouse && (Target.Guests < 3)) || (Target.hasTag.PoorHouse && (Target.Guests < 5)) || (Target.hasTag.CityHouse && (Target.Guests < 8)) || (Target.hasTag.Mansion && (Target.Guests < 12))";
		ApplyTo = "Target";
		ActorValue = "Guests";
		Mod = 1;
		Duration = 600.0;
		Recover = true;
	}
};

SuccessResult = array
{
	FunctionTransferMoney { Filter = "Target.hasTag.CountryHouse && Source.SocialCaste == 1"; Amount = 25; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.CountryHouse && Source.SocialCaste == 2"; Amount = 35; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.CountryHouse && Source.SocialCaste == 3"; Amount = 50; Giver = ""; Receiver = "Target"; },

	FunctionTransferMoney { Filter = "Target.hasTag.PoorHouse && Source.SocialCaste == 1"; Amount = 30; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.PoorHouse && Source.SocialCaste == 2"; Amount = 45; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.PoorHouse && Source.SocialCaste == 3"; Amount = 65; Giver = ""; Receiver = "Target"; },

	FunctionTransferMoney { Filter = "Target.hasTag.CityHouse && Source.SocialCaste == 1"; Amount = 35; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.CityHouse && Source.SocialCaste == 2"; Amount = 55; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.CityHouse && Source.SocialCaste == 3"; Amount = 80; Giver = ""; Receiver = "Target"; },

	FunctionTransferMoney { Filter = "Target.hasTag.Mansion && Source.SocialCaste == 1"; Amount = 40; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.Mansion && Source.SocialCaste == 2"; Amount = 65; Giver = ""; Receiver = "Target"; },
	FunctionTransferMoney { Filter = "Target.hasTag.Mansion && Source.SocialCaste == 3"; Amount = 95; Giver = ""; Receiver = "Target"; },

	FunctionSendMessage
	{
		ApplyTo = "Target";
		Description = "ForRent-NPCStayedTheNight";
	}
};
