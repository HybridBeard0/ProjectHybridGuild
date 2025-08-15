
Dialogue
{
	Id = "d.act.AwardKeyToCity";
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.int";
					Line = "$d.act.AwardKeyToCity.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.intim";
					Line = "$d.act.AwardKeyToCity.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.rb";
					Line = "$d.act.AwardKeyToCity.fullLine.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.v2.int";
					Line = "$d.act.awardKey.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.intim";
					Line = "$d.act.awardKey.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.rb";
					Line = "$d.act.awardKey.fullLine.v2.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.int";
					Line = "$d.act.awardKey.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.intim";
					Line = "$d.act.awardKey.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.rb";
					Line = "$d.act.awardKey.fullLine.v3.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.int";
					Line = "$d.act.awardKey.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.intim";
					Line = "$d.act.awardKey.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.repb";
					Line = "$d.act.awardKey.fullLine.v4.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.int";
					Line = "$d.act.awardKey.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.intim";
					Line = "$d.act.awardKey.fullLine.v5.intim.male";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.repb";
					Line = "$d.act.awardKey.fullLine.v5.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};	
						},					
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.int";
					Line = "$d.act.AwardKeyToCity.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},						
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.intim";
					Line = "$d.act.AwardKeyToCity.fullLine.intim.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},						
					};
				};		
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.rb";
					Line = "$d.act.AwardKeyToCity.fullLine.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.v2.int";
					Line = "$d.act.awardKey.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.intim";
					Line = "$d.act.awardKey.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.rb";
					Line = "$d.act.awardKey.fullLine.v2.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.int";
					Line = "$d.act.awardKey.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.intim";
					Line = "$d.act.awardKey.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.rb";
					Line = "$d.act.awardKey.fullLine.v3.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.int";
					Line = "$d.act.awardKey.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.intim";
					Line = "$d.act.awardKey.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.repb";
					Line = "$d.act.awardKey.fullLine.v4.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.int";
					Line = "$d.act.awardKey.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.intim";
					Line = "$d.act.awardKey.fullLine.v5.intim.female";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.repb";
					Line = "$d.act.awardKey.fullLine.v5.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};	
						},					
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.int";
					Line = "$d.act.AwardKeyToCity.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},					
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.intim";
					Line = "$d.act.AwardKeyToCity.fullLine.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.intim.toFemale";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},				
					};
				};		
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.rb";
					Line = "$d.act.AwardKeyToCity.fullLine.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.v2.int";
					Line = "$d.act.awardKey.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.intim";
					Line = "$d.act.awardKey.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.rb";
					Line = "$d.act.awardKey.fullLine.v2.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.int";
					Line = "$d.act.awardKey.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.intim";
					Line = "$d.act.awardKey.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.rb";
					Line = "$d.act.awardKey.fullLine.v3.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.int";
					Line = "$d.act.awardKey.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.intim";
					Line = "$d.act.awardKey.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.repb";
					Line = "$d.act.awardKey.fullLine.v4.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.int";
					Line = "$d.act.awardKey.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.intim";
					Line = "$d.act.awardKey.fullLine.v5.intim.female";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.repb";
					Line = "$d.act.awardKey.fullLine.v5.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};	
						},					
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - INT
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.int";
					Line = "$d.act.AwardKeyToCity.fullLine.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},				
					};
				};
				//Second option - INTIM
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.intim";
					Line = "$d.act.AwardKeyToCity.fullLine.intim.toFemale";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.intim.toFemale";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},	
					};
				};		
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.rb";
					Line = "$d.act.AwardKeyToCity.fullLine.rb.toFemale";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.sAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.AwardKeyToCity.fAnswer.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};	
						},		
					};
				};
			};
		};

		//female to female v2
		Topic
		{
			Line = "$d.q.instructionToActiveDialogue";
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.AwardKeyToCity.openLine.v2.int";
					Line = "$d.act.awardKey.fullLine.v2.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.intim";
					Line = "$d.act.awardKey.fullLine.v2.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v2.rb";
					Line = "$d.act.awardKey.fullLine.v2.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v2.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.int";
					Line = "$d.act.awardKey.fullLine.v3.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.intim";
					Line = "$d.act.awardKey.fullLine.v3.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v3.rb";
					Line = "$d.act.awardKey.fullLine.v3.rb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v3.rb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.int";
					Line = "$d.act.awardKey.fullLine.v4.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.intim";
					Line = "$d.act.awardKey.fullLine.v4.intim";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v4.repb";
					Line = "$d.act.awardKey.fullLine.v4.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v4.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
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
			@base/FormulaOption1AwardKeyToCity
			Next = array
			{
				//First option - int
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.int";
					Line = "$d.act.awardKey.fullLine.v5.int";
					BranchType = "Pick";
					@base/FormulaOption1AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.int";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},		
					};
				};
				//Second option - intim
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.intim";
					Line = "$d.act.awardKey.fullLine.v5.intim.female";
					BranchType = "Pick";
					@base/FormulaOption2AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.intim";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};							
						},
					};
				};	
				
				//Third option - RB
				Topic
				{
					ShortLine = "$d.act.awardKey.openLine.v5.repb";
					Line = "$d.act.awardKey.fullLine.v5.repb";
					BranchType = "Pick";
					@base/FormulaOption3AwardKeyToCity
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceBoastingAwardKeyToCity,
							@base/TargetListen
						};
					};
					Next = array
					{
						//Success reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsSuccessAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.sAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetAcceptingAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							@base/CommonSettingsFailureAwardKeyToCity
							Next = array
							{
								Topic
								{
									Line = "$d.act.awardKey.fAnswer.v5.repb";

									TopicResult = ResultObject
									{
										Results = array
										{
											@base/TargetDecliningAwardKeyToCity,
											@base/SourceListen
										};
									};
								}
							};	
						},					
					};
				};
			};
		},

	};
};