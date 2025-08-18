//	Effects/rewards Template - just to speed up work
//
//									FunctionPlayRandomReaction
//									{
//										ApplyTo = "Source";
//										Animations = array { "listen2" };
//										VoiceOvers = array { 139 };
//									};
// Some attributes that we should use in dialogues
// Strength ; Dexterity ; Intelligence ; Perception ; Charisma
// ExperienceGainMult % ; PrestigeGainMult % ; BargainingBonus ; ReputationBonus % ; Productivity %
// Resistance ; Stealth ; Intimidation
//									ModifierEffect
//									{
//										ApplyTo = "Target";
//										ActorValue = "Dexterity";
//										Mod = 1;
//										Duration = 20.0;
//										Recover = true;
//									};
//									FunctionTransferPrestige
//									{
//										Receiver = "Target";
//										Amount = 30;
//									};
//									FunctionGiveExperience
//									{
//										ApplyTo = "Target";
//										Amount = 50;
//									};
//									FunctionTransferMoney
//									{
//										Receiver = "Target";
//										Amount = 30;
//									};
//
//									FunctionUpdateRelationship
//									{
//										AffectCurrentNeighborhoodToTarget = "100";
//									};

//Template
Dialogue
{
	//	ID of the whole dialogue
	Id = "d.q.inMyMind";
	Topics = array
	{
		Topic
		{
			//	ID of this line
			Id = "d.q.inMyMind.openLine1";
			//	Localisation key
			Line = "$d.q.inMyMind.openLine1";
			Speaker = "Source";
			Next = array
			{
				Topic
				{
					//	The instruction key is always the same, it's what is displayed next to question mark icon on the green bar
					Id = "d.q.instruction";
					Line = "$d.q.instruction";
					//	Type of user input for this and next level of dialogue; pick = just pick and print; UserChoice = user needs to choose; more on the confluence page
					BranchType = "UserChoice";
					Speaker = "Switch";
					//	Answers 
					Next = array 
					{
						Topic
						{
							Id = "d.q.inMyMind.answer1";
							Line = "$d.q.inMyMind.answer1";
							//	 Place for animations and sound for this line
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										//	ApplyTo = Source that who printed; Target the person who listens 
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								//	Closing Lines
								Topic
								{
									Id = "d.q.inMyMind.closingLine1";
									Line = "$d.q.inMyMind.closingLine1";
									Speaker = "Switch";
									//	Results of the whole conversation; all effects; rewards; buffs
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionGiveExperience
											{
												ApplyTo = "Target";
												Amount = 30;
											};
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.inMyMind.answer2";
							Line = "$d.q.inMyMind.answer2";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.inMyMind.closingLine2";
									Line = "$d.q.inMyMind.closingLine2";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionGiveExperience
											{
												ApplyTo = "Target";
												Amount = 50;
											};
											FunctionTransferMoney
											{
												Receiver = "Target";
												Amount = 50;
											};
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.inMyMind.answer3";
							Line = "$d.q.inMyMind.answer3";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.inMyMind.closingLine3";
									Line = "$d.q.inMyMind.closingLine3";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionGiveExperience
											{
												ApplyTo = "Target";
												Amount = 30;
											};
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};

//Onion riddle
Dialogue
{
	//	ID of the whole dialogue
	Id = "d.q.riddOnion";
	Topics = array
	{
		Topic
		{
			//	ID of this line
			Id = "d.q.riddOnion.openLine1";
			//	Localisation key
			Line = "$d.q.riddOnion.openLine1";
			Enabled = "Speaker.IsAdult && Listener.IsAdult";
			Speaker = "Source";
			Next = array
			{
				Topic
				{
					//	The instruction key is always the same, it's what is displayed next to question mark icon on the green bar
					Id = "d.q.instruction";
					Line = "$d.q.instruction";
					//	Type of user input for this and next level of dialogue; pick = just pick and print; UserChoice = user needs to choose; more on the confluence page
					BranchType = "UserChoice";
					Speaker = "Switch";
					Next = array
					{
						//	Answers 
						Topic
						{
							Id = "d.q.riddOnion.answer1";
							Line = "$d.q.riddOnion.answer1";
							//	Switch = After this user choice; the character who prints will change
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										//	ApplyTo = Source that who printed; Target the person who listens 
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								//	Closing Lines
								Topic
								{
									Id = "d.q.riddOnion.closingLine1";
									Line = "$d.q.riddOnion.closingLine1";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.riddOnion.closingLine1"};
											}
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.riddOnion.answer2";
							Line = "$d.q.riddOnion.answer2";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.riddOnion.closingLine2";
									Line = "$d.q.riddOnion.closingLine2";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.riddOnion.closingLine2"};
											}
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.riddOnion.answer3";
							Line = "$d.q.riddOnion.answer3";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.riddOnion.closingLine3";
									Line = "$d.q.riddOnion.closingLine3";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.riddOnion.closingLine3"};
											}
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};

//Will you be rich?
Dialogue
{
	//	ID of the whole dialogue
	Id = "d.q.youRich";
	Topics = array
	{
		Topic
		{
			//	ID of this line
			Id = "d.q.youRich.openLine1";
			//	Localisation key
			Line = "$d.q.youRich.openLine1";
			Enabled = "Speaker.IsAdult && Listener.IsAdult";
			Speaker = "Source";
			Next = array
			{
				Topic
				{
					//	The instruction key is always the same, it's what is displayed next to question mark icon on the green bar
					Id = "d.q.instruction";
					Line = "$d.q.instruction";
					//	Type of user input for this and next level of dialogue; pick = just pick and print; UserChoice = user needs to choose; more on the confluence page
					BranchType = "UserChoice";
					Speaker = "Switch";
					Next = array
					{
						//	Answers 
						Topic
						{
							Id = "d.q.youRich.answer1";
							Line = "$d.q.youRich.answer1";
							//	 Place for animations and sound for this line
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										//	ApplyTo = Source that who printed; Target the person who listens 
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								//	Closing Lines
								Topic
								{
									Id = "d.q.youRich.closingLine1";
									Line = "$d.q.youRich.closingLine1";
									Speaker = "Switch";
									//	Results of the whole conversation; all effects; rewards; buffs
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.youRich.closingLine1"};
											}
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.youRich.answer2";
							Line = "$d.q.youRich.answer2";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.youRich.closingLine2";
									Line = "$d.q.youRich.closingLine2";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionGiveExperience
											{
												ApplyTo = "Target";
												Amount = 50;
											};
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.youRich.answer3";
							Line = "$d.q.youRich.answer3";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.youRich.closingLine3";
									Line = "$d.q.youRich.closingLine3";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.youRich.closingLine3"};
											}
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};

//The heliocentrism theory.
Dialogue
{
	//	ID of the whole dialogue
	Id = "d.q.helio";
	Topics = array
	{
		Topic
		{
			//	ID of this line
			Id = "d.q.helio.openLine1";
			//	Localisation key
			Line = "$d.q.helio.openLine1";
			Enabled = "Speaker.IsAdult && Listener.IsAdult";
			Speaker = "Source";
			Next = array
			{
				Topic
				{
					//	The instruction key is always the same, it's what is displayed next to question mark icon on the green bar
					Id = "d.q.instruction";
					Line = "$d.q.instruction";
					//	Type of user input for this and next level of dialogue; pick = just pick and print; UserChoice = user needs to choose; more on the confluence page
					BranchType = "UserChoice";
					Speaker = "Switch";
					Next = array
					{
						//	Answers 
						Topic
						{
							Id = "d.q.helio.answer1";
							Line = "$d.q.helio.answer1";
							//	 Place for animations and sound for this line
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										//	ApplyTo = Source that who printed; Target the person who listens 
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								//	Closing Lines
								Topic
								{
									Id = "d.q.helio.closingLine1";
									Line = "$d.q.helio.closingLine1";
									Speaker = "Switch";
									//	Results of the whole conversation; all effects; rewards; buffs
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.helio.closingLine1"};
											}											
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.helio.answer2";
							Line = "$d.q.helio.answer2";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.helio.closingLine2";
									Line = "$d.q.helio.closingLine2";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.helio.closingLine2"};
											}	
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.helio.answer3";
							Line = "$d.q.helio.answer3";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.helio.closingLine3";
									Line = "$d.q.helio.closingLine3";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.helio.closingLine3"};
											}
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};

//I was; wondering... What makes a dynasty great?
Dialogue
{
	//	ID of the whole dialogue
	Id = "d.q.greatDyn";
	Topics = array
	{
		Topic
		{
			//	ID of this line
			Id = "d.q.greatDyn.openLine1";
			//	Localisation key
			Line = "$d.q.greatDyn.openLine1";
			Enabled = "Speaker.IsAdult && Listener.IsAdult";
			Speaker = "Source";
			Next = array
			{
				Topic
				{
					//	The instruction key is always the same, it's what is displayed next to question mark icon on the green bar
					Id = "d.q.instruction";
					Line = "$d.q.instruction";
					//	Type of user input for this and next level of dialogue; pick = just pick and print; UserChoice = user needs to choose; more on the confluence page
					BranchType = "UserChoice";
					Speaker = "Switch";
					Next = array
					{
						//	Answers 
						Topic
						{
							Id = "d.q.greatDyn.answer1";
							Line = "$d.q.greatDyn.answer1";
							//	 Place for animations and sound for this line
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										//	ApplyTo = Source that who printed; Target the person who listens 
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								//	Closing Lines
								Topic
								{
									Id = "d.q.greatDyn.closingLine1";
									Line = "$d.q.greatDyn.closingLine1";
									Speaker = "Switch";
									//	Results of the whole conversation; all effects; rewards; buffs
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.greatDyn.closingLine1"};
											}
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.greatDyn.answer2";
							Line = "$d.q.greatDyn.answer2";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.greatDyn.closingLine2";
									Line = "$d.q.greatDyn.closingLine2";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.greatDyn.closingLine2"};
											}
										};
									};
								};
							};
						};
						Topic
						{
							Id = "d.q.greatDyn.answer3";
							Line = "$d.q.greatDyn.answer3";
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "listen2" };
										VoiceOvers = array { 139 };
									};
								};
							};
							Next = array
							{
								Topic
								{
									Id = "d.q.greatDyn.closingLine3";
									Line = "$d.q.greatDyn.closingLine3";
									Speaker = "Switch";
									ConversationResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Source";
												Animations = array { "listen2" };
												VoiceOvers = array { 139 };
											};
											FunctionApplyResults
											{
												ApplyTo = "Target";
												ResultObjectIds = array{"d.q.greatDyn.closingLine3"};
											}
										};
									};
								};
							};
						};
					};
				};
			};
		};
	};
};
