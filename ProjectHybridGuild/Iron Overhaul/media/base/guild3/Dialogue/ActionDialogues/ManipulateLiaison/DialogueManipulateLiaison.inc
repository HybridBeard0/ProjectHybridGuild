//ManipulateLiaison dialogue
Dialogue
{
	Id = "d.act.manipulateLiaison"; //form should be something like d.act.ActionName
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
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.int";
					Line = "$d.act.manipLia.fullLine.int";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
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
					ShortLine = "$d.act.manipLia.openLine.char";
					Line = "$d.act.manipLia.fullLine.char";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.str";
					Line = "$d.act.manipLia.fullLine.str";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
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
		
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v2.int.toFemale";
					Line = "$d.act.manipLia.fullLine.v2.int.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
					ShortLine = "$d.act.manipLia.openLine.v2.char.toFemale";
					Line = "$d.act.manipLia.fullLine.v2.char.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v2.str.toFemale";
					Line = "$d.act.manipLia.fullLine.v2.str.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v3.int.toFemale";
					Line = "$d.act.manipLia.fullLine.v3.int.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.int.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
					ShortLine = "$d.act.manipLia.openLine.v3.char.toFemale";
					Line = "$d.act.manipLia.fullLine.v3.char.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v3.char.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v3.str.toFemale";
					Line = "$d.act.manipLia.fullLine.v3.str.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v3.str.female";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
		
		//female to male
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.int";
					Line = "$d.act.manipLia.fullLine.int";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
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
					ShortLine = "$d.act.manipLia.openLine.char";
					Line = "$d.act.manipLia.fullLine.char";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.char";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.str";
					Line = "$d.act.manipLia.fullLine.str";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 502 }; // opening 1
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 504 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.str";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 505 };
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
		
		//Female to male V2 UNCOMMENT IF YOU WANT TO HAVE MULTIPLE OPENING LINES
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v2.int.toMale";
					Line = "$d.act.manipLia.fullLine.v2.int.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
					ShortLine = "$d.act.manipLia.openLine.v2.char.toMale";
					Line = "$d.act.manipLia.fullLine.v2.char.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v2.str.toMale";
					Line = "$d.act.manipLia.fullLine.v2.str.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v2.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v2.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v2.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
		
		//Female to male v3 UNCOMMENT IF YOU WANT TO HAVE MULTIPLE OPENING LINES
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1ManipulateLiaisonIron
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v3.int.toMale";
					Line = "$d.act.manipLia.fullLine.v3.int.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v2.int.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
					ShortLine = "$d.act.manipLia.openLine.v3.char.toMale";
					Line = "$d.act.manipLia.fullLine.v3.char.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v3.char.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						}						
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.manipLia.openLine.v3.str.toMale";
					Line = "$d.act.manipLia.fullLine.v3.str.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3ManipulateLiaisonIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 503 }; // opening 2
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.csAnswer.v3.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
											}
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.sAnswer.v3.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "accept1" };
												VoiceOvers = array { 506 };
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
							@base/CommonSettingsFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.fAnswer.v3.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
											}
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureManipulateLiaison
							Next = array
							{
								Topic
								{
									Line = "$d.act.manipLia.cfAnswer.v3.str.male";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "NoThankYou", "refuse1", "refuse2" };
												VoiceOvers = array { 507 };
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
