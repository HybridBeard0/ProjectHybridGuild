//StartRomance dialogue
Dialogue
{
	Id = "d.act.startRomance"; //form should be something like d.act.ActionName
	BranchType = "Pick";
	Topics = array
	{
		
		//male to female (v1)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v1)
				Topic
				{
					ShortLine = "$d.act.embRom.openLine.int.toFemale";
					Line = "$d.act.embRom.fullLine.int.toFemale";
					BranchType = "Pick";

					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 478 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.int.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.int.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.int.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.int.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.int.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.int.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.int.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.int.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.openLine.char.toFemale";
					Line = "$d.act.embRom.fullLine.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 480 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.char.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.char.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.char.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.char.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.char.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.char.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.char.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.char.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.openLine.per.toFemale";
					Line = "$d.act.embRom.fullLine.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 482 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.per.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.per.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.per.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.per.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.per.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.per.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.per.toFemale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.per.toFemale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};
			};
		},
		
		//male to female (v2)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v2)
				Topic
				{
					ShortLine = "$d.act.embRom.v2.openLine.int.toFemale";
					Line = "$d.act.embRom.v2.fullLine.int.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 478 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.v2.openLine.char.toFemale";
					Line = "$d.act.embRom.v2.fullLine.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 480 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick"; 
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};		
				// Third option - PER
				Topic
				{
					ShortLine = "$d.act.embRom.v2.openLine.per.toFemale";
					Line = "$d.act.embRom.v2.fullLine.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 482 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};
			};
		},		
		
		//male to female (v3)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v3)
				Topic
				{
					ShortLine = "$d.act.embRom.v3.openLine.int.toFemale";
					Line = "$d.act.embRom.v3.fullLine.int.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 478 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.int.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.v3.openLine.char.toFemale";
					Line = "$d.act.embRom.v3.fullLine.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 480 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick"; 
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.char.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};		
				// Third option - PER
				Topic
				{
					ShortLine = "$d.act.embRom.v3.openLine.per.toFemale";
					Line = "$d.act.embRom.v3.fullLine.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 482 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.per.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};
			};
		},		
		
		
		//Female to male (v1)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v1)
				Topic
				{
					ShortLine = "$d.act.embRom.openLine.int.toMale";
					Line = "$d.act.embRom.fullLine.int.toMale";
					BranchType = "Pick";
					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 479 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.int.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.int.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.int.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.int.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.int.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.int.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.int.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.int.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.openLine.char.toFemale";
					Line = "$d.act.embRom.fullLine.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 481 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.char.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.char.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.char.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.char.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.char.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.char.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.char.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.char.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.openLine.per.toMale";
					Line = "$d.act.embRom.fullLine.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 483 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.csAnswer.per.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.csAnswer.per.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
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
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.sAnswer.per.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.sAnswer.per.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.fAnswer.per.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.fAnswer.per.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.per.toMale.1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
								Topic
								{
									Line = "$d.act.embRom.cfAnswer.per.toMale.2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};
			};
		},
		
		//female to male (v2)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";	
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v2)
				Topic
				{
					ShortLine = "$d.act.embRom.v2.openLine.int.toMale";
					Line = "$d.act.embRom.v2.fullLine.int.toMale";
					BranchType = "Pick";
					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 479 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.v2.openLine.char.toMale";
					Line = "$d.act.embRom.v2.fullLine.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 481 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick"; 
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};		
				// Third option - PER
				Topic
				{
					ShortLine = "$d.act.embRom.v2.openLine.per.toMale";
					Line = "$d.act.embRom.v2.fullLine.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 483 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.csAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.sAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.fAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v2.cfAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};
			};
		},		
		
		//female to male (v3)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1StartRomanceIron
			Next = array
			{
				//First option - INT (v3)
				Topic
				{
					ShortLine = "$d.act.embRom.v3.openLine.int.toMale";
					Line = "$d.act.embRom.v3.fullLine.int.toMale";
					BranchType = "Pick";
					@base/FormulaOption1StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 479 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.int.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
					ShortLine = "$d.act.embRom.v3.openLine.char.toMale";
					Line = "$d.act.embRom.v3.fullLine.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption2StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 481 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick"; 
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.char.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
										};
									};
								},
							};
						}						
					};
				};		
				// Third option - PER
				Topic
				{
					ShortLine = "$d.act.embRom.v3.openLine.per.toMale";
					Line = "$d.act.embRom.v3.fullLine.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption3StartRomanceIron
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/TargetListen,
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "make_compliment" };
								VoiceOvers = array { 483 };
							}
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.csAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCS,
										};
									};
								},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.sAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceS,
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.fAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceF,
										};
									};
								},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsCritFailureStartRomance
							Next = array
							{
								Topic
								{
									Line = "$d.act.embRom.v3.cfAnswer.per.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingStartRomanceCF,
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
