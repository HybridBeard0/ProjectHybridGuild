//Bribe Office holder dialogue
Dialogue
{
	Id = "d.act.BribeOfficeHolder";
	BranchType = "Pick";
	Topics = array
	{
		//male to male
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.int";
					Line = "$d.act.bribeOH.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.int";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.int";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.int";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.int";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.intim";
					Line = "$d.act.bribeOH.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.intim";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.intim";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.intim";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.intim";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.cha";
					Line = "$d.act.bribeOH.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.cha";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.cha";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.cha";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.cha";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//male to male v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.int_rp";
					Line = "$d.act.bribeOff.fullLine.v2.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v2.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.intim_rp.male";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.char_rp";
					Line = "$d.act.bribeOff.fullLine.v2.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//male to male v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.int_rp";
					Line = "$d.act.bribeOff.fullLine.v3.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v3.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.char_rp";
					Line = "$d.act.bribeOff.fullLine.v3.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//male to male v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.int_rp";
					Line = "$d.act.bribeOff.fullLine.v4.int_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.intim_rp.toMale";
					Line = "$d.act.bribeOff.fullLine.v4.intim_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.intim_rp.tomale";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.intim_rp.tomale";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp"; // reuse of another key
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp"; // reuse of another key
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.char_rp";
					Line = "$d.act.bribeOff.fullLine.v4.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//male to male v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.int_rp";
					Line = "$d.act.bribeOff.fullLine.v5.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.intim_rp.toMale";
					Line = "$d.act.bribeOff.fullLine.v5.intim_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.intim_rp.male";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.intim_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.char_rp";
					Line = "$d.act.bribeOff.fullLine.v5.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},
		
		//Male to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.int";
					Line = "$d.act.bribeOH.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.int";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.int";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.int";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.int";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.intim";
					Line = "$d.act.bribeOH.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.intim";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.intim";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.intim";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.intim";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.cha";
					Line = "$d.act.bribeOH.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.cha";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.cha";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.cha";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.cha";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Male to female v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.int_rp";
					Line = "$d.act.bribeOff.fullLine.v2.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v2.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.intim_rp.female";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.char_rp";
					Line = "$d.act.bribeOff.fullLine.v2.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
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
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.int_rp";
					Line = "$d.act.bribeOff.fullLine.v3.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v3.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.char_rp";
					Line = "$d.act.bribeOff.fullLine.v3.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Male to female v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.int_rp";
					Line = "$d.act.bribeOff.fullLine.v4.int_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.intim_rp.toFemale";
					Line = "$d.act.bribeOff.fullLine.v4.intim_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.intim_rp.tomale";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.intim_rp.tomale";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp"; // reuse of a key
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp"; // reuse of a key
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.char_rp";
					Line = "$d.act.bribeOff.fullLine.v4.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Male to female v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.int_rp";
					Line = "$d.act.bribeOff.fullLine.v5.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.intim_rp.toFemale";
					Line = "$d.act.bribeOff.fullLine.v5.intim_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.intim_rp.female";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.intim_rp"; 
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.intim_rp"; 
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.char_rp";
					Line = "$d.act.bribeOff.fullLine.v5.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},
		
		//Female to Male (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.int";
					Line = "$d.act.bribeOH.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.int";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.int";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.int";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.int";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.intim";
					Line = "$d.act.bribeOH.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.intim";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.intim";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.intim";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.intim";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.cha";
					Line = "$d.act.bribeOH.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.cha";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.cha";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.cha";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.cha";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Male v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.int_rp";
					Line = "$d.act.bribeOff.fullLine.v2.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v2.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.intim_rp.male";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.char_rp";
					Line = "$d.act.bribeOff.fullLine.v2.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Male v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.int_rp";
					Line = "$d.act.bribeOff.fullLine.v3.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v3.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.char_rp";
					Line = "$d.act.bribeOff.fullLine.v3.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Male v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.int_rp";
					Line = "$d.act.bribeOff.fullLine.v4.int_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.intim_rp.toMale";
					Line = "$d.act.bribeOff.fullLine.v4.intim_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.intim_rp.tofemale";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.intim_rp.tofemale";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp"; // reuse key
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp"; // reuse key
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.char_rp";
					Line = "$d.act.bribeOff.fullLine.v4.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Male v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.int_rp";
					Line = "$d.act.bribeOff.fullLine.v5.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.intim_rp.toMale";
					Line = "$d.act.bribeOff.fullLine.v5.intim_rp.toMale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.intim_rp.male";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.intim_rp"; 
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.intim_rp"; 
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.char_rp";
					Line = "$d.act.bribeOff.fullLine.v5.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},
		
		//Female to Female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.int";
					Line = "$d.act.bribeOH.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.int";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.int";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.int";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.int";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.intim";
					Line = "$d.act.bribeOH.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.intim";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.intim";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.intim";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.intim";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOH.openLine.cha";
					Line = "$d.act.bribeOH.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOH.csAnswer.cha";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOH.sAnswer.cha";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.fAnswer.cha";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOH.cfAnswer.cha";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Female v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.int_rp";
					Line = "$d.act.bribeOff.fullLine.v2.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v2.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.intim_rp.female";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v2.char_rp";
					Line = "$d.act.bribeOff.fullLine.v2.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v2.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v2.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v2.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v2.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Female v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.int_rp";
					Line = "$d.act.bribeOff.fullLine.v3.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.intim_rp";
					Line = "$d.act.bribeOff.fullLine.v3.intim_rp";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.intim_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.intim_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v3.char_rp";
					Line = "$d.act.bribeOff.fullLine.v3.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v3.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v3.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v3.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Female v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.int_rp";
					Line = "$d.act.bribeOff.fullLine.v4.int_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.intim_rp.toFemale";
					Line = "$d.act.bribeOff.fullLine.v4.intim_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.intim_rp.tofemale";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.intim_rp.tofemale";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v3.intim_rp"; // reuse key
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp"; // reuse key
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v4.char_rp";
					Line = "$d.act.bribeOff.fullLine.v4.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v4.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v4.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v4.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v4.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

		//Female to Female v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1BribeOfficeHolder
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.int_rp";
					Line = "$d.act.bribeOff.fullLine.v5.int_rp";
					BranchType = "Pick";
					@base/FormulaOption1BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.int_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.int_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.int_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.int_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.intim_rp.toFemale";
					Line = "$d.act.bribeOff.fullLine.v5.intim_rp.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.intim_rp.female";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.intim_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.intim_rp"; 
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.intim_rp"; 
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}						
					};
				};		
				//Third option - CHA
				Topic
				{
					ShortLine = "$d.act.bribeOff.openLine.v5.char_rp";
					Line = "$d.act.bribeOff.fullLine.v5.char_rp";
					BranchType = "Pick";
					@base/FormulaOption3BribeOfficeHolder
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceSmearing,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.bribeOff.csAnswer.v5.char_rp";
							@base/CommonSettingsCritSuccessBribeOfficeHolder
						},
						//Success reply
						Topic
						{
							Line = "$d.act.bribeOff.sAnswer.v5.char_rp";
							@base/CommonSettingsSuccessBribeOfficeHolder
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.fAnswer.v5.char_rp";
							@base/CommonSettingsFailureBribeOfficeHolder
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.bribeOff.cfAnswer.v5.char_rp";
							@base/CommonSettingsCritFailureBribeOfficeHolder
						}					
					};
				};
			};
		},

	};
};