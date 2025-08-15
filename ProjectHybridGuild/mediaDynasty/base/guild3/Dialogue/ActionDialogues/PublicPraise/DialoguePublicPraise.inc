//PublicPraise dialogue
Dialogue
{
	Id = "d.act.PublicPraise";
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.cha";
					Line = "$d.act.PublicPraise.fullLine.cha.toMale";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.cha.toMale";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.prod";
					Line = "$d.act.PublicPraise.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.bb";
					Line = "$d.act.PublicPraise.fullLine.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.cha";
					Line = "$d.act.PublicPraise.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.prod";
					Line = "$d.act.PublicPraise.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.embRom.fAnswer.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.bb";
					Line = "$d.act.PublicPraise.fullLine.v2.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.cha";
					Line = "$d.act.PublicPraise.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.prod";
					Line = "$d.act.PublicPraise.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.bb";
					Line = "$d.act.PublicPraise.fullLine.v3.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.char";
					Line = "$d.act.pPraise.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.char.male";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.pro";
					Line = "$d.act.pPraise.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.pro";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.bb";
					Line = "$d.act.pPraise.fullLine.v4.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.char";
					Line = "$d.act.pPraise.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.pro";
					Line = "$d.act.pPraise.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.pro.tomale";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.bb";
					Line = "$d.act.pPraise.fullLine.v5.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.cha";
					Line = "$d.act.PublicPraise.fullLine.cha.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.cha.toMale";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.prod";
					Line = "$d.act.PublicPraise.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.bb";
					Line = "$d.act.PublicPraise.fullLine.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.cha";
					Line = "$d.act.PublicPraise.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.prod";
					Line = "$d.act.PublicPraise.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.embRom.fAnswer.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.bb";
					Line = "$d.act.PublicPraise.fullLine.v2.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.cha";
					Line = "$d.act.PublicPraise.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.prod";
					Line = "$d.act.PublicPraise.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.bb";
					Line = "$d.act.PublicPraise.fullLine.v3.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.char";
					Line = "$d.act.pPraise.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.char.female";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.pro";
					Line = "$d.act.pPraise.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.pro";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.bb";
					Line = "$d.act.pPraise.fullLine.v4.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.char";
					Line = "$d.act.pPraise.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.pro";
					Line = "$d.act.pPraise.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.pro.tomale";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.bb";
					Line = "$d.act.pPraise.fullLine.v5.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.cha";
					Line = "$d.act.PublicPraise.fullLine.cha.toMale";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.cha.toFemale";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.cha.toFemale";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.prod";
					Line = "$d.act.PublicPraise.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.bb";
					Line = "$d.act.PublicPraise.fullLine.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.cha";
					Line = "$d.act.PublicPraise.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.prod";
					Line = "$d.act.PublicPraise.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.embRom.fAnswer.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.bb";
					Line = "$d.act.PublicPraise.fullLine.v2.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.cha";
					Line = "$d.act.PublicPraise.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.prod";
					Line = "$d.act.PublicPraise.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.bb";
					Line = "$d.act.PublicPraise.fullLine.v3.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.char";
					Line = "$d.act.pPraise.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.char.male";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.pro";
					Line = "$d.act.pPraise.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.pro";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.bb";
					Line = "$d.act.pPraise.fullLine.v4.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.char";
					Line = "$d.act.pPraise.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.pro";
					Line = "$d.act.pPraise.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.pro.tofemale";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.bb";
					Line = "$d.act.pPraise.fullLine.v5.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.bb";
							@base/CommonSettingsCritFailurePublicPraise
						}					
					};
				};
			};
		},
				
		//Female to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.cha";
					Line = "$d.act.PublicPraise.fullLine.cha.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.cha.toFemale";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.cha.toFemale";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.prod";
					Line = "$d.act.PublicPraise.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.bb";
					Line = "$d.act.PublicPraise.fullLine.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.cha";
					Line = "$d.act.PublicPraise.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.prod";
					Line = "$d.act.PublicPraise.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.embRom.fAnswer.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v2.bb";
					Line = "$d.act.PublicPraise.fullLine.v2.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v2.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v2.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v2.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v2.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.cha";
					Line = "$d.act.PublicPraise.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.cha";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.cha";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.cha";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.cha";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.prod";
					Line = "$d.act.PublicPraise.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.PublicPraise.openLine.v3.bb";
					Line = "$d.act.PublicPraise.fullLine.v3.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.csAnswer.v3.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicPraise.sAnswer.v3.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.fAnswer.v3.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicPraise.cfAnswer.v3.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.char";
					Line = "$d.act.pPraise.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.char.female";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.pro";
					Line = "$d.act.pPraise.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.pro";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v4.bb";
					Line = "$d.act.pPraise.fullLine.v4.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v4.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v4.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v4.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v4.bb";
							@base/CommonSettingsCritFailurePublicPraise
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
			@base/FormulaOption1PublicPraise
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.char";
					Line = "$d.act.pPraise.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.char";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.char";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.char";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.char";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.pro";
					Line = "$d.act.pPraise.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.pro.tofemale";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicPraise
						}						
					};
				};		
				//Third option - BB
				Topic
				{
					ShortLine = "$d.act.pPraise.openLine.v5.bb";
					Line = "$d.act.pPraise.fullLine.v5.bb";
					BranchType = "Pick";
					@base/FormulaOption3PublicPraise
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingPublicPraise,
							@base/TargetCelebrating
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pPraise.csAnswer.v5.bb";
							@base/CommonSettingsCritSuccessPublicPraise
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pPraise.sAnswer.v5.bb";
							@base/CommonSettingsSuccessPublicPraise
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pPraise.fAnswer.v5.bb";
							@base/CommonSettingsFailurePublicPraise
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pPraise.cfAnswer.v5.bb";
							@base/CommonSettingsCritFailurePublicPraise
						}					
					};
				};
			};
		},
		
	};
};