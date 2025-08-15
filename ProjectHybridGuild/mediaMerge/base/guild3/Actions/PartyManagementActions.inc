"MakeRightHand" = G3ActionTemplate
{
	ActionName = "MakeRightHand";
	ActionClassName = "G3Action";

	GUIPresent = true;

	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsFamilyMember = 1;
			IsAdult = 1;
			IsPartyMember = 0;
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ShowCombatText = false;
	AskConfirmationOnCancel = false;
	
	ActionActor = "Character";
	TargetActor = "Self";

	DisplayName = "$action.MakeRightHand";
	Description = "$action.MakeRightHand.desc";
	
	CanFail = false;
},
"MakeLeftHand" = G3ActionTemplate
{
	ActionName = "MakeLeftHand";
	ActionClassName = "G3Action";

	GUIPresent = true;

	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsFamilyMember = 1;
			IsAdult = 1;
			IsPartyMember = 0;
		},
	};
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	ShowCombatText = false;
	AskConfirmationOnCancel = false;
	
	ActionActor = "Character";
	TargetActor = "Self";

	DisplayName = "$action.MakeLeftHand";
	Description = "$action.MakeLeftHand.desc";
	
	CanFail = false;
},
"KickPartyMember" = G3ActionTemplate
{
	ActionName = "KickPartyMember";
	ActionClassName = "G3Action";

	GUIPresent = true;

	GUIData = array
	{
		ActionGUIData
		{
			IsCharacter = 1;
			BelongsToOwnFamily = 1;
			IsHand = 1;
		}
	};
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers" };

	ShowCombatText = false;
	AskConfirmationOnCancel = false;
	
	ActionActor = "Character";
	TargetActor = "Self";

	DisplayName = "$action.KickPartyMember";
	Description = "$action.KickPartyMember.desc";
	
	CanFail = false;
},