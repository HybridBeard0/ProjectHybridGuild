"FeudAttack" = G3ActionTemplate //Attack feuding character
{
	GUIPresent = false;
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet", "$Robber" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 },
		RequiredBuilding = array { "GuardPost", 2 }
	};

	IconName = "AskFeud";
	ActionName = "FeudAttack";
	ActionClassName = "SimpleExecutionAction";
	DisplayName = "$action.FeudAttack";
	Description = "$action.FeudAttackDesc";
	Instruction = "$callToAction.StreetArea";
	
	ActionActor = "Character";
	TargetActor = "Character";

	ShowCombatText = false;
	CanFail = false;
	
	MainTemplateName = "AttackCharacter";

	DesiredProfiles = array
	{
		TargetProfileCharacter
		{
			Boat = -3;
			NPC = -3;
			NPCGuard = -3;
			IsMyVIPGuard = -3;

			Adult = 3;
			OnStreet = 3;
			CloseToActor = 2;
			FightingProwess = 1;
			Leader = -1;
			
			FamilyProfile = TargetProfileFamily
			{
				MyFamily = -3;
				Alliance = -3;
				Feud = 3;
			};
			CurrentBuildingProfiles = array
			{
				TargetProfileBuilding // somewhere in the world
				{
					Exists = -3;
				},
			};
		}
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			ActionTarget = "Target";
			Actions = array{"AttackCharacter"};
		}
	};
};

"FeudGuard" = G3ActionTemplate //Guard feuding character
{
	GUIPresent = false;
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$profession.Lansquenet", "$Robber" };

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RobberCamp", 1 },
		RequiredBuilding = array { "GuardPost", 2 }
	};

	IconName = "GuardPatrol";
	ActionName = "FeudGuard";
	ActionClassName = "AmbushAction";
	DisplayName = "$action.FeudGuard";
	Description = "$action.FeudGuardDesc";
	Instruction = "$callToAction.StreetArea";
	
	ActionActor = "Character";
	TargetActor = "Coordinate";

	AskConfirmationOnCancel = false;
	
	Duration = 0.12;
	ShowCombatText = false;
	CanFail = false;
	
	DesiredProfiles = array
	{
		TargetProfileNeighborhood
		{
			GoodRelationWithMe = -2;
			CloseToActor = 2;
			OnStreet = 3;
		}
	};
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Survey", -1, -1, -1};
	};
	
	MainTemplateName = "AttackCharacter";

	ThirdPartyProfiles = array
	{				
		TargetProfileCharacter
		{
			MaxDistance = 1200;

			FamilyProfile = TargetProfileFamily
			{
				Feud = 3;
			};
		};
	};
	
	SuccessResult = array
	{
		FunctionTriggerAction
		{
			ApplyTo = "Source";
			Actions = array{"AttackCharacter"};
		}
	};
};