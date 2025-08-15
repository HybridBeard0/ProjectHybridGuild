//CourtingSomeone dialogue
Dialogue
{
	Id = "d.act.courtingSomeone"; //form should be something like d.act.ActionName
	BranchType = "Pick";
	Topics = array
	{
		//Male to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.court.openLine.int";
					Line = "$d.act.court.fullLine.int";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 495 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.court.openLine.char";
					Line = "$d.act.court.fullLine.char";
					BranchType = "Pick";
					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 496 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.court.openLine.per";
					Line = "$d.act.court.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 494 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.per";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.per";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
			};
		},
		
		//Male to female V2 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.int.toFemale";
					Line = "$d.act.comp.fullLine.v2.int.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 495 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.char.toFemale";
					Line = "$d.act.comp.fullLine.v2.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 496 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.per.toFemale";
					Line = "$d.act.comp.fullLine.v2.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 494 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
			};
		},
		
		//Male to female v3 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.int.toFemale";
					Line = "$d.act.comp.fullLine.v3.int.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 495 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.char.toFemale";
					Line = "$d.act.comp.fullLine.v3.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 496 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.per.toFemale";
					Line = "$d.act.comp.fullLine.v3.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 494 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
			};
		},
		
		//female to male (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.court.openLine.int";
					Line = "$d.act.court.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 498 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.court.openLine.char";
					Line = "$d.act.court.fullLine.char";
					BranchType = "Pick";
					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 499 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.court.openLine.per";
					Line = "$d.act.court.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 497 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.sAnswer.per";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.court.fAnswer.per";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
			};
		},
		
		//Female to male V2 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.int.toMale";
					Line = "$d.act.comp.fullLine.v2.int.toMale";
					BranchType = "Pick";
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 498 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.char.toMale";
					Line = "$d.act.comp.fullLine.v2.char.toMale";
					BranchType = "Pick";

					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 499 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v2.per.toMale";
					Line = "$d.act.comp.fullLine.v2.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 497 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v2.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v2.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
			};
		},
		
		//Female to male v3 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1CourtingSomeone
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.int.toMale";
					Line = "$d.act.comp.fullLine.v3.int.toMale";
					BranchType = "Pick";
					@base/FormulaOption1CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 498 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}					
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.char.toMale";
					Line = "$d.act.comp.fullLine.v3.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption2CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 499 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}			
					};
				};		
				//Third option - PER
				Topic
				{
					ShortLine = "$d.act.comp.openLine.v3.per.toMale";
					Line = "$d.act.comp.fullLine.v3.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption3CourtingSomeone
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 497 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.sAnswer.v3.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "Curtsy" };
												VoiceOvers = array { 500 };
											}
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureCourtingSomeone
							Next = array
							{
								Topic
								{
									Line = "$d.act.comp.fAnswer.v3.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 501 };
											}
										};
									};
								},
							};
						}
					};
				};
			};
		},
	};
};