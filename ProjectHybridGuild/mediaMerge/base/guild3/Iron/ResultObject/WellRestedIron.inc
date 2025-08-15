ResultObject
{
    Id = "WellRested"; // This is referenced from code, don't change the name!
    DisplayName = "$effect.rested";
    Results = array
    {
        DisplayEffect
        {
            Tags = array{"Rested"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.rested";
            Duration = 1200.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            ActorValue = "Productivity";
            Mod = 0.05;
            Recover = true;
            Duration = 1200.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            ActorValue = "Perception";
            Mod = 1;
            Recover = true;
            Duration = 1200.0;
        },
        FunctionRemoveEffect
        {
            MatchAny = true;
            Tags = array{"High"};
            ApplyTo = "Self";
        },
        FunctionSendMessage
        {
            ApplyTo = "Self";
            Description = "WellRestedMessage";
        }
    };
},

ResultObject
{
    Id = "ApprenticeTest";
    DisplayName = "$Schooling";
    Results = array
    {
        FunctionRemoveEffect
        {
            ApplyTo = "Self";
            MatchAny = true;
            Tags = array {"Unlearned"};
        },
        DisplayEffect
        {
            Tags = array{"Apprentice"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.iron.apprentice";
            Duration = 0.0;
        },
        TagEffect
		{
			Tags = array{"Apprentice"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Apprentice"};
            ActorValue = "Productivity";
            Mod = 0.1;
            Recover = true;
            Duration = 0.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Apprentice"};
            ActorValue = "CraftmanSkill";
            Mod = 1;
            Recover = true;
            Duration = 0.0;
        }
    };
},

ResultObject
{
    Id = "JourneymanTest";
    DisplayName = "$Schooling";
    Results = array
    {
        FunctionRemoveEffect
        {
            ApplyTo = "Self";
            MatchAny = true;
            Tags = array {"Apprentice"};
        },
        DisplayEffect
        {
            Tags = array{"Journeyman"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.iron.journeyman";
            Duration = 0.0;
        },
        TagEffect
		{
			Tags = array{"Apprentice"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        TagEffect
		{
			Tags = array{"Journeyman"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Journeyman"};
            ActorValue = "CraftmanSkill";
            Mod = 2;
            Recover = true;
            Duration = 0.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Journeyman"};
            ActorValue = "Productivity";
            Mod = 0.2;
            Recover = true;
            Duration = 0.0;
        }
    };
},

ResultObject
{
    Id = "MasterTest";
    DisplayName = "$Schooling";
    Results = array
    {
        FunctionRemoveEffect
        {
            ApplyTo = "Self";
            MatchAny = true;
            Tags = array {"Journeyman"};
        },
        TagEffect
		{
			Tags = array{"Apprentice"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        TagEffect
		{
			Tags = array{"Journeyman"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        TagEffect
		{
			Tags = array{"Master"};
            ApplyTo = "Self";
            Duration = 0.0;
		},
        DisplayEffect
        {
            Tags = array{"Master"};
            ApplyTo = "Self";
            DisplayGroup = "buffed";
            DisplayName = "$effect.iron.master";
            Duration = 0.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Master"};
            ActorValue = "CraftmanSkill";
            Mod = 3;
            Recover = true;
            Duration = 0.0;
        },
        ModifierEffect
        {
            ApplyTo = "Self";
            Tags = array{"Master"};
            ActorValue = "Productivity";
            Mod = 0.35;
            Recover = true;
            Duration = 0.0;
        }
    };
},