ResultObject
{
	Id = "RomPref.CloseApproach";
	DisplayName = "$status.RomPrefCloseApproach";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		DisplayEffect
		{
			Tags = array{"RomPrefCloseApproach", "NoService"};
			ApplyTo = "Target";
			DisplayGroup = "heart";
			DisplayName = "$status.RomPrefCloseApproach";
			Duration = 120.0;
		},
	};
},
ResultObject
{
	Id = "RomPref.MoreDistance";
	DisplayName = "$status.RomPrefMoreDistance";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		DisplayEffect
		{
			Tags = array{"RomPrefMoreDistance", "NoService"};
			ApplyTo = "Target";
			DisplayGroup = "heart";
			DisplayName = "$status.RomPrefMoreDistance";
			Duration = 120.0;
		},
	};
},
ResultObject
{
	Id = "RomPref.Present";
	DisplayName = "$status.RomPrefPresent";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		DisplayEffect
		{
			Tags = array{"RomPrefPresent", "NoService"};
			ApplyTo = "Target";
			DisplayGroup = "heart";
			DisplayName = "$status.RomPrefPresent";
			Duration = 120.0;
		},
	};
},
ResultObject
{
	Id = "RomPref.Artist";
	DisplayName = "$status.RomPrefArtist";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		DisplayEffect
		{
			Tags = array{"RomPrefArtist", "NoService"};
			ApplyTo = "Target";
			DisplayGroup = "heart";
			DisplayName = "$status.RomPrefArtist";
			Duration = 120.0;
		},
	};
},
ResultObject
{
	Id = "RomPref.ContraryGoodBehavior";
	DisplayName = "$status.RomPrefContraryGoodBehavior";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		DisplayEffect
		{
			Tags = array{"RomPrefContraryGoodBehavior", "NoService"};
			ApplyTo = "Target";
			DisplayGroup = "heart";
			DisplayName = "$status.RomPrefContraryGoodBehavior";
			Duration = 120.0;
		},
	};
},
ResultObject
{
	Id = "RomPref.Nothing";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"NoService"};
			Duration = 120.0;
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "RomPref.WipeAll";
	Results = array
	{
		FunctionRemoveEffect
		{
			ApplyTo = "Target";
			MatchAny = true;
			Tags = array {"RomPrefMoreDistance", "RomPrefCloseApproach", "RomPrefPresent", "RomPrefArtist", "RomPrefContraryGoodBehavior", "NoService"};
		}
	};
}
