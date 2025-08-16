// applied when someone witnesses a specific crime
// the witness has to be found by a SpreadEffect first

// NPCs
ResultObject // e.g. witnessed a murder of a dynasty member
{
	Id = "SevereRepLossNPCResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-25"; // AffectCurrentNeighborhoodToSource
		},
	};
},
ResultObject // e.g. witnessed a kidnapping of a dynasty member
{
	Id = "MediumRepLossNPCResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-15"; // AffectCurrentNeighborhoodToSource
		},
	};
},
ResultObject
{
	Id = "SmallRepLossNPCResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-7"; // AffectCurrentNeighborhoodToSource
		},
	};
},

// Dynasty
ResultObject // e.g. witnessed a murder of a dynasty member
{
	Id = "SevereRepLossDynastyResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-40";
			AffectTargetAllies = "-25";
			AffectTargetEnemies = "10";
		},
	};
},
ResultObject // e.g. witnessed a kidnapping of a dynasty member OR a murder of an employee
{
	Id = "MediumRepLossDynastyResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-25";
			AffectTargetAllies = "-15";
			AffectTargetEnemies = "6";
		},
	};
},
ResultObject
{
	Id = "SmallRepLossDynastyResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-7";
			AffectTargetEnemies = "3";
		},
	};
},

// CryForHelp
ResultObject
{
	Id = "CryForHelpResult";
	Results = array
	{
		FunctionUpdateRelationship
		{
			AffectTarget = "-12";
			AffectTargetAllies = "-7";
			AffectTargetEnemies = "3";
		},
//		FunctionTriggerAction
//		{
//			ApplyTo = "Target";
//			Actions = array{"EscortCharacter"};
//		},
	};
}
