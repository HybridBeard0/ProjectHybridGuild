//Public Relations dialogue
Dialogue
{
	Id = "d.act.GoCampaigning";
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.cha";
					Line = "$d.act.goCamp.fullLine.cha.toMale";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.intim";
					Line = "$d.act.goCamp.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.str";
					Line = "$d.act.goCamp.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.cha";
					Line = "$d.act.goCamp.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.intim";
					Line = "$d.act.goCamp.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.str";
					Line = "$d.act.goCamp.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.cha";
					Line = "$d.act.goCamp.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.intim";
					Line = "$d.act.goCamp.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.str";
					Line = "$d.act.goCamp.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.char";
					Line = "$d.act.goC.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.char.male";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.intim";
					Line = "$d.act.goC.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.str";
					Line = "$d.act.goC.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.char";
					Line = "$d.act.goC.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.char";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.intim";
					Line = "$d.act.goC.fullLine.v5.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.str";
					Line = "$d.act.goC.fullLine.v5.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
					};
				};
			};
		},	
	
		//male to female (Change keys here if required different keys for some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.cha";
					Line = "$d.act.goCamp.fullLine.cha.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.cha.female";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.intim";
					Line = "$d.act.goCamp.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.str";
					Line = "$d.act.goCamp.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.cha";
					Line = "$d.act.goCamp.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.intim";
					Line = "$d.act.goCamp.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.str";
					Line = "$d.act.goCamp.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.cha";
					Line = "$d.act.goCamp.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.intim";
					Line = "$d.act.goCamp.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.str";
					Line = "$d.act.goCamp.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.char";
					Line = "$d.act.goC.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.char.female";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.intim";
					Line = "$d.act.goC.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.str";
					Line = "$d.act.goC.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.char";
					Line = "$d.act.goC.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.char";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.intim";
					Line = "$d.act.goC.fullLine.v5.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.str";
					Line = "$d.act.goC.fullLine.v5.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
					};
				};
			};
		},
		
		//female to male (Change keys here if required different keys for some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.cha";
					Line = "$d.act.goCamp.fullLine.cha.toMale";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.intim";
					Line = "$d.act.goCamp.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.str";
					Line = "$d.act.goCamp.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.cha";
					Line = "$d.act.goCamp.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.intim";
					Line = "$d.act.goCamp.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.str";
					Line = "$d.act.goCamp.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.cha";
					Line = "$d.act.goCamp.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.intim";
					Line = "$d.act.goCamp.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.str";
					Line = "$d.act.goCamp.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.char";
					Line = "$d.act.goC.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.char.male";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.intim";
					Line = "$d.act.goC.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.str";
					Line = "$d.act.goC.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.char";
					Line = "$d.act.goC.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.char";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.intim";
					Line = "$d.act.goC.fullLine.v5.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.str";
					Line = "$d.act.goC.fullLine.v5.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
					};
				};
			};
		},
	
		//female to female (Change keys here if required different keys for some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.cha";
					Line = "$d.act.goCamp.fullLine.cha.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.cha.female";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.intim";
					Line = "$d.act.goCamp.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.str";
					Line = "$d.act.goCamp.fullLine.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.cha";
					Line = "$d.act.goCamp.fullLine.v2.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.intim";
					Line = "$d.act.goCamp.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v2.str";
					Line = "$d.act.goCamp.fullLine.v2.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v2.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v2.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.cha";
					Line = "$d.act.goCamp.fullLine.v3.cha";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.cha";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.cha";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.intim";
					Line = "$d.act.goCamp.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goCamp.openLine.v3.str";
					Line = "$d.act.goCamp.fullLine.v3.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goCamp.sAnswer.v3.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goCamp.fAnswer.v3.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.char";
					Line = "$d.act.goC.fullLine.v4.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.char.female";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.intim";
					Line = "$d.act.goC.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v4.str";
					Line = "$d.act.goC.fullLine.v4.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v4.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v4.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
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
			@base/FormulaOption1GoCampaigning
			Next = array
			{
				//First option - CHA
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.char";
					Line = "$d.act.goC.fullLine.v5.char";
					BranchType = "Pick";
					@base/FormulaOption1GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.char";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.char";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.intim";
					Line = "$d.act.goC.fullLine.v5.intim";
					BranchType = "Pick";
					@base/FormulaOption2GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.intim";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.intim";
							@base/CommonSettingsFailureGoCampaigning
						},
					};
				};		
				//Third option - STR
				Topic
				{
					ShortLine = "$d.act.goC.openLine.v5.str";
					Line = "$d.act.goC.fullLine.v5.str";
					BranchType = "Pick";
					@base/FormulaOption3GoCampaigning
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingGoCamp,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							Line = "$d.act.goC.sAnswer.v5.str";
							@base/CommonSettingsSuccessGoCampaigning
						},
						//Failure reply
						Topic
						{
							Line = "$d.act.goC.fAnswer.v5.str";
							@base/CommonSettingsFailureGoCampaigning
						},				
					};
				};
			};
		},

	};
};