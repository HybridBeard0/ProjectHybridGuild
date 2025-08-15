	ActionClassName = "SimpleExecutionAction";

	GUIPresent = true;
	UICategory = "Artifact";
	
	GUIData = array
	{
		@base/AnyoneBelongingToOwnFamily
	};
	UsableBy = array{ "$loca.key.anyone" };
	
	ActionActor = "Character";
	TargetActor = "Character";

	ShowCombatText = false;

	DisplayName = "$action.HandOverItem";
	Description = "$action.HandOverItemDesc";
	Instruction = "$callToAction.CharacterDynastyMember";

	DesiredProfiles = array
	{
		TargetProfileCharacter 
		{
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = 3;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
				TargetProfileBuilding // inside my residence
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						MyFamily = 3;
					};
				},
				TargetProfileBuilding // inside the residence of an ally
				{
					Residence = 3;
					Burning = -3;
					FamilyProfile = TargetProfileFamily
					{
						Alliance = 3;
					};
				},
				TargetProfileBuilding // inside a city building
				{
					IncludedTypes = array{"Cityhall", "Church", "cathedrale", "Arsenal"};
				},
			};
		}
	}; 
	
	EnterBuilding = "TryEnter";
//	SuppressBuildingEnterBehavior = true;

	CanFail = false;
	AskConfirmationOnCancel = false;
	RestartAfterUnconsciousness = false;

	MoralAlignmentShift = 0;
	MoralAlignment = MoralAlignment
	{
		Values = array{0, 0, 0};
	};

	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"MakePresent", 5, -1, -1};
	};

	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"AcceptPresent", 0, -1, -1};
	};

	DistanceFromTarget = 55;
	DistanceFromTargetMin = 55;
	
	CriticalFactor = 1.0;
