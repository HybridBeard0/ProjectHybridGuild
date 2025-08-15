Dialogue
{
	Id = "d.act.DuelInsult";
	BranchType = "Pick";
	Topics = array
	{
		//male to male v1
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale";
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha1";
					Line = "$d.act.DuelInsult.fullLine.cha1";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str1";
					Line = "$d.act.DuelInsult.fullLine.str1";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex1";
					Line = "$d.act.DuelInsult.fullLine.dex1";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha2";
					Line = "$d.act.DuelInsult.fullLine.cha2";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str2";
					Line = "$d.act.DuelInsult.fullLine.str2";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex2";
					Line = "$d.act.DuelInsult.fullLine.dex2";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha3";
					Line = "$d.act.DuelInsult.fullLine.cha3";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str3";
					Line = "$d.act.DuelInsult.fullLine.str3";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex3";
					Line = "$d.act.DuelInsult.fullLine.dex3";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.char";
					Line = "$d.act.duelInsult.fullLine.v4.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.str.toMale";
					Line = "$d.act.duelInsult.fullLine.v4.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.dex";
					Line = "$d.act.duelInsult.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.char";
					Line = "$d.act.duelInsult.fullLine.v5.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.str.toMale";
					Line = "$d.act.duelInsult.fullLine.v5.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.dex";
					Line = "$d.act.duelInsult.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
						},					
					};
				};
				
			};
		},
		
		//Male to female v1 (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha1";
					Line = "$d.act.DuelInsult.fullLine.cha1";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str1";
					Line = "$d.act.DuelInsult.fullLine.str1";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex1";
					Line = "$d.act.DuelInsult.fullLine.dex1";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha2";
					Line = "$d.act.DuelInsult.fullLine.cha2";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str2";
					Line = "$d.act.DuelInsult.fullLine.str2";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex2";
					Line = "$d.act.DuelInsult.fullLine.dex2";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha3";
					Line = "$d.act.DuelInsult.fullLine.cha3.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str3";
					Line = "$d.act.DuelInsult.fullLine.str3";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex3";
					Line = "$d.act.DuelInsult.fullLine.dex3";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.char";
					Line = "$d.act.duelInsult.fullLine.v4.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.str.toFemale";
					Line = "$d.act.duelInsult.fullLine.v4.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.dex";
					Line = "$d.act.duelInsult.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.char";
					Line = "$d.act.duelInsult.fullLine.v5.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.str.toFemale";
					Line = "$d.act.duelInsult.fullLine.v5.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.dex";
					Line = "$d.act.duelInsult.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
						},					
					};
				};
				
			};
		},
		
		//Female to male v1 (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha1";
					Line = "$d.act.DuelInsult.fullLine.cha1";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str1";
					Line = "$d.act.DuelInsult.fullLine.str1";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex1";
					Line = "$d.act.DuelInsult.fullLine.dex1";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha2";
					Line = "$d.act.DuelInsult.fullLine.cha2";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str2";
					Line = "$d.act.DuelInsult.fullLine.str2";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex2";
					Line = "$d.act.DuelInsult.fullLine.dex2";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha3";
					Line = "$d.act.DuelInsult.fullLine.cha3";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str3";
					Line = "$d.act.DuelInsult.fullLine.str3";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex3";
					Line = "$d.act.DuelInsult.fullLine.dex3";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.char";
					Line = "$d.act.duelInsult.fullLine.v4.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.str.toMale";
					Line = "$d.act.duelInsult.fullLine.v4.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.dex";
					Line = "$d.act.duelInsult.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.char";
					Line = "$d.act.duelInsult.fullLine.v5.char.toMale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.str.toMale";
					Line = "$d.act.duelInsult.fullLine.v5.str.toMale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.str.male";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.dex";
					Line = "$d.act.duelInsult.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
						},					
					};
				};
				
			};
		},
		
		//female to female v1 (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha1";
					Line = "$d.act.DuelInsult.fullLine.cha1";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str1";
					Line = "$d.act.DuelInsult.fullLine.str1";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex1";
					Line = "$d.act.DuelInsult.fullLine.dex1";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha2";
					Line = "$d.act.DuelInsult.fullLine.cha2";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str2";
					Line = "$d.act.DuelInsult.fullLine.str2";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex2";
					Line = "$d.act.DuelInsult.fullLine.dex2";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all1";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all2";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all3";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.all4";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.cha3";
					Line = "$d.act.DuelInsult.fullLine.cha3.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.cha";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.str3";
					Line = "$d.act.DuelInsult.fullLine.str3";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.str";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.DuelInsult.openLine.dex3";
					Line = "$d.act.DuelInsult.fullLine.dex3";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.sAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.DuelInsult.fAnswer.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.char";
					Line = "$d.act.duelInsult.fullLine.v4.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.str.toFemale";
					Line = "$d.act.duelInsult.fullLine.v4.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v4.dex";
					Line = "$d.act.duelInsult.fullLine.v4.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v4.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
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
			@base/FormulaOption1DuelInsult
			Next = array
			{
				//First option - cha
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.char";
					Line = "$d.act.duelInsult.fullLine.v5.char.toFemale";
					BranchType = "Pick";
					@base/FormulaOption1DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.char";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},		
					};
				};
				//Second option - STR
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.str.toFemale";
					Line = "$d.act.duelInsult.fullLine.v5.str.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.str.female";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};							
						},
					};
				};	
				
				//Third option - DEX
				Topic
				{
					ShortLine = "$d.act.duelInsult.openLine.v5.dex";
					Line = "$d.act.duelInsult.fullLine.v5.dex";
					BranchType = "Pick";
					@base/FormulaOption3DuelInsult
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBlamingDuelInsult,
							@base/TargetShocked
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.sAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceLaughing,
											@base/TargetShockedDuelInsultS
										};
									};
								},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureDuelInsult
							Next = array
							{
								Topic
								{
									Line = "$d.act.duelInsult.fAnswer.v5.dex";
									TopicResult = ResultObject
									{
										Results = array
										{
											@base/SourceShocked,
											@base/TargetThreatenDuelInsultF
										};
									};
								},
							};	
						},					
					};
				};
				
			};
		},
		
	};
};