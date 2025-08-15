Dialogue
{
	Id = "DonateFeast";
	BranchType = "Pick";
	Topics = array
	{
		//POOR
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.iron.poor1";
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
			Line = "$d.poi.boast.iron.eat.poor1";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "eat" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.iron.poor2";
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
			Line = "$d.poi.boast.iron.eatCreampie.poor2";
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "EatCreamPie" };
						VoiceOvers = array { 283 };
					};
				};
			};
		};
		Topic
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.poi.boast.iron.poor3";
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
			Line = "$d.poi.boast.iron.poor4";
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
			Line = "$d.poi.boast.iron.poor5";
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
			Line = "$d.poi.boast.iron.poor6";
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
			Line = "$d.poi.boast.iron.poor7";
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
			Line = "$d.poi.boast.iron.poor8";
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
			Line = "$d.poi.boast.iron.poor9";
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
			Line = "$d.poi.boast.iron.poor10";
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
			Line = "$d.poi.boast.iron.poor11";
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
			Line = "$d.poi.boast.iron.poor12";
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
			Line = "$d.poi.boast.iron.poor13";
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
			Line = "$d.poi.boast.iron.poor14";
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
			Line = "$d.poi.boast.iron.poor15";
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
			Line = "$d.poi.boast.iron.com1";
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
			Line = "$d.poi.boast.iron.com2";
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
			Line = "$d.poi.boast.iron.com3";
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
			Line = "$d.poi.boast.iron.com4";
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
			Line = "$d.poi.boast.iron.com5";
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
			Line = "$d.poi.boast.iron.com6";
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
			Line = "$d.poi.boast.iron.com7";
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
			Line = "$d.poi.boast.iron.com8";
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
			Line = "$d.poi.boast.iron.com9";
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
			Line = "$d.poi.boast.iron.com10";
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
			Line = "$d.poi.boast.iron.rich1";
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
			Line = "$d.poi.boast.iron.rich2";
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
			Line = "$d.poi.boast.iron.rich3";
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
			Line = "$d.poi.boast.iron.rich4";
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
			Line = "$d.poi.boast.iron.rich5";
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
			Line = "$d.poi.boast.iron.rich6";
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