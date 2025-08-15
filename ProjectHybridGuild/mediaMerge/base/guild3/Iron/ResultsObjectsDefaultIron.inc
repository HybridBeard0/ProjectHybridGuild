ResultObject
{
    Id = "DonateFeastResult";
    Results = array
    {
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 1"; // poor
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastNothing", "BoastNothing", "BoastCitizen" };
        },
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 2"; // citizen
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastFail", "BoastNothing", "BoastCitizen", "BoastCitizen" };
        },
        FunctionPickRandom
        {
            Filter = "Target.SocialCaste == 3"; // rich
            ApplyTo ="Source";
            ResultObjectIds = array{ "BoastFail", "BoastCitizen", "BoastRich", "BoastRich" };
        },
    };
},

ResultObject
{
    Id = "PromoteOwnBusinessForewardIron";
    DisplayName = "$action.PromoteYourBusinesses";
    Filter = "IsEmployeeOfBuilding";
    Results = array
    {
        DisplayEffect
        {
            Tags = array{"PromoteOwnBusinessIron"};
            ApplyTo = "Target";
            Duration = 360;
            DisplayGroup = "buffed";
            DisplayName = "$effect.PromoteYourBusiness.NoFrontStoreIron"";
        },
        ModifierEffect
        {
            ApplyTo = "Target";
            Tags = array{"PromoteOwnBusinessIron"};
            ActorValue = "Motivation";
            Mod = 0.5;
            Duration = 360;
            Recover = true;
        },
    };
},

ResultObject
{
    Id = "PromoteOwnBusinessWithPrayersForewardIron";
    DisplayName = "$action.PromoteYourBusinesses";
    Filter = "IsEmployeeOfBuilding";
    Results = array
    {
        DisplayEffect
        {
            Tags = array{"PromoteYourBusinessesWithPrayersIron"};
            ApplyTo = "Target";
            Duration = 360;
            DisplayGroup = "buffed";
            DisplayName = "$effect.PromoteYourBusiness.WithPrayers.NoFrontStoreIron";
        },
        ModifierEffect
        {
            ApplyTo = "Target";
            Tags = array{"PromoteYourBusinessesWithPrayersIron"};
            ActorValue = "Motivation";
            Mod = 0.2;
            Duration = 360;
            Recover = true;
        },
    };
},