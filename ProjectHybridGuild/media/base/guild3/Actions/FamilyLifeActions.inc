"Family-Cooking" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Cooking";
	DisplayName = "$action.Family-Cooking";
	Description = "$action.Family-CookingDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-Cooking"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-Eating" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
			DoesNotHaveTag = "HasEaten";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Eating";
	DisplayName = "$action.Family-Eating";
	Description = "$action.Family-EatingDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-Eating"; },
		};
	};
	SuccessResult = array
	{
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{"HasEaten"};
			Duration = 150.0;
		},
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-CleanHouse" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-CleanHouse";
	DisplayName = "$action.Family-CleanHouse";
	Description = "$action.Family-CleanHouseDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-CleanHouse"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-ChildPlay" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsChild = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-ChildPlay";
	DisplayName = "$action.Family-ChildPlay";
	Description = "$action.Family-ChildPlayDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-ChildPlay"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-Bored" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = -1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Bored";
	DisplayName = "$action.Family-Bored";
	Description = "$action.Family-BoredDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-Bored"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-Studies" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Studies";
	DisplayName = "$action.Family-Bored";
	Description = "$action.Family-BoredDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-Studies"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-PokeAround" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-PokeAround";
	DisplayName = "$action.Family-Bored";
	Description = "$action.Family-BoredDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-PokeAround"; },
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
	};
};

"Family-Sleep" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = -1;
			IsUnlockedAction = -1;
			DoesNotHaveTag = "Family-WellRested";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Sleep";
	DisplayName = "$action.Sleep";
	Description = "$action.SleepDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";
	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CountryHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 240.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.PoorHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 210.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
        FunctionTriggerAction
        {
			Filter = "Target.hasTag.CountryHouse || Target.hasTag.PoorHouse || Target.hasTag.CityHouse || Target.hasTag.Mansion";
            ApplyTo = "Source";
            Actions = array{"Sleep"};
        },
	};
};

"Family-TakeBathHome" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = -1;
			IsUnlockedAction = -1;
			DoesNotHaveTag = "Washed";
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-TakeBathHome";
	DisplayName = "$TakeBathHome";
	Description = "$TakeBathHomeDesc";
	IconName = "FamilyLifeActions";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	TargetTags = array{"BathroomBlocked","Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = -3;
			IsCurrentBuilding = 3;
		};
	};
	SuccessResult = array
	{
		FunctionGiveExperience
		{
			Filter = "Source.hasNotTag.GotXP";
			ApplyTo = "Self";
			Amount = 1;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.CityHouse";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 180.0;
		},
		TagEffect
		{
			Filter = "Source.hasNotTag.GotXP && Target.hasTag.Mansion";
			ApplyTo = "Self";
			Tags = array{"GotXP"};
			Duration = 150.0;
		},
        FunctionTriggerAction
        {
			Filter = "Target.hasTag.CityHouse || Target.hasTag.Mansion";
            ApplyTo = "Source";
            Actions = array{"TakeBathHome"};
        },
	};
};

"Family-Feast" = G3ActionTemplate
{
	GUIPresent = false;
	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			IsAdult = 1;
			IsUnlockedAction = -1;
		}
	};
	ActionClassName = "SimpleExecutionAction";
	ActionName = "Family-Feast";
	DisplayName = "$action.Family-Feast";
	Description = "$action.Family-FeastDesc";
	IconName = "GiveAFamilyFeast";

	ActionActor = "Character";
	TargetActor = "Building";

	CanFail = false;
	SourceRun = false;
	AskConfirmationOnCancel = false;
	ShowCombatText = false;
	ResumeAfterInterruption = false;

	EnterBuilding = "TryEnter";

	TargetTags = array{"Feast"};
	DesiredProfiles = array
	{
		TargetProfileBuilding
		{
			MatchTargetTags = 3;
			IsCurrentBuilding = 3;
		};
	};
	TargetSnapPoint = TargetSnapPoint
	{
		Profiles = array
		{
			TargetProfileSnapPoint{ Context = "Family-Feast"; },
		};
	};
	SuccessResult = array
	{
	};
};