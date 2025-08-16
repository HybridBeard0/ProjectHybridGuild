Dialogue
{
	Id = "d.act.MakeSecular"; 
	BranchType = "Pick";
	Topics = array
	{
		//male to male v1, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.int_intim";
					Line = "$d.act.mSecular.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.char_intim";
					Line = "$d.act.mSecular.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.bb_intim";
					Line = "$d.act.mSecular.fullLine.v1.bb_intim.toMale";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to male v2, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.int_intim";
					Line = "$d.act.mSecular.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.char_intim";
					Line = "$d.act.mSecular.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.bb_intim";
					Line = "$d.act.mSecular.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to male v3, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.int_intim";
					Line = "$d.act.mSecular.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.char_intim";
					Line = "$d.act.mSecular.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.bb_intim";
					Line = "$d.act.mSecular.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to male v4, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.int_intim";
					Line = "$d.act.mSecular.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.char_intim";
					Line = "$d.act.mSecular.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.bb_intim";
					Line = "$d.act.mSecular.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to male v5, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.int_intim";
					Line = "$d.act.mSecular.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.char_intim";
					Line = "$d.act.mSecular.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.bb_intim";
					Line = "$d.act.mSecular.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v1, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.int_intim";
					Line = "$d.act.mSecular.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.char_intim";
					Line = "$d.act.mSecular.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.bb_intim";
					Line = "$d.act.mSecular.fullLine.v1.bb_intim.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v2, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.int_intim";
					Line = "$d.act.mSecular.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.char_intim";
					Line = "$d.act.mSecular.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.bb_intim";
					Line = "$d.act.mSecular.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v3, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.int_intim";
					Line = "$d.act.mSecular.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.char_intim";
					Line = "$d.act.mSecular.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.bb_intim";
					Line = "$d.act.mSecular.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v4, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.int_intim";
					Line = "$d.act.mSecular.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.char_intim";
					Line = "$d.act.mSecular.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.bb_intim";
					Line = "$d.act.mSecular.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v5, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.int_intim";
					Line = "$d.act.mSecular.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.char_intim";
					Line = "$d.act.mSecular.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.bb_intim";
					Line = "$d.act.mSecular.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v1, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.int_intim";
					Line = "$d.act.mSecular.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.char_intim";
					Line = "$d.act.mSecular.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.bb_intim";
					Line = "$d.act.mSecular.fullLine.v1.bb_intim.toMale";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v2, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.int_intim";
					Line = "$d.act.mSecular.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.char_intim";
					Line = "$d.act.mSecular.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.bb_intim";
					Line = "$d.act.mSecular.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v3, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.int_intim";
					Line = "$d.act.mSecular.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.char_intim";
					Line = "$d.act.mSecular.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.bb_intim";
					Line = "$d.act.mSecular.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v4, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.int_intim";
					Line = "$d.act.mSecular.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.char_intim";
					Line = "$d.act.mSecular.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.bb_intim";
					Line = "$d.act.mSecular.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v5, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.int_intim";
					Line = "$d.act.mSecular.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.char_intim";
					Line = "$d.act.mSecular.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.bb_intim";
					Line = "$d.act.mSecular.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v1, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.int_intim";
					Line = "$d.act.mSecular.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.char_intim";
					Line = "$d.act.mSecular.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v1.bb_intim";
					Line = "$d.act.mSecular.fullLine.v1.bb_intim.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v1.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v2, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.int_intim";
					Line = "$d.act.mSecular.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.char_intim";
					Line = "$d.act.mSecular.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v2.bb_intim";
					Line = "$d.act.mSecular.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v2.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v3, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.int_intim";
					Line = "$d.act.mSecular.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.char_intim";
					Line = "$d.act.mSecular.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v3.bb_intim";
					Line = "$d.act.mSecular.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v3.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v4, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.int_intim";
					Line = "$d.act.mSecular.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.char_intim";
					Line = "$d.act.mSecular.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v4.bb_intim";
					Line = "$d.act.mSecular.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v4.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v5, 
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeSecular
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.int_intim";
					Line = "$d.act.mSecular.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.char_intim";
					Line = "$d.act.mSecular.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mSecular.openLine.v5.bb_intim";
					Line = "$d.act.mSecular.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeSecular
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeSecular,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeSecular
							Next = array
							{
								Topic
								{
									Line = "$d.act.mSecular.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

	};
};