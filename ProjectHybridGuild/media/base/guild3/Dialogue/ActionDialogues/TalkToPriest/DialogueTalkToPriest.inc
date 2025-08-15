// TalkToPriest dialogue
Dialogue
{
	Id = "d.act.TalkToPriest"; //form should be something like d.act.ActionName
	BranchType = "Sequence";
	Topics = array
	{
		Topic
		{
			Line = "$Church.welcome";
			Speaker = "Target";
			Duration = 0.5;
			Enabled = "Source.IsAdult";
			
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "talk1" };
						VoiceOvers = array { 80 };
					}
				};
			};
		},
		Topic
		{
			Line = "$Church.welcomeChild";
			Speaker = "Target";
			Duration = 0.5;
			Enabled = "!Source.IsAdult";
			
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "talk1" };
						VoiceOvers = array { 80 };
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
				};
				
				// Second option - BuyOrphan
				
				// TODO: 
				// - decide which error cases should be handled by custom text from the priest (e.g. family size already too big)
				// - decide when the option should not even appear at all in the dialogue (e.g. talked to the priest with a child or non-bloodline family member)
				// - add proper localization lines for all the literal strings below once the flow has been nailed down
				// - pick proper animations for all participants to play
				
				Topic
				{
					ShortLine = "$action.BuyOrphan";
					Line = "$d.act.TalkToPriest.BuyOrphan";
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember";

					DisplayAction = "DoBuyOrphan";
					
					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 421 };
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "accept1" };
								VoiceOvers = array {};
							}
						};
					};

					Next = array
					{
						// This topic will be said by the priest if the adopter is not of the true bloodline.
						Topic
						{
							Speaker = "Switch";
							Line = "$Church.buyOrphan.notOfTrueBloodline";
							Enabled = "!Source.IsCharacterTrueBloodline";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "refuse1", "refuse2" };
										VoiceOvers = array { 423 };
									},
								};
							};
						},

						// This topic will be said by the priest if the adopter can't get more children.
						Topic
						{
							Speaker = "Switch";
							Line = "$Church.buyOrphan.tooMuchChildren";
							Enabled = "Source.IsCharacterTrueBloodline && !Source.CanAdoptMoreChildren";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "refuse1", "refuse2" };
										VoiceOvers = array { 422 };
									},
								};
							};
						},

						// This topic will be said by the priest if the adopter does not have enough cash.
						Topic
						{
							Speaker = "Switch";
							Line = "$Church.buyOrphan.notEnoughMoney";
							Enabled = "Source.IsCharacterTrueBloodline && Source.CanAdoptMoreChildren && ((Source.SocialLevel * Source.SocialLevel * ((50 * Source.hasTag.BuffEasy) + (100 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible))) >= Source.OwnerWealth.Money)";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "refuse1", "refuse2" };
										VoiceOvers = array { 423 };
									},
								};
							};
						},
						
						// This topic will be said by the priest if the adopter can get more children.
						// Make sure the Enabled only enables this if the BuyOrphan action is likely to succeed.
						Topic
						{
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.PositiveFeedback";
							Enabled = "Source.IsCharacterTrueBloodline && Source.CanAdoptMoreChildren && ((Source.SocialLevel * Source.SocialLevel * ((50 * Source.hasTag.BuffEasy) + (100 * Source.hasTag.BuffNormal) + (150 * Source.hasTag.BuffHard) + (200 * Source.hasTag.BuffImpossible))) < Source.OwnerWealth.Money)";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 358 };
									},
								};
							};
							
							ConversationResult = ResultObject
							{
								Results = array
								{
									FunctionTriggerAction
									{
										ApplyTo = "Source";
										Actions = array{ "DoBuyOrphan" };
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						},
					};

				};		
				
				// Third option - JoinMonastery
				Topic
				{
					ShortLine = "$action.GoIntoExile";
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember";

					DisplayAction = "GoIntoExile";

					Next = array
					{
						// This topic will be said by the priest if the initiator CANNOT join the monastery.
						//Topic
						//{
						//	Enabled = "!(Source.IsLeader || Source.IsSpouseOfLeader)";
						//	Speaker = "Switch";
						//	Line = "$d.act.TalkToPriest.CannotGoIntoExile";
						//	
						//	TopicResult = ResultObject
						//	{
						//		Results = array
						//		{
						//			FunctionPlayRandomReaction
						//			{
						//				ApplyTo = "Target";
						//				Animations = array { "refuse1", "refuse2" };
						//				VoiceOvers = array { 357 };
						//			},
						//		};
						//	};
						//},


						// This topic will be said by the priest if the initiator does not have enough prestige (influence).
						Topic
						{
							Enabled = "Source.OwnerWealth.Prestige < 50";
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.NotEnoughInfluence";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "refuse1", "refuse2" };
										VoiceOvers = array { 423 };
									},
								};
							};
						},
						
						// This topic will be said by the priest if the initiator CAN join the monastery.
						Topic
						{
							Enabled = "Source.OwnerWealth.Prestige >= 50";
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.PositiveFeedback"; // No text currently. Just start the action

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "accept1" };
										VoiceOvers = array { 358 };
									},
								};
							};

							ConversationResult = ResultObject
							{
								Results = array
								{
									FunctionTriggerAction
									{
										ApplyTo = "Source";
										Actions = array{"GoIntoExile"};
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						},
					};
				};

				// Fourth option - Start the wedding scene
				Topic {
					ShortLine = "$action.ChurchWeddingAction";
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember";

					DisplayAction = "ChurchWedding";

					Next = array {

						// This topic will be said by the priest if the initiator CANNOT get married
						Topic {
							Enabled = "!Source.CharacterIsEngaged";
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.CannotGetMarried";
							
							TopicResult = ResultObject {
								Results = array {
									FunctionPlayRandomReaction {
										ApplyTo = "Target";
										Animations = array { "refuse1", "refuse2" };
										VoiceOvers = array { 424 };
									},
								};
							};
						},
						
						// The priest will ask about performing a taboo marriage with a woman.
						Topic {
							Enabled = "Source.EngagementIsTaboo && Source.IsControlledByHuman && Source.IsMale";
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.UnholyMarriage.prompt.female";

							TopicResult = ResultObject {
								Results = array {
									FunctionPlayRandomReaction {
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 425 };
									},
								};
							};
							
							Next = array {

								Topic {
									BranchType = "UserChoice";
									Speaker = "Source";
									
									Next = array{
										
										// No, reconsider...
										Topic {
											AIChance = "0"; // AI should never pick this.
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerNo";
											Line = "$d.act.TalkToPriest.UnholyMarriage.answerNo";

											TopicResult = ResultObject {
												Results = array {
													FunctionPlayRandomReaction {
														ApplyTo = "Source";
														Animations = array { "refuse1", "refuse2" };
														VoiceOvers = array { 406 };
													},
												};
											};
										},

										// Yes, go forward.
										Topic {
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerYes";
											Line = "$d.act.TalkToPriest.UnholyMarriage.answerYes";

											DisplayAction = "ChurchWedding";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Source";
														Animations = array { "accept1" };
														VoiceOvers = array { 405 };
													}
												};
											};
																						
											ConversationResult = ResultObject {
												Results = array {
													FunctionTriggerAction {
														ApplyTo = "Source";
														ActionTarget = "FromTargetProfile";
														Actions = array{ "ChurchWedding" };
													},
												};
											};
										},
										
									};
								},
								
							};
						},

						// The priest will ask about performing a taboo marriage with a man.
						Topic {
							Enabled = "Source.EngagementIsTaboo && Source.IsControlledByHuman && !Source.IsMale";
							Speaker = "Switch";
							Line = "$d.act.TalkToPriest.UnholyMarriage.prompt";

							TopicResult = ResultObject {
								Results = array {
									FunctionPlayRandomReaction {
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 425 };
									},
								};
							};
							
							Next = array {

								Topic {
									BranchType = "UserChoice";
									Speaker = "Source";
									
									Next = array{
										
										// No, reconsider...
										Topic {
											AIChance = "0"; // AI should never pick this.
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerNo";
											Line = "$d.act.TalkToPriest.UnholyMarriage.answerNo";

											TopicResult = ResultObject {
												Results = array {
													FunctionPlayRandomReaction {
														ApplyTo = "Source";
														Animations = array { "refuse1", "refuse2" };
														VoiceOvers = array { 406 };
													},
												};
											};
										},

										// Yes, go forward.
										Topic {
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerYes";
											Line = "$d.act.TalkToPriest.UnholyMarriage.answerYes";
											
											DisplayAction = "ChurchWedding";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Source";
														Animations = array { "accept1" };
														VoiceOvers = array { 405 };
													}
												};
											};
											
											ConversationResult = ResultObject {
												Results = array {
													FunctionTriggerAction {
														ApplyTo = "Source";
														ActionTarget = "FromTargetProfile";
														Actions = array{ "ChurchWedding" };
													},
												};
											};
										},
										
									};
								},
								
							};
						},
						
						// This topic will be said by the priest if the initiator CAN get married and the engagement is kosher.
						Topic {
							Enabled = "Source.CharacterIsEngaged && Source.hasNotTag.PlayerEngagedAI && (!Source.EngagementIsTaboo || !Source.IsControlledByHuman)";
							Speaker = "Switch";
							Line = ""; // No text currently. Just start the scene directly.

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 358 };
									}
								};
							};
											
							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerAction {
										ApplyTo = "Source";
										ActionTarget = "FromTargetProfile";
										Actions = array{ "ChurchWedding" };
									},
								};
							};
						},
					};
				},
			};
		},
	};
};