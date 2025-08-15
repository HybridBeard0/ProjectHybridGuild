//Sounds shortcuts
	//281 - Entertainment and Fights- Target hated
	//277 - Entertainment and Fights- Target loved
	//278 - Begging - Target loved
	//282 - Begging - Target hated
	// 84 - Execution Audience Victim hated
	// 85 - Execution Audience Victim was liked
	//139 - Event - The city is burning
	
//Animation shortcuts
	//"choc_react1" - scared/moved
	//OH_YES_react1/OH_YES_react2 - strong cheering
	//shame1 - head down
	//NoThankYou / refuse1 - mild no
	//talk1 - talking mixed with listening, neutral, not amused
	//public_entertainment1 - applause
	
// Entertainment POI
Dialogue
{
	Id = "PublicEntertainment";
	BranchType = "Pick";
	Topics = array
	{
		// POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Source.IsMale";
			Line = "$d.poi.entertain.poor14";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && !Source.IsMale";
			Line = "$d.poi.entertain.poor14";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.entertain.poor15";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		
		// COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
				Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.entertain.com10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		
		// RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "NoThankYou" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.entertain.rich6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
	};
};

// Fire POI
Dialogue
{
	Id = "Fire";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.fire.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor14";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor15";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		
		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fire.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fire.com10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};

		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.fire.rich6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 139 };
					};
				};
			};
		};
	};
};

// Fight POI
Dialogue
{
	Id = "Fight";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.fight.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.fight.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor14";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor15";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};		
		
		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fight.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fight.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fight.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fight.com9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		
		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fight.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "NoThankYou" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fight.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.fight.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fight.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fight.rich5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.fight.rich6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};		
	};
};

// Execution POI	
Dialogue
{
	Id = "Execution";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.exec.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$Cutscenes.Execution.Good03";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.exec.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.exec.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.exec.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
	
		
		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.exec.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};

		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$Cutscenes.Execution.bad2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};

		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.exec.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.exec.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.exec.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.exec.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.exec.com6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.exec.com7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.exec.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		
		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.exec.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};

		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$Cutscenes.Execution.bad1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};

		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.exec.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.exec.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.exec.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 85 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.exec.rich5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 84 };
					};
				};
			};
		};
		
	};
};

// Begging POI	
Dialogue
{
	Id = "Begging";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "giving_money1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "giving_money1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.begg.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.begg.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen3" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		
		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.begg.com1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.begg.com2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.begg.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "giving_money1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.begg.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen3" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.begg.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.begg.com6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen3" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.begg.com7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.begg.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};		
		
		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.begg.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "NoThankYou" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.begg.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};		
		Topic
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult";
			Line = "$d.poi.begg.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen3" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.begg.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.begg.rich5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "giving_money1" };
						VoiceOvers = array { 278 };
					};
				};
			};
		}; 
	};
};

// Boasting POI
Dialogue
{
	Id = "Boasting";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen3" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		}; 
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		}; 
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult";
			Line = "$d.poi.boast.poor14";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.poor15";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		}; 

		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.boast.com6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};   
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.boast.com10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};		
		
		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
				
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 284 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		}; 
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.boast.rich6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		}; 
	};
};

// PublicBanquet POI
Dialogue
{
	Id = "PublicBanquet";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "IsAdult";
			Duration = 13.34;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "eatBanquet" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "IsAdult";
			Duration = 4.26;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "drinkBanquet" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "IsAdult";
			Duration = 6.67;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "idleBanquet" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor || SocialCaste == Commoner";
			Line = "$d.poi.begg.com6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "";
			Duration = 2.67;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "nodding" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "";
			Duration = 8.03;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "listen1" };
					};
				};
			};
		};
	};
};

// Conquer Building POI
Dialogue
{
	Id = "ConquerBuilding";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.exec.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fight.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.fire.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.conq.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.conq.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "shame1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.conq.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.conq.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};

		
		//COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult";
			Line = "$d.poi.fight.com5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.fight.com7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.conq.com1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.conq.com2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.conq.com3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		
		
		//RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fight.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.fire.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.begg.com7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "refuse1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.conq.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "choc_react1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.conq.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
	};
};

// Preacher - PublicSermon
Dialogue
{
	Id = "PublicSermon";
	BranchType = "Pick";
	Topics = array
	{
		// POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.giveSermon.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com3";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com4";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.giveSermon.com8";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.giveSermon.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.giveSermon.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.giveSermon.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.giveSermon.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
	};
};

// Preacher - ChurchService
Dialogue
{
	Id = "ChurchService";
	BranchType = "Pick";
	Topics = array
	{
		// POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
//		Topic
//		{
//			Enabled = "SocialCaste == Poor";
//			Line = "$d.poi.churchService.poor2";
//			TopicResult = ResultObject
//			{
//				Results = array
//				{
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
//						VoiceOvers = array { 283 };
//					};
//				};
//			};
//		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
//		Topic
//		{
//			Enabled = "SocialCaste == Poor";
//			Line = "$d.poi.churchService.poor6";
//			TopicResult = ResultObject
//			{
//				Results = array
//				{
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
//						VoiceOvers = array { 283 };
//					};
//				};
//			};
//		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.churchService.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com3";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com4";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.churchService.com8";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky", "praying_knees" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.churchService.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.churchService.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.churchService.rich3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.churchService.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "praying_looksky" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
	};
};

// Preacher - WinBelievers
Dialogue
{
	Id = "WinBelievers";
	BranchType = "Pick";
	Topics = array
	{
		// POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.winBelivers.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com3";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com4";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.winBelivers.com8";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};

		// RICH
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.winBelivers.rich1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.winBelivers.rich2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.winBelivers.rich4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "praying_listen", "idle2", "listen_love_letter1" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
	};
};

// Gleeman - PlayMusic
Dialogue
{
	Id = "PlayMusic";
	BranchType = "Pick";
	Topics = array
	{
		// POOR
		Topic
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "";
			Duration = 14.01;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "dance_solo" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor3";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor4";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor5";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor6";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "NoThankYou" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor7";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};		
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor8";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};	
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor9";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};	
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor10";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};	
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor11";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor12";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.music.poor13";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		
		// COMMONER
		Topic
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "";
			Duration = 14.01;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "dance_solo" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};		
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};	
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com3";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};	
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com4";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com7";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com8";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.poi.music.com9";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		
		// RICH
		Topic
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "";
			Duration = 14.01;
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "dance_solo" };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich1";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich2";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "OH_YES_react2" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich3";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich4";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich5";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "aplause_react1" };
						VoiceOvers = array { 277 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.poi.music.rich6";
			TopicResult = ResultObject
			{               
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "NoThankYou" };
						VoiceOvers = array { 281 };
					};
				};
			};
		};
	};
};

// smuggler - lure into rum den
//Dialogue
//{
//	Id = "d.smuggler.LureIntoRumDen";
//	BranchType = "Pick";
//	Topics = array
//	{
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.0";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 310 };
//					};
//				};
//			};
//		},
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.1";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 311 };
//					};
//				};
//			};
//		},
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.2";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 312 };
//					};
//				};
//			};
//		},
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.3";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 313 };
//					};
//				};
//			};
//		},
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.4";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 313 };
//					};
//				};
//			};
//		},
//		Topic
//		{
//			Line = "$d.smuggler.LureIntoRumDen.5";
//			TopicResult = ResultObject {
//				Results = array {
//					FunctionPlayRandomReaction
//					{
//						ApplyTo = "Source";
//						VoiceOvers = array { 313 };
//					};
//				};
//			};
//		},
//	};
//};

