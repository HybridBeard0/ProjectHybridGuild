//MarkAsOutlaw dialogue
Dialogue
{
	Id = "d.act.MarkAsOutlaw";
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.str";
					Line = "$d.act.MarkAsOutlaw.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.cha";
					Line = "$d.act.MarkAsOutlaw.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.dex";
					Line = "$d.act.MarkAsOutlaw.fullLine.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.str";
					Line = "$d.act.markOutlaw.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.str.tomale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.cha";
					Line = "$d.act.markOutlaw.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.dex";
					Line = "$d.act.markOutlaw.fullLine.v2.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.str";
					Line = "$d.act.markOutlaw.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.str.Male";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.cha";
					Line = "$d.act.markOutlaw.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tomale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tomale";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.dex";
					Line = "$d.act.markOutlaw.fullLine.v3.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.str";
					Line = "$d.act.markOutlaw.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.char";
					Line = "$d.act.markOutlaw.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.dex";
					Line = "$d.act.markOutlaw.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.str";
					Line = "$d.act.markOutlaw.fullLine.v5.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.char";
					Line = "$d.act.markOutlaw.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.dex";
					Line = "$d.act.markOutlaw.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
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
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.str";
					Line = "$d.act.MarkAsOutlaw.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.cha";
					Line = "$d.act.MarkAsOutlaw.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.dex";
					Line = "$d.act.MarkAsOutlaw.fullLine.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},
	
		//male to female v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.str";
					Line = "$d.act.markOutlaw.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.str.female";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.str.tomale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.cha";
					Line = "$d.act.markOutlaw.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.dex";
					Line = "$d.act.markOutlaw.fullLine.v2.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//male to female v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.str";
					Line = "$d.act.markOutlaw.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.str.Female";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.cha";
					Line = "$d.act.markOutlaw.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tomale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tomale";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.dex";
					Line = "$d.act.markOutlaw.fullLine.v3.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//male to female v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.str";
					Line = "$d.act.markOutlaw.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.char";
					Line = "$d.act.markOutlaw.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.dex";
					Line = "$d.act.markOutlaw.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//male to female v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.str";
					Line = "$d.act.markOutlaw.fullLine.v5.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.char";
					Line = "$d.act.markOutlaw.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.dex";
					Line = "$d.act.markOutlaw.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},	
		
		//Female to male (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.str";
					Line = "$d.act.MarkAsOutlaw.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.cha";
					Line = "$d.act.MarkAsOutlaw.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.dex";
					Line = "$d.act.MarkAsOutlaw.fullLine.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to male v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.str";
					Line = "$d.act.markOutlaw.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.str.tofemale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.cha";
					Line = "$d.act.markOutlaw.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.dex";
					Line = "$d.act.markOutlaw.fullLine.v2.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to male v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.str";
					Line = "$d.act.markOutlaw.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.str.Male";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.cha";
					Line = "$d.act.markOutlaw.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tofemale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.cha.tofemale";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.dex";
					Line = "$d.act.markOutlaw.fullLine.v3.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to male v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.str";
					Line = "$d.act.markOutlaw.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.char";
					Line = "$d.act.markOutlaw.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.dex";
					Line = "$d.act.markOutlaw.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},
	
		//female to male v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.str";
					Line = "$d.act.markOutlaw.fullLine.v5.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.char";
					Line = "$d.act.markOutlaw.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.dex";
					Line = "$d.act.markOutlaw.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},	
	
		//female to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.str";
					Line = "$d.act.MarkAsOutlaw.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.cha";
					Line = "$d.act.MarkAsOutlaw.fullLine.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.MarkAsOutlaw.openLine.dex";
					Line = "$d.act.MarkAsOutlaw.fullLine.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.csAnswer.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.sAnswer.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.fAnswer.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.MarkAsOutlaw.cfAnswer.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to female v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.str";
					Line = "$d.act.markOutlaw.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.str.female";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.str.tofemale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.cha";
					Line = "$d.act.markOutlaw.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.cha";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v2.dex";
					Line = "$d.act.markOutlaw.fullLine.v2.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v2.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v2.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v2.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v2.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to female v3
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.str";
					Line = "$d.act.markOutlaw.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.str.Female";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.cha";
					Line = "$d.act.markOutlaw.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.cha";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.cha.tofemale";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.cha.tofemale";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v3.dex";
					Line = "$d.act.markOutlaw.fullLine.v3.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v3.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v3.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v3.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v3.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to female v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.str";
					Line = "$d.act.markOutlaw.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.char";
					Line = "$d.act.markOutlaw.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v4.dex";
					Line = "$d.act.markOutlaw.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v4.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v4.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v4.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v4.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},

		//female to female v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MarkAsOutlaw
			Next = array
			{
				//First option - STR
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.str";
					Line = "$d.act.markOutlaw.fullLine.v5.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.str";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.str";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.str";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.str";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};
				//Second option - CHA
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.char";
					Line = "$d.act.markOutlaw.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption2MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.char";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.char";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.char";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}						
					};
				};		
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.markOutlaw.openLine.v5.dex";
					Line = "$d.act.markOutlaw.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3MarkAsOutlaw
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingMarkAsOutlaw,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.csAnswer.v5.dex";
							@base/CommonSettingsCritSuccessMarkAsOutlaw
						},
						//Success reply
						Topic
						{
							Line = "$d.act.markOutlaw.sAnswer.v5.dex";
							@base/CommonSettingsSuccessMarkAsOutlaw
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.fAnswer.v5.dex";
							@base/CommonSettingsFailureMarkAsOutlaw
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.markOutlaw.cfAnswer.v5.dex";
							@base/CommonSettingsCritFailureMarkAsOutlaw
						}					
					};
				};
			};
		},	

	};
};