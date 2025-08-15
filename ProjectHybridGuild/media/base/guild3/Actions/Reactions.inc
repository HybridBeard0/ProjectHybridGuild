// source slaps the target into the face
"RomanceFailHarshReaction" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "RomanceFailHarshReaction";
	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 30;
	DistanceFromTargetMin = 30;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"single_slap1", 0, -1, -1};
	};
	CustomReceiverAnimationPool = array
	{
		CustomAnimationInfo = array {"get_single_slap1", 0, -1, -1};
	};
	
	Dialogue = array {"ACTION", "d.RomanceFailHarshReaction"}; // Category, id
};

// source waves hello and target waves back with reputation bonus
"WaveHelloWaveBackCritical" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "WaveHelloWaveBackCritical";
	DisplayName = "$WavesBack";
	Description = "$WavesBackDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = true;

	DistanceFromTarget = 500;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"WaveHello", 0, -1, -1};
	};

	Dialogue = array {"ACTION", "d.WaveHelloWaveBackCritical"}; // Category, id
};

// source waves hello and target waves back
"WaveHelloWaveBack" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "WaveHelloWaveBack";
	DisplayName = "$WavesBack";
	Description = "$WavesBackDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 500;
	DistanceFromTargetMin = 50;

	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"WaveHello", 0, -1, -1};
	};
};

// source waves hello and target waves back
"WaveHelloScoldingBack" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "WaveHelloScoldingBack";
	DisplayName = "$ScoldingBack";
	Description = "$ScoldingBackDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 500;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"Threaten", 0, -1, -1};
	};

	Dialogue = array {"ACTION", "d.WaveHelloScoldingBack"}; // Category, id
};

// source laughes at someone and target is ashamed
"LaughAtSomeoneSuccess" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "LaughAtSomeoneSuccess";
	DisplayName = "$Ashamed";
	Description = "$AshamedDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 250;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"shame1", 0, -1, -1};
	};
};

// source laughs at someone and target laughes back
"LaughAtSomeoneFailure" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "LaughAtSomeoneFailure";
	DisplayName = "$LaughAtSomeone";
	Description = "$LaughAtSomeoneDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 250;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"rire1", 0, -1, -1};
	};
	
	Dialogue = array {"ACTION", "d.WaveHelloScoldingBack"}; // Category, id
};

// source laughs at someone and target laughes back
"LaughAtSomeoneCriticalFailure" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "LaughAtSomeoneCriticalFailure";
	DisplayName = "$LaughAtSomeone";
	Description = "$LaughAtSomeoneDesc";

	ActionActor = "Character";
	TargetActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;

	DistanceFromTarget = 250;
	DistanceFromTargetMin = 50;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"laugh_at_someone", 0, -1, -1};
	};

	Dialogue = array {"ACTION", "d.WaveHelloScoldingBack"}; // Category, id
};

// look for the spouse
"KissLiaisonFindSpouse" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "KissLiaisonFindSpouse";
	DisplayName = "$KissLiaisonFindSpouse";
	Description = "$KissLiaisonFindSpouseDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";

	EnterBuilding = "TryEnter";
	
	SourceScoreFormula = "1";
	
	ShowCombatText = false;

	SuccessResult =  array
	{
		SpreadEffect
		{
			Filter = "";
			ApplyTo = "Self";
			SpreadResult = "SpouseGetsDeeplyDisappointed";
			Radius = 8000.0;
			Duration = 1;
			SpreadChance = 1;
			SpreadToEveryone = false;
			TickOnce = true;
			SpreadTargetRules = array
			{
				SpreadTargetRule // only to the spouse
				{
					TargetType = "Character";
					TargetProperties = array{"MySpouse"};
					TargetScoreFormula = "0";
				}
			};
		},
	};
};

"FeelShameAnimation" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "FeelShameAnimation";
	DisplayName = "$FeelShameAnimation";
	Description = "$FeelShameAnimationDesc";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"shame1", 0, -1, -1};
	};
};

"KidFeelShameAnimation" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;

	ActionName = "KidFeelShameAnimation";
	DisplayName = "$FeelShameAnimation";
	Description = "$FeelShameAnimationDesc";
	
	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"spy1", 0, -1, -1};
	};
};

"PlaySlapAnimation" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "PlaySlapAnimation";
	DisplayName = "$EmptyString";
	Description = "$EmptyString";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"guard_BoxingPunch", 0, -1, -1};
	};
};

"BlameAnimation" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "BlameAnimation";
	DisplayName = "$EmptyString";
	Description = "$EmptyString";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;
	
	EnterBuilding = "TryEnter";
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"blaming1", 0, -1, -1};
	};
};

"DropToFloor" = G3ActionTemplate
{
	GUIPresent = false;
	CanFail = false;
	
	ActionName = "DropToFloor";
	DisplayName = "$EmptyString";
	Description = "$EmptyString";

	ActionActor = "Character";
	ActionClassName = "SimpleExecutionAction";
	
	ShowCombatText = false;
	
	CustomAnimationPool = array
	{
		CustomAnimationInfo = array {"fight4", 0, -1, -1};
	};
};