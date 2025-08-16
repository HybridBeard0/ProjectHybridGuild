// Start wedding dialogue (character talks to their fiance and decides if they get married right away, or in a church, or if it was a misclick)
Dialogue {
	Id = "d.act.startWedding";
	BranchType = "Pick";
	Topics = array {
		
		// TODO
		// - Add dialogue tree for FEMALE asking a MALE to marry them.
		// - Tune animations.
		// - Tune the dialogue lines themselves, obviously.
		
		// MALE character asks FEMALE to marry them
		Topic {
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";

			TopicResult = ResultObject {
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "reverence1" };
						VoiceOvers = array { 409 };
					},
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "courting_process_receive" };
						VoiceOvers = array {};
					}
				};
			};

			Next = array {

				// Changed my mind, no wedding
				Topic {
					ShortLine = "$d.act.proposeMarriage.cancel.bothGenders";
					Line = "$d.act.proposeMarriage.cancel.fullLine.bothGenders";
					AIChance = "0"; // AI should never pick this.
					TopicResult = ResultObject {
						Results = array {
							@base/SourceTalk,
							@base/TargetListen,
						};
					};
				},
				
				// Get married in a church
				Topic {
					ShortLine = "$d.act.startWedding.church.bothGenders";
					Line = "$d.act.startWedding.church.fullLine.toFemale";
					AIChance = "randInterval(1, 3)";
					
					DisplayAction = "ChurchWedding";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "reverence1" };
								VoiceOvers = array { 411 };
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "courting_process_receive" };
								VoiceOvers = array {};
							}
						};
					};
					
					Next = array {
						
						// Partner agrees, starts ChurchWeddingStart action.
						Topic {
							Speaker = "Switch";
							Line = "$d.act.startWedding.church.accept.toFemale";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "courting_process_receive" };
										VoiceOvers = array { };
									},
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "reverence1" };
										VoiceOvers = array { 417 };
									}
								};
							};
							
							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerAction {
										Filter = "IsControlledByHuman"; // Human players run to the priest to talk.
										ApplyTo = "Source";
										Actions = array{ "ChurchWeddingStart" };
										ActionTarget = "FromTargetProfile";
									},
									FunctionTriggerAction {
										Filter = "!IsControlledByHuman"; // AI players directly start the wedding action.
										ApplyTo = "Source";
										Actions = array{ "ChurchWedding" };
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						};
						
					};
				},
				
				// Get married right away on the road
				Topic {
					ShortLine = "$d.act.startWedding.instant.bothGenders";
					Line = "$d.act.startWedding.instant.fullLine.toFemale";
					//Duration = "5.0";
					AIChance = "randInterval(1, 2)";
					
					DisplayAction = "InstantWedding";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "reverence1" };
								VoiceOvers = array { 402 };
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "courting_process_receive" };
								VoiceOvers = array {};
							}
						};
					};
					
					Next = array {
						
						// If this is a taboo marriage, ask if we're sure.
						Topic {
							Enabled = "Source.EngagementIsTaboo && Source.IsControlledByHuman";
							Speaker = "Switch";
							Line = "$d.act.startWedding.instant.UnholyMarriage.prompt.toPlayer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 404 };
									}
								};
							};
							
							Next = array {
								
								Topic {
									Speaker = "Source";
									BranchType = "UserChoice";
									
									Next = array{
										
										// No, reconsider...
										Topic {
											AIChance = "0"; // AI should never pick this.
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerNo";
											Line = "$d.act.startWedding.instant.UnholyMarriage.answerNo.line";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "refuse1", "refuse2" };
														VoiceOvers = array { 406 };
													}
												};
											};
										},

										// Yes, go forward.
										Topic {
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerYes";
											Line = "$d.act.startWedding.instant.UnholyMarriage.answerYes.line";
											
											DisplayAction = "InstantWedding";

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
														Actions = array{ "InstantWedding" };
														ActionTarget = "FromTargetProfile";
													},
													FunctionTriggerAction {
														ApplyTo = "Target";
														Actions = array{ "NPCWaitLong" };
														ActionTarget = "FromTargetProfile";
													},
												};
											};
										},
										
									};
								},
							};
						},
						
						// If the wedding is not taboo, start right away - Partner agrees, starts InstantWedding action.
						Topic {
							Enabled = "!Source.EngagementIsTaboo || !Source.IsControlledByHuman";
							Speaker = "Switch";
							Line = "$d.act.startWedding.instant.accept.toFemale";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "courting_process_receive" };
										VoiceOvers = array {};
									},
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "reverence1" };
										VoiceOvers = array { 415 };
									}
								};
							};
							
							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerAction {
										ApplyTo = "Source";
										Actions = array{ "InstantWedding" };
										ActionTarget = "FromTargetProfile";
									},
									FunctionTriggerAction {
										ApplyTo = "Target";
										Actions = array{ "NPCWaitLong" };
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						};
						
					};
				},
				
			};
		},

		// FEMALE character asks MALE to marry them
		Topic {
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";

			TopicResult = ResultObject {
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "reverence1" };
						VoiceOvers = array { 410 };
					},
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "courting_process_receive" };
						VoiceOvers = array {};
					}
				};
			};

			Next = array {

				// Changed my mind, no wedding
				Topic {
					ShortLine = "$d.act.proposeMarriage.cancel.bothGenders";
					Line = "$d.act.proposeMarriage.cancel.fullLine.bothGenders";
					AIChance = "0"; // AI should never pick this.
					TopicResult = ResultObject {
						Results = array {
							@base/SourceTalk,
							@base/TargetListen,
						};
					};
				},
				
				// Get married in a church
				Topic {
					ShortLine = "$d.act.startWedding.church.bothGenders";
					Line = "$d.act.startWedding.church.fullLine.toMale";
					AIChance = "randInterval(1, 3)";
					
					DisplayAction = "ChurchWedding";
					
					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "reverence1" };
								VoiceOvers = array { 412 };
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "courting_process_receive" };
								VoiceOvers = array {};
							}
						};
					};
					
					Next = array {
						
						// Partner agrees, starts ChurchWeddingStart action.
						Topic {
							Speaker = "Switch";
							Line = "$d.act.startWedding.church.accept.toMale";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "courting_process_receive" };
										VoiceOvers = array { };
									},
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "reverence1" };
										VoiceOvers = array { 418 };
									}
								};
							};
							
							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerAction {
										Filter = "IsControlledByHuman"; // Human players run to the priest to talk.
										ApplyTo = "Source";
										Actions = array{ "ChurchWeddingStart" };
										ActionTarget = "FromTargetProfile";
									},
									FunctionTriggerAction {
										Filter = "!IsControlledByHuman"; // AI players directly start the wedding action.
										ApplyTo = "Source";
										Actions = array{ "ChurchWedding" };
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						};
						
					};
				},
				
				// Get married right away on the road
				Topic {
					ShortLine = "$d.act.startWedding.instant.bothGenders";
					Line = "$d.act.startWedding.instant.fullLine.toMale";
					Duration = "5.0";
					AIChance = "randInterval(1, 2)";
					
					DisplayAction = "InstantWedding";
					
					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "reverence1" };
								VoiceOvers = array { 403 };
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "courting_process_receive" };
								VoiceOvers = array {};
							}
						};
					};
					
					Next = array {
						
						// If this is a taboo marriage, ask if we're sure.
						Topic {
							Enabled = "Source.EngagementIsTaboo && Source.IsControlledByHuman";
							Speaker = "Switch";
							Line = "$d.act.startWedding.instant.UnholyMarriage.prompt.toPlayer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 404 };
									}
								};
							};
							
							Next = array {
								
								Topic {
									Speaker = "Source";
									BranchType = "UserChoice";
									
									Next = array{
										
										// No, reconsider...
										Topic {
											AIChance = "0"; // AI should never pick this.
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerNo";
											Line = "$d.act.startWedding.instant.UnholyMarriage.answerNo.line";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "refuse1", "refuse2" };
														VoiceOvers = array { 406 };
													}
												};
											};
										},

										// Yes, go forward.
										Topic {
											ShortLine = "$d.act.TalkToPriest.UnholyMarriage.answerYes";
											Line = "$d.act.startWedding.instant.UnholyMarriage.answerYes.line";
											
											DisplayAction = "InstantWedding";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "accept1" };
														VoiceOvers = array { 405 };
													}
												};
											};
											
											ConversationResult = ResultObject {
												Results = array {
													FunctionTriggerAction {
														ApplyTo = "Source";
														Actions = array{ "InstantWedding" };
														ActionTarget = "FromTargetProfile";
													},
													FunctionTriggerAction {
														ApplyTo = "Target";
														Actions = array{ "NPCWaitLong" };
														ActionTarget = "FromTargetProfile";
													},
												};
											};
										},
										
									};
								},
								
							};
						},
						
						// If the wedding is not taboo, start right away - Partner agrees, starts InstantWedding action.
						Topic {
							Enabled = "!Source.EngagementIsTaboo || !Source.IsControlledByHuman";
							Speaker = "Switch";
							Line = "$d.act.startWedding.instant.accept.toMale";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "courting_process_receive" };
										VoiceOvers = array {};
									},
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "reverence1" };
										VoiceOvers = array { 416 };
									}
								};
							};
							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerAction {
										ApplyTo = "Source";
										Actions = array{ "InstantWedding" };
										ActionTarget = "FromTargetProfile";
									},
									FunctionTriggerAction {
										ApplyTo = "Target";
										Actions = array{ "NPCWaitLong" };
										ActionTarget = "FromTargetProfile";
									},
								};
							};
						};
					};
				},
			};
		},
	};
};