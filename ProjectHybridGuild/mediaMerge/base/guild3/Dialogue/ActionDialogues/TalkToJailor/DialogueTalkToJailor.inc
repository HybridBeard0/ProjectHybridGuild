// TalkToJailor dialogue
Dialogue
{
	Id = "d.act.TalkToJailor";
	BranchType = "Sequence";
	Topics = array
	{
		Topic
		{
			Line = "$cf.FAvatar.Enemy.0";
			Speaker = "Target";
			Duration = 0.5;
			
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "talk1" };
						VoiceOvers = array { 352 };
					}
				};
			};
		},
		
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";

			Next = array
			{
				// First option - nothing
				Topic
				{
					ShortLine = "$d.act.TalkToPriest.Cancel";
				},

				// Second option - WarEvent
				Topic
				{
					ShortLine = "$cf.Child.EE.0.dialogue";
					Line = "$cf.Child.EE.0";
					BranchType = "Pick";
					Enabled = "!Source.IsAdult && Source.hasNotTag.JailorXP";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "Cheer" };
								VoiceOvers = array { 353 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							BranchType = "Sequence";
							Line = "$cf.OEmpl.HM.Confirm.3";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 354 };
									},
								};
							};
							
							ConversationResult = ResultObject
							{
								Results = array {

									FunctionGiveExperience
									{
										ApplyTo = "Source";
										Filter = "Source.hasNotTag.JailorXP";
										Amount = 33;
									},
									TagEffect
									{
										ApplyTo = "Source";
										Tags = array{"JailorXP"};
										Duration = 1800.0;
									},
								};
							};
						};
					};
				};
			};
		},
	};
};
