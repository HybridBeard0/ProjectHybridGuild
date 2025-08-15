ResultObject
{
	// Used to make npc catholic
	Id = "ReligionCatholicEffect";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionCatholicDisplayEffect,

	};
},
ResultObject
{
	// Used to make npc protestant
	Id = "ReligionProtestantEffect";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionProtestantDisplayEffect,
	};
},
ResultObject
{
	// Used to make npc secular
	Id = "ReligionSecularEffect";
	Results = array
	{
		@base/RemoveReligionsFunction,
	};
},
ResultObject
{
	// Apply to a family member or building to strip all faith from the family.
	Id = "RemoveReligionForwards";
	Results = array
	{
		FunctionRemoveForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "CatholicAllFamilyMembers";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "CatholicAllBuildings";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "ProtestantAllFamilyMembers";
		},
		FunctionRemoveForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "ProtestantAllBuildings";
		},
	};
},

// CATHOLIC forwards

ResultObject
{
	// Apply to a family member or building to attach Catholic tags to all their members and possessions
	Id = "CatholicPlayerForward";
	Results = array
	{
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "CatholicAllFamilyMembers";
		},
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "CatholicAllBuildings";
		}
	};
},
ResultObject
{
	Id = "CatholicAllFamilyMembers";
	Filter = "IsFamilyMember";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionCatholicDisplayEffect,
	};
},
ResultObject
{
	Id = "CatholicAllEmployeesAndHenchmen";
	Filter = "!IsFamilyMember && (IsEmployeeOfBuilding || IsHenchmanOfBuilding)";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionCatholicDisplayEffect,
	};
},
ResultObject
{
	Id = "CatholicAllBuildings";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target"; // the target of the forward effect will get the result applied (i.e. family members, buildings, etc...)
			Relation = "Self";
			ResultObjectId = "CatholicAllEmployeesAndHenchmen";
		}
	};
},

// PROTESTANT forwards

ResultObject
{
	// Apply to a family member or building to attach Protestant tags to all their members and possessions
	Id = "ProtestantPlayerForward";
	Results = array
	{
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "ProtestantAllFamilyMembers";
		},
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "ProtestantAllBuildings";
		}
	};
},
ResultObject
{
	Id = "ProtestantAllFamilyMembers";
	Filter = "IsFamilyMember";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionProtestantDisplayEffect,
	};
},
ResultObject
{
	Id = "ProtestantAllEmployeesAndHenchmen";
	Filter = "!IsFamilyMember && (IsEmployeeOfBuilding || IsHenchmanOfBuilding)";
	Results = array
	{
		@base/RemoveReligionsFunction,
		@base/ReligionProtestantDisplayEffect,
	};
},
ResultObject
{
	Id = "ProtestantAllBuildings";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target"; // the target of the forward effect will get the result applied (i.e. family members, buildings, etc...)
			Relation = "Self";
			ResultObjectId = "ProtestantAllEmployeesAndHenchmen";
		}
	};
},

// SECULAR forwards

ResultObject
{
	Id = "SecularPlayerForward";
	Results = array
	{
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "SecularAllFamilyMembers";
		},
		FunctionAddForward
		{
			ApplyTo = "Self";
			Relation = "Family";
			ResultObjectId = "SecularAllBuildings";
		}
	};
},
ResultObject
{
	Id = "SecularAllFamilyMembers";
	Filter = "IsFamilyMember";
	Results = array
	{
		@base/RemoveReligionsFunction,
	};
},
ResultObject
{
	Id = "SecularAllEmployeesAndHenchmen";
	Filter = "!IsFamilyMember && (IsEmployeeOfBuilding || IsHenchmanOfBuilding)";
	Results = array
	{
		@base/RemoveReligionsFunction,
	};
},
ResultObject
{
	Id = "SecularAllBuildings";
	Filter = "IsBuilding";
	Results = array
	{
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			ResultObjectId = "SecularAllEmployeesAndHenchmen";
		}
	};
},

// ----- WinBelievers -----
ResultObject
{
	Id = "WinBelieversCatholic-SecularResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionCatholicEffect" };
		},
		@base/ReligionCatholicVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversCatholic-ProtestantResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Protestant"};
			MatchAny = true;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionCatholicEffect" };
		},
		@base/ReligionCatholicVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversProtestant-SecularResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionProtestantEffect" };
		},
		@base/ReligionProtestantVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversProtestant-CatholicResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Catholic"};
			MatchAny = true;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionProtestantEffect" };
		},
		@base/ReligionProtestantVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversSecular-SecularResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		}
	};
},
ResultObject
{
	Id = "WinBelieversSecular-ReligiousResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1) + 2";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Catholic", "Protestant", "Religious"};
			MatchAny = true;
		},
		@base/ReligionSecularVisualEffect_Target
	};
},

// ----- WinBelieversCity -----
ResultObject
{
	Id = "WinBelieversCatholic-SecularCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionCatholicEffect" };
		},
		@base/ReligionCatholicVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversCatholic-ProtestantCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Protestant"};
			MatchAny = true;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionCatholicEffect" };
		},
		@base/ReligionCatholicVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversProtestant-SecularCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionProtestantEffect" };
		},
		@base/ReligionProtestantVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversProtestant-CatholicCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Catholic"};
			MatchAny = true;
		},
		FunctionApplyResults
		{
			ResultObjectIds = array { "ReligionProtestantEffect" };
		},
		@base/ReligionProtestantVisualEffect_Target
	};
},
ResultObject
{
	Id = "WinBelieversSecular-SecularCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2)";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		}
	};
},
ResultObject
{
	Id = "WinBelieversSecular-ReligiousCityResult";
	Filter = "!HasFamily";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 2) + 2";
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		},
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			Tags = array{"Catholic", "Protestant", "Religious"};
			MatchAny = true;
		},
		@base/ReligionSecularVisualEffect_Target
	};
},

// ----- PublicSermon -----
ResultObject
{
	Id = "PublicSermonCatholicResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 2)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonCatholicResult"};
			Duration = 2;
		}
	};
},
ResultObject
{
	Id = "PublicSermonProtestantResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 2)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonProtestantResult"};
			Duration = 2;
		}
	};
},
ResultObject
{
	Id = "PublicSermonSecularResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 2)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonSecularResult"};
			Duration = 2;
		}
	};
},

// ----- PublicSermonCity -----
ResultObject
{
	Id = "PublicSermonCatholicCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 4)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonCatholicResult"};
			Duration = 2;
		}
	};
},
ResultObject
{
	Id = "PublicSermonProtestantCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 4)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonProtestantResult"};
			Duration = 2;
		}
	};
},
ResultObject
{
	Id = "PublicSermonSecularCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 4)";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"PublicSermonSecularResult"};
			Duration = 2;
		}
	};
},

// ----- ChurchService -----
ResultObject
{
	Id = "ChurchServiceCatholicResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 1) + 2";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceCatholicResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceCatholicEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceCatholicResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceProtestantResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 1) + 2";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceProtestantResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceProtestantEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceProtestantResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceSecularResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 1) + 2";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceSecularResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceSecularEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "2 * (Target.SocialCaste + 1) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceSecularResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},

// ----- ChurchServiceCity -----
ResultObject
{
	Id = "ChurchServiceCatholicCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "4 * (Target.SocialCaste + 3) + 3";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceCatholicResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceCatholicCityEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 3) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceCatholicResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceProtestantCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "4 * (Target.SocialCaste + 3) + 3";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceProtestantResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceProtestantCityEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 3) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceProtestantResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceSecularCityResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "4 * (Target.SocialCaste + 3) + 3";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceSecularResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},
ResultObject
{
	Id = "ChurchServiceSecularCityEmployeeResult";
	Results = array
	{
		FunctionTransferMoney
		{
			Giver = "Target";
			Receiver = "Source";
			Amount = "3 * (Target.SocialCaste + 3) + 1";
		},
		VisualEffect
		{
			ApplyTo = "Target";
			VisualName = "Compliment";
			Tags = array{"ChurchServiceSecularResult"};
			Duration = 2;
		},
		ModifierEffect
		{
			Tags = array{"PaidForAmusement"};
			ApplyTo = "Target";
			Duration = 25;
		},
	};
},

// ----- HoldPublicPrayer -----
ResultObject
{
	Id = "HoldPublicPrayerSuccess";
	Results = array
	{
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = "1 + ((Source.Charisma + Source.Intimidation) * 0.2)";
			MaxTransferred = 6;
		},
		FunctionUpdateRelationship
		{
			AffectTarget = "1";
		}
	};
},
ResultObject
{
	Id = "HoldPublicPrayerFailure";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-1";
		}
	};
}
