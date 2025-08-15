//PublicShaming dialogue
Dialogue
{
	Id = "d.act.PublicShaming";
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.per";
					Line = "$d.act.PublicShaming.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.prod";
					Line = "$d.act.PublicShaming.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.int";
					Line = "$d.act.PublicShaming.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.int.toMale";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.per";
					Line = "$d.act.PublicShaming.fullLine.v2.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.prod";
					Line = "$d.act.PublicShaming.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.int";
					Line = "$d.act.PublicShaming.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.per";
					Line = "$d.act.PublicShaming.fullLine.v3.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.prod";
					Line = "$d.act.PublicShaming.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.int";
					Line = "$d.act.PublicShaming.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.per";
					Line = "$d.act.pShaming.fullLine.v4.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.per.tomale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.pro";
					Line = "$d.act.pShaming.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.pro.male";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.int";
					Line = "$d.act.pShaming.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.int.male";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.int.tomale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.per";
					Line = "$d.act.pShaming.fullLine.v5.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.pro";
					Line = "$d.act.pShaming.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.pro";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.int";
					Line = "$d.act.pShaming.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.per";
					Line = "$d.act.PublicShaming.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.prod";
					Line = "$d.act.PublicShaming.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.int";
					Line = "$d.act.PublicShaming.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.int.toFemale";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.per";
					Line = "$d.act.PublicShaming.fullLine.v2.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.prod";
					Line = "$d.act.PublicShaming.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.int";
					Line = "$d.act.PublicShaming.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.per";
					Line = "$d.act.PublicShaming.fullLine.v3.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.prod";
					Line = "$d.act.PublicShaming.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.int";
					Line = "$d.act.PublicShaming.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.per";
					Line = "$d.act.pShaming.fullLine.v4.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.per.tomale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.pro";
					Line = "$d.act.pShaming.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.pro.male";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.int";
					Line = "$d.act.pShaming.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.int.male";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.int.tomale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.per";
					Line = "$d.act.pShaming.fullLine.v5.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.pro";
					Line = "$d.act.pShaming.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.pro";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.int";
					Line = "$d.act.pShaming.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.per";
					Line = "$d.act.PublicShaming.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.prod";
					Line = "$d.act.PublicShaming.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.int";
					Line = "$d.act.PublicShaming.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.int.toMale";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.per";
					Line = "$d.act.PublicShaming.fullLine.v2.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.prod";
					Line = "$d.act.PublicShaming.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.int";
					Line = "$d.act.PublicShaming.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.per";
					Line = "$d.act.PublicShaming.fullLine.v3.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.prod";
					Line = "$d.act.PublicShaming.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.int";
					Line = "$d.act.PublicShaming.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.int";
							@base/CommonSettingsCritFailurePublicShaming
						}					
					};
				};
			};
		},
		//Female to male v4
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.per";
					Line = "$d.act.pShaming.fullLine.v4.per.toMale";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.per.tofemale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.pro";
					Line = "$d.act.pShaming.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.pro.male";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.int";
					Line = "$d.act.pShaming.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.int.male";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.int.tofemale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.int";
							@base/CommonSettingsCritFailurePublicShaming
						}					
					};
				};
			};
		},
		//Female to male v5
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.per";
					Line = "$d.act.pShaming.fullLine.v5.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.pro";
					Line = "$d.act.pShaming.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.pro";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.int";
					Line = "$d.act.pShaming.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.per";
					Line = "$d.act.PublicShaming.fullLine.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.prod";
					Line = "$d.act.PublicShaming.fullLine.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.int";
					Line = "$d.act.PublicShaming.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.int.toFemale";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.per";
					Line = "$d.act.PublicShaming.fullLine.v2.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.prod";
					Line = "$d.act.PublicShaming.fullLine.v2.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v2.int";
					Line = "$d.act.PublicShaming.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v2.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v2.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v2.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v2.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.per";
					Line = "$d.act.PublicShaming.fullLine.v3.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.prod";
					Line = "$d.act.PublicShaming.fullLine.v3.prod";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.prod";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.prod";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.prod";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.prod";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.PublicShaming.openLine.v3.int";
					Line = "$d.act.PublicShaming.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.csAnswer.v3.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.PublicShaming.sAnswer.v3.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.fAnswer.v3.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.PublicShaming.cfAnswer.v3.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.per";
					Line = "$d.act.pShaming.fullLine.v4.per.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.per.tofemale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.pro";
					Line = "$d.act.pShaming.fullLine.v4.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.pro.female";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v4.int";
					Line = "$d.act.pShaming.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v4.int.female";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v4.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v4.int.tofemale";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v4.int";
							@base/CommonSettingsCritFailurePublicShaming
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
			@base/FormulaOption1PublicShaming
			Next = array
			{
				//First option - PER
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.per";
					Line = "$d.act.pShaming.fullLine.v5.per";
					BranchType = "Pick";
					@base/FormulaOption1PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.per";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.per";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.per";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.per";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};
				//Second option - PROD
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.pro";
					Line = "$d.act.pShaming.fullLine.v5.pro";
					BranchType = "Pick";
					@base/FormulaOption2PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.pro";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.pro";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.pro";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.pro";
							@base/CommonSettingsCritFailurePublicShaming
						}						
					};
				};		
				//Third option - INT
				Topic
				{
					ShortLine = "$d.act.pShaming.openLine.v5.int";
					Line = "$d.act.pShaming.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption3PublicShaming
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingPublicShaming,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							Line = "$d.act.pShaming.csAnswer.v5.int";
							@base/CommonSettingsCritSuccessPublicShaming
						},
						//Success reply
						Topic
						{
							Line = "$d.act.pShaming.sAnswer.v5.int";
							@base/CommonSettingsSuccessPublicShaming
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.pShaming.fAnswer.v5.int";
							@base/CommonSettingsFailurePublicShaming
						},
						// crit Failure reply
						Topic
						{
							Line = "$d.act.pShaming.cfAnswer.v5.int";
							@base/CommonSettingsCritFailurePublicShaming
						}					
					};
				};
			};
		},
		
	};
};