//StartLiaison dialogue
Dialogue
{
	Id = "d.act.startLiaison"; //form should be something like d.act.ActionName
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.int.toFemale";
					Line = "$d.act.startLia.fullLine.int.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 488 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.int.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.int.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.int.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.int.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.char.toFemale";
					Line = "$d.act.startLia.fullLine.char.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 489 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.char.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.char.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.char.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.char.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.per.toFemale";
					Line = "$d.act.startLia.fullLine.per.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 490 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.per.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.per.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.per.toFemale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.per.toFemale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v2.int.toFemale";
					Line = "$d.act.startLia.fullLine.v2.int.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 488 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v2.char.toFemale";
					Line = "$d.act.startLia.fullLine.v2.char.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 489 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.v2.per.toFemale";
					Line = "$d.act.startLia.fullLine.v2.per.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 490 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v3.int.toFemale";
					Line = "$d.act.startLia.fullLine.v3.int.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 488 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v3.char.toFemale";
					Line = "$d.act.startLia.fullLine.v3.char.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 489 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.v3.per.toFemale";
					Line = "$d.act.startLia.fullLine.v3.per.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 490 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.per.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v2.int.toMale";
					Line = "$d.act.startLia.fullLine.v2.int.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 491 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v2.char.toMale";
					Line = "$d.act.startLia.fullLine.v2.char.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 492 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.v2.per.toMale";
					Line = "$d.act.startLia.fullLine.v2.per.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 493 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v2.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v2.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v3.int.toMale";
					Line = "$d.act.startLia.fullLine.v3.int.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 491 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.v3.char.toMale";
					Line = "$d.act.startLia.fullLine.v3.char.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 492 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.v3.per.toMale";
					Line = "$d.act.startLia.fullLine.v3.per.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 493 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.v3.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.v3.per.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
			 //adjust file names here
			@base/FormulaOption1StartLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.int.toMale";
					Line = "$d.act.startLia.fullLine.int.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 491 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.int.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.int.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.int.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.int.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
							};
						},
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.startLia.openLine.char.toMale";
					Line = "$d.act.startLia.fullLine.char.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 492 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.char.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.char.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.char.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.char.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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
					ShortLine = "$d.act.startLia.openLine.per.toMale";
					Line = "$d.act.startLia.fullLine.per.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3StartLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 493 };
							}
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.sAnswer.per.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.sAnswer.per.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 485 };
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
							@base/CommonSettingsFailureStartLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.startLia.fAnswer.per.toMale.1";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
											}
										};
									};
								},
								Topic
								{
									Line = "$d.act.startLia.fAnswer.per.toMale.2";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 486 };
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