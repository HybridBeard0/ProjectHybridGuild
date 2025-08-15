// Power Heretic (Banish)
ResultObject
{
	Id = "PowerHereticProposeResult";
	Results = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "";
		};
	};
},
ResultObject
{
	Id = "PowerHereticSuccessResult";
	Results = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Target";
			Description = "PoliticalPowerPlayerBanned";
		};
	};
},
ResultObject
{
	Id = "PowerHereticJudgeResult";
	Results = array
	{
		// source = banned character; target = politician
	};
},
ResultObject
{
	// Used to lock down a building.
	Id = "ForceClosureShort";
	DisplayName = "$AuditBooks";
	Filter = "IsBuilding";
	Results = array
	{
		// Add the closed tag and a display icon
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"ForceClosed"};
			DisplayGroup = "closed";
			DisplayName = "$AuditBooks";
			Duration = 720;
		},
	};
},
ResultObject
{
	// Used to lock down a building.
	Id = "ForceClosureLong";
	DisplayName = "$AuditBooks";
	Filter = "IsBuilding";
	Results = array
	{
		// Add the closed tag and a display icon
		DisplayEffect
		{
			ApplyTo = "Target";
			Tags = array{"ForceClosed"};
			DisplayGroup = "closed";
			DisplayName = "$AuditBooks";
			Duration = 1350;
		},
	};
}