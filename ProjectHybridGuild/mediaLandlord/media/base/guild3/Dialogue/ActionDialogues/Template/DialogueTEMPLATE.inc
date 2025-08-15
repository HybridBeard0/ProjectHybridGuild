//TEMPLATE dialogue
Dialogue
{
	Id = "DIALOGUE ID HERE"; //form should be something like d.act.ActionName, needs to be unique
	BranchType = "Pick";
	Topics = array
	{
		//male to male V1, 
		//if you want to have multiple versions of opening lines, copy this topic, and use the alternative versions of opening lines there
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && Target.IsMale"; //This topic is only used when a male speaks to another male
			 //adjust file names here, this file contains the Replacements and DisplayChance used when hovering over the target and for the first option
			@base/FormulaOption1TEMPLATE
			Next = array
			{
				//First option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here, this file contains the Replacements and DisplayChance used when hovering over the target and for the first option
					@base/FormulaOption1TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							//Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/SourceTalk,
							//Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen,
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here, this file contains the probability, animation, and conversation result that is to be applied for ALL critical success outcomes of the dialogue
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here, this file contains the probability, animation, and conversation result that is to be applied for ALL success outcomes of the dialogue
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here, this file contains the probability, animation, and conversation result that is to be applied for ALL failure outcomes of the dialogue
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here, this file contains the probability, animation, and conversation result that is to be applied for ALL critical failure outcomes of the dialogue
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
				//Second option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					//adjust file names here, this file contains replacements and display chance for the second dialogue option
					@base/FormulaOption2TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							//adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};		
				//Third option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here, this file contains replacements and displaychacne for third dialogue option
					@base/FormulaOption3TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
			};
		},
		
		//Below you find the same version of this dialogue for the other gender combinations (male to female, female to male, female to female) replace dialogue keys where you need gender specific lines
		//If you want to have multiple opening lines, you need to have an alternative topic for all combinations with the alternative opening lines
		//The system will then pick one topic by random that fits the "Enabled" filter
		
		//Male to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1TEMPLATE
			Next = array
			{
				//First option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
				//Second option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};		
				//Third option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
			};
		},
		
		//female to male (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1TEMPLATE
			Next = array
			{
				//First option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
				//Second option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};		
				//Third option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
			};
		},
		
		//female to female (change loca keys here if some lines need to be different in some languages)
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && !Target.IsMale";
			 //adjust file names here
			@base/FormulaOption1TEMPLATE
			Next = array
			{
				//First option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption1TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
				//Second option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption2TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};		
				//Third option - STAT (replace STAT with the stat that is different from the other options)
				Topic
				{
					ShortLine = "SHORTLINE LOCA KEY HERE";
					Line = "FULL LINE LOCA KEY HERE";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOption3TEMPLATE
					TopicResult = ResultObject
					{
						Results = array
						{
							@base/SourceTalk,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
							@base/TargetListen, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
						};
					};
					Next = array
					{
						//Crit Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Success reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsSuccessTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "SUCCESS ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "SUCCESS ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						//Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						},
						// crit Failure reply
						Topic
						{
							BranchType = "Pick";
							 //adjust file names here
							@base/CommonSettingsCritFailureTEMPLATE
							Next = array
							{
								Topic
								{
									Line = "CRIT FAILURE ANSWER LOCA KEY";
								},
								//OPTIONAL: ADD ADDITIONAL ALTERNATIVE ANSWER LINES THAT WILL THEN BE PICKED BY RANDOM
								//Topic
								//{
								//	Line = "CRIT FAILURE ALTERNATE ANSWER 1 LOCA KEY";
								//},
							};
						}						
					};
				};
			};
		},
	};
};