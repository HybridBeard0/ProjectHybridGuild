"SweetTalkIronSuccess" = MessageDescription
{
	Title = "$iron.messageContainer.sweetTalk.success.title";
	Body = "$iron.messageContainer.sweetTalk.success.body";
	Effect = "";
	Icon = "Character";
	Type = "Neutral";
	IsUrgent = false;
    Duration = 60;
	SFX = 33;
	OnClickReactions = array
	{
		FunctionOpenUI
		{
			UIName = "MessageLog";
			ShowOnTop = true;
			PlaySound = true;	
		};
	};	
};
"SweetTalkIronFailure" = MessageDescription
{
	Title = "$iron.messageContainer.sweetTalk.failure.title";
	Body = "$iron.messageContainer.sweetTalk.failure.body";
	Effect = "";
	Icon = "Character";
	Type = "Neutral";
	IsUrgent = false;
    Duration = 60;
	SFX = 33;
	OnClickReactions = array
	{
		FunctionOpenUI
		{
			UIName = "MessageLog";
			ShowOnTop = true;
			PlaySound = true;	
		};
	};	
};
"WellRestedMessage" = MessageDescription
{
    Title = "$iron.buff.wellRested.title";
    Body = "$iron.buff.wellRested.body";
    Effect = "";
    Icon = "Character";
    Type = "Positive";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"GotHigh" = MessageDescription
{
    Title = "$High.buff.iron.title";
    Body = "$High.buff.iron.title";
    Effect = "";
    Icon = "Character";
    Type = "neutral";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"NiceHigh" = MessageDescription
{
    Title = "$NiceHigh.buff.iron.title";
    Body = "$NiceHigh.buff.iron.title";
    Effect = "";
    Icon = "Character";
    Type = "postitive";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"BadFlash" = MessageDescription
{
    Title = "$BadFlash.buff.iron.title";
    Body = "$BadFlash.buff.iron.title";
    Effect = "";
    Icon = "Character";
    Type = "neutral";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"HorrorFlash" = MessageDescription
{
    Title = "$HorrorFlash.buff.iron.title";
    Body = "$HorrorFlash.buff.iron.body";
    Effect = "";
    Icon = "Character";
    Type = "negative";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"TestFailure" = MessageDescription
{
    Title = "$TestFailure.iron.title";
    Body = "$TestFailure.iron.body";
    Effect = "";
    Icon = "Employee";
    Type = "negative";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};

"TestSuccess" = MessageDescription
{
    Title = "$TestSuccess.iron.title";
    Body = "$TestSuccess.iron.body";
    Effect = "";
    Icon = "Employee";
    Type = "postitive";
    IsUrgent = false;
    Duration = 60;
    SFX = 33;
    OnClickReactions = array
    {
        FunctionOpenUI
        {
            UIName = "MessageLog";
            ShowOnTop = true;
            PlaySound = true;	
        };
    };	
};