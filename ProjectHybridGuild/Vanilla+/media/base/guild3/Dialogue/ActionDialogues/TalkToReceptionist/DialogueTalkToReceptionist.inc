// TalkToReceptionist (Reception Clerk) dialogue
Dialogue {
	Id = "d.act.TalkToReceptionist";
	BranchType = "Sequence";
	FaceSpeaker = false; // We don't want the receptionist to look at whoever is talking to him.
	Topics = array {
		Topic {
			Line = "$avr.Receptionist.welcome";
			Speaker = "Target";
			Duration = 0.5;

			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "sit_talk1" };
						VoiceOvers = array { 434 };
					}
				};
			};
		},
		
		Topic {
			Speaker = "Source";
			BranchType = "UserChoice";

			Next = array {
				// First option - nothing
				Topic {
					ShortLine = "$d.act.TalkToPriest.Cancel";
				},

				// Second option - unlock next nobility title
				Topic { ShortLine = "$d.act.TalkToReceptionist.UnlockTitle.short"; Line = "$avr.Receptionist.Player.option.Title"; DisplayTitle = 0; Enabled = "Source.IsAdult && Source.SocialLevel < 15";
					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 435 };
							}
						};
					};
					Next = array {
						Topic {
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 439 };
									}
								};
							};
							@base/UnlockNobilityTitle
						},
					};
				},
				
				// Third option - apply for office
				Topic { 
					ShortLine = "$action.ApplyForOffice"; 
					Line = "$avr.Receptionist.Player.option.Office";
					Enabled = "Source.IsAdult";
					//Duration = 1.0; // Make this quick
					DisplayAction = "ApplyForOffice"; // Show a nice icon and tooltip.
					
					BranchType = "Sequence"; // Check all options in sequence, run the first one that is valid. Make sure to terminate each branch with EndDialogue.

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 436 };
							}
						};
					};
					
					Next = array {
						
						// If the supplicant doesn't have RunForOffice available yet, tell them to go packing.
						Topic {
							Enabled = "!Source.IsActionAvailable.RunForOffice";
							Speaker = "Target";
							Line = "$d.act.TalkToReceptionist.ApplyForOffice.NoRunForOffice";
							Next = array { EndDialogue{} };

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 423 };
									}
								};
							};
						},
						
						// If the city is wrong, reject right away.
						Topic {
							Enabled = "!Source.IsInHomeCity";
							Speaker = "Target";
							Line = "$d.act.TalkToReceptionist.ApplyForOffice.WrongCity";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 423 };
									}
								};
							};
							Next = array { EndDialogue{} };
						},
						
						// If the character is not the leader and doesn't have nepotism, tell him so.
						Topic {
							Enabled = "!Source.IsLeader && !Source.IsActionAvailable.PlantSibling";
							Speaker = "Target";
							Line = "$d.act.TalkToReceptionist.ApplyForOffice.NoNepotism";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 423 };
									}
								};
							};
							Next = array { EndDialogue{} };
						},
						
						// Finally, if everything is above board, open the office UI.
						Topic {
							Enabled = "Source.IsInHomeCity && (Source.IsLeader || Source.IsActionAvailable.PlantSibling)";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 439 };
									}
								};
							};

							ConversationResult = ResultObject {
								Results = array {
									FunctionTriggerInteractionEvent {
										ApplyTo = "Source";
										Event = "ToggleOfficesWindow";
									},
								};
							};							
						},
					};
				},

				// Forth option - GreaseTheWheels
				Topic {
					Speaker = "Source";
					ShortLine = "$action.GreaseTheWheels";
					Line = "$avr.Receptionist.Player.option.GreaseTheWheels";
					Enabled = "Source.hasTag.PartyMember && Source.SocialLevel > 6";

					DisplayAction = "GreaseTheWheels";

					BranchType = "Pick";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 440 };
							},
						};
					};

					Next = array
					{
						// This topic will be said by the receptionist if the initiator does not have enough money.
						Topic
						{
							Enabled = "Source.OwnerWealth.Money < (Source.SocialLevel*Source.SocialLevel*(((180 * Source.hasTag.BuffEasy) + (240 * Source.hasTag.BuffNormal) + (300 * Source.hasTag.BuffHard) + (360 * Source.hasTag.BuffImpossible))-Source.SocialLevel))";
							Speaker = "Switch";
							Line = "$avr.Receptionist.NPC.Answer.NotEnoughMoney";
							
							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Source";
										Animations = array { "shame1" };
										VoiceOvers = array {};
									},
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 423 };
									},
								};
							};
						},
						
						// This topic will be said by the receptionist if the initiator CAN GreaseTheWheels.
						Topic
						{
							Enabled = "Source.OwnerWealth.Money >= (Source.SocialLevel*Source.SocialLevel*(((180 * Source.hasTag.BuffEasy) + (240 * Source.hasTag.BuffNormal) + (300 * Source.hasTag.BuffHard) + (360 * Source.hasTag.BuffImpossible))-Source.SocialLevel))";
							Speaker = "Switch";
							Line = "$avr.Receptionist.NPC.Answer.Positive";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "sit_talk1" };
										VoiceOvers = array { 439 };
									},
								};
							};

							ConversationResult = ResultObject
							{
								Results = array
								{
									FunctionTriggerAction
									{
										ApplyTo = "Source";
										ActionTarget = "FromTargetProfile";
										Actions = array{"GreaseTheWheels"};
									},
								};
							};
						},
					};
				};
			};
		},
	};
};