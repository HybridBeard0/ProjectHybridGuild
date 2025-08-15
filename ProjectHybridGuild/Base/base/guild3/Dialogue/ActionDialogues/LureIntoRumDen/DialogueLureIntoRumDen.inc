
Dialogue
{
	Id = "d.act.LureIntoRumDen";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.0";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.1";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.2";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.3";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.4";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
		Topic
		{
			Speaker = "Source";
			BranchType = "Pick";
			Line = "$d.smuggler.LureIntoRumDen.5";
			@base/FormulaLureIntoRumDen
			Next = array
			{
				//Success reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsSuccessLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.positive.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 476 };
									},
									@base/SourceApplauding
								};
							};
						}
					};
				},
				//Failure reply
				Topic
				{
					BranchType = "Pick";
					@base/CommonSettingsFailureLureIntoRumDen
					Next = array
					{
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Poor";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Poor.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Commoner";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Commoner.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.0";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						},
						Topic
						{
							Enabled = "SocialCaste == Rich";
							Line = "$d.smuggler.LureIntoRumDen.Reaction.Rich.negative.1";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "NoThankYou", "refuse1", "refuse2" };
										VoiceOvers = array { 477 };
									},
									@base/SourceShocked
								};
							};
						}
					};
				},		
			};
		};
	};
};