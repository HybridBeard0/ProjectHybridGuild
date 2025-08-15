//TEMPLATE dialogue
Dialogue
{
	Id = "d.act.MakeCatholic"; 
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - INT 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.int_intim";
					Line = "$d.act.mCatholic.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.char_intim";
					Line = "$d.act.mCatholic.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v1.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.int_intim";
					Line = "$d.act.mCatholic.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.char_intim";
					Line = "$d.act.mCatholic.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.int_intim";
					Line = "$d.act.mCatholic.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.char_intim";
					Line = "$d.act.mCatholic.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.int_intim";
					Line = "$d.act.mCatholic.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.char_intim";
					Line = "$d.act.mCatholic.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.int_intim";
					Line = "$d.act.mCatholic.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.char_intim";
					Line = "$d.act.mCatholic.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//male to female v1, 
		//if you want to have multiple versions of opening lines, copy this topic, and use the alternative versions of opening lines there
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - STAT 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.int_intim";
					Line = "$d.act.mCatholic.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.char_intim";
					Line = "$d.act.mCatholic.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v1.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.int_intim";
					Line = "$d.act.mCatholic.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.char_intim";
					Line = "$d.act.mCatholic.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.int_intim";
					Line = "$d.act.mCatholic.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.char_intim";
					Line = "$d.act.mCatholic.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.int_intim";
					Line = "$d.act.mCatholic.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.char_intim";
					Line = "$d.act.mCatholic.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.int_intim";
					Line = "$d.act.mCatholic.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.char_intim";
					Line = "$d.act.mCatholic.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to male v1, 
		//if you want to have multiple versions of opening lines, copy this topic, and use the alternative versions of opening lines there
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - STAT 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.int_intim";
					Line = "$d.act.mCatholic.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.char_intim";
					Line = "$d.act.mCatholic.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v1.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.int_intim";
					Line = "$d.act.mCatholic.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.char_intim";
					Line = "$d.act.mCatholic.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.int_intim";
					Line = "$d.act.mCatholic.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.char_intim";
					Line = "$d.act.mCatholic.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.int_intim";
					Line = "$d.act.mCatholic.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.char_intim";
					Line = "$d.act.mCatholic.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.int_intim";
					Line = "$d.act.mCatholic.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.char_intim";
					Line = "$d.act.mCatholic.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

		//female to female v1, 
		//if you want to have multiple versions of opening lines, copy this topic, and use the alternative versions of opening lines there
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";			
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - STAT 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.int_intim";
					Line = "$d.act.mCatholic.fullLine.v1.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.char_intim";
					Line = "$d.act.mCatholic.fullLine.v1.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v1.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v1.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v1.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v1.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.int_intim";
					Line = "$d.act.mCatholic.fullLine.v2.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.char_intim";
					Line = "$d.act.mCatholic.fullLine.v2.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v2.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v2.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v2.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v2.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.int_intim";
					Line = "$d.act.mCatholic.fullLine.v3.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.char_intim";
					Line = "$d.act.mCatholic.fullLine.v3.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v3.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v3.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v3.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v3.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.int_intim";
					Line = "$d.act.mCatholic.fullLine.v4.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.char_intim";
					Line = "$d.act.mCatholic.fullLine.v4.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v4.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v4.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v4.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v4.bb_intim";
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
			@base/FormulaOption1MakeCatholic
			Next = array
			{
				//First option - int 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.int_intim";
					Line = "$d.act.mCatholic.fullLine.v5.int_intim";
					BranchType = "Pick";
					@base/FormulaOption1MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.int_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.int_intim";
								},
							};
						},						
					};
				};
				//Second option - CHAR 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.char_intim";
					Line = "$d.act.mCatholic.fullLine.v5.char_intim";
					BranchType = "Pick";
					@base/FormulaOption2MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.char_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.char_intim";
								},
							};
						},					
					};
				};		
				//Third option - BB 
				Topic
				{
					ShortLine = "$d.act.mCatholic.openLine.v5.bb_intim";
					Line = "$d.act.mCatholic.fullLine.v5.bb_intim";
					BranchType = "Pick";
					@base/FormulaOption3MakeCatholic
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalkMakeCatholic,
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.sAnswer.v5.bb_intim";
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureMakeCatholic
							Next = array
							{
								Topic
								{
									Line = "$d.act.mCatholic.fAnswer.v5.bb_intim";
								},
							};
						},						
					};
				};
			};
		},

	};
};