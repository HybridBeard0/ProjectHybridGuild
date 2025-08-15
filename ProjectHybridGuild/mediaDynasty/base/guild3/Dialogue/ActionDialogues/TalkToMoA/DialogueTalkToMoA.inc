// TalkToMoA (Master of Arsenal) dialogue
Dialogue
{
	Id = "d.act.TalkToMoA";
	BranchType = "Sequence";
	Topics = array
	{
		Topic
		{
			Line = "$d.arsenal.general.NPC.welcome";
			Speaker = "Target";
			Duration = 0.5;
			//Enabled = "Source.IsAdult";
			
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "talk1" };
						VoiceOvers = array { 351 };
					}
				};
			};
		},
		
		Topic
		{
			Speaker = "Source";
			BranchType = "UserChoice";

			Next = array
			{
				// First option - nothing
				Topic
				{
					ShortLine = "$d.act.TalkToPriest.Cancel";
				},

				// Second option - WarEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.war.Player.option";
					Line = "$d.arsenal.event.war.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "(Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.WarEvent) || (Source.IsAdult && Source.IsEmployee && Source.hasTag.Lansquenet && ExistsScriptEventWithTag.WarEvent)";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 383 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.war.NPC.answer.war";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 384 };
									}
								};
							};

							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.war.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 385 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.AttackPower * 6 + Target.DefensePower * 7.5 + Target.Damage * 1.2 + Target.Armor * 0.3) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.AttackPower * 6 + Target.DefensePower * 7.5 + Target.Damage * 1.2 + Target.Armor * 0.3) > 100 && (Target.AttackPower * 6 + Target.DefensePower * 7.5 + Target.Damage * 1.2 + Target.Armor * 0.3) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.AttackPower * 6 + Target.DefensePower * 7.5 + Target.Damage * 1.2 + Target.Armor * 0.3) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes, as a foot soldier
												Topic
												{
													Enabled = "Source.IsFamilyMember || Source.hasTag.Lansquenet";
													ShortLine = "$d.arsenal.event.war.Player.option.soldier";

													DisplayAction = "WarEventSoldier";
													OptionSubtext = array { "$gui.Char.AttackPower", "$gui.Char.Damage", "$gui.Char.DefensePower", "$gui.Char.Armor" };
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "WarEventSoldier" };
															},
														};
													};
												},

												// Yes, as an officer, no lansquenets
												Topic
												{
													Enabled = "Source.SocialLevel >= 10 && Source.hasNotTag.Lansquenet";
													ShortLine = "$d.arsenal.event.war.Player.option.officer";

													DisplayAction = "WarEventOfficer";
													OptionSubtext = array { "$gui.Char.AttackPower", "$gui.Char.Damage", "$gui.Char.DefensePower", "$gui.Char.Armor" };
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "WarEventOfficer" };
															},
														};
													};
												},
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};

				// Third option - MerchantsGuildEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.MerchantsGuild.Player.option.short";
					Line = "$d.arsenal.event.MerchantsGuild.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.MerchantsGuildEvent";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 389 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.MerchantsGuild.NPC.answer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 390 };
									}
								};
							};

							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.MerchantsGuild.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 391 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.Charisma * 10 + Target.Perception * 10 + Target.BargainingBonus * 3) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Charisma * 10 + Target.Perception * 10 + Target.BargainingBonus * 3) > 100 && (Target.Charisma * 10 + Target.Perception * 10 + Target.BargainingBonus * 3) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Charisma * 10 + Target.Perception * 10 + Target.BargainingBonus * 3) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasNotTag.MerchantsGuild"; // to change!
													ShortLine = "$d.arsenal.event.MerchantsGuild.Player.option.join";

													DisplayAction = "MerchantsGuildEventNormal";
													OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.Perception", "$gui.Char.BargainingBonus"};
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "MerchantsGuildEventNormal" };
															},
														};
													};
												},

												// Yes, as a member of the guild
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasTag.MerchantsGuild"; // to change!
													ShortLine = "$d.arsenal.event.GuildEvent.Player.option.joinMember";

													DisplayAction = "MerchantsGuildEventMember";
													OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.Perception", "$gui.Char.BargainingBonus"};
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "MerchantsGuildEventMember" };
															},
														};
													};
												},										
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};

				// Forth option - FreemasonsEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.Freemasons.Player.option.short";
					Line = "$d.arsenal.event.Freemasons.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.FreemasonsEvent";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 392 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.Freemasons.NPC.answer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 393 };
									}
								};
							};

							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.Freemasons.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 391 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Charisma * 10 + Target.Intimidation * 7) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Charisma * 10 + Target.Intimidation * 7) > 100 && (Target.Strength * 10 + Target.Charisma * 10 + Target.Intimidation * 7) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Charisma * 10 + Target.Intimidation * 7) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasNotTag.Freemasons"; // to change!
													ShortLine = "$d.arsenal.event.Freemasons.Player.option.join";

													DisplayAction = "FreemasonsEventNormal";
													OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Charisma", "$gui.Char.Intimidation"};
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "FreemasonsEventNormal" };
															},
														};
													};
												},

												// Yes, as a member of the guild
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasTag.Freemasons"; // to change!
													ShortLine = "$d.arsenal.event.GuildEvent.Player.option.joinMember";

													DisplayAction = "FreemasonsEventMember";
													OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Charisma", "$gui.Char.Intimidation"};
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "FreemasonsEventMember" };
															},
														};
													};
												},										
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};

				// Fifth option - AlchimistsEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.Alchimists.Player.option.short";
					Line = "$d.arsenal.event.Alchimists.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.AlchimistsEvent";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 394 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.Alchimists.NPC.answer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 395 };
									}
								};
							};

							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.Alchimists.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 391 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.Intelligence * 10 + Target.Dexterity * 10 + Target.Resistance * 2.5) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Intelligence * 10 + Target.Dexterity * 10 + Target.Resistance * 2.5) > 100 && (Target.Intelligence * 10 + Target.Dexterity * 10 + Target.Resistance * 2.5) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Intelligence * 10 + Target.Dexterity * 10 + Target.Resistance * 2.5) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasNotTag.Alchimists"; // to change!
													ShortLine = "$d.arsenal.event.Alchimists.Player.option.join";

													DisplayAction = "AlchimistsEventNormal";
													OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.Dexterity", "$gui.Char.Resistance"};
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "AlchimistsEventNormal" };
															},
														};
													};
												},

												// Yes, as a member of the guild
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasTag.Alchimists"; // to change!
													ShortLine = "$d.arsenal.event.GuildEvent.Player.option.joinMember";

													DisplayAction = "AlchimistsEventMember";
													OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.Dexterity", "$gui.Char.Resistance"};
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "AlchimistsEventMember" };
															},
														};
													};
												},										
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};

				// Sixth option - CraftmensGuildEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.CraftmensGuild.Player.option.short";
					Line = "$d.arsenal.event.CraftmensGuild.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.CraftmensGuildEvent";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 396 };
							}
						};
					};
					
					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.CraftmensGuild.NPC.answer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 397 };
									}
								};
							};
							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.CraftmensGuild.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 391 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Intelligence * 10 + Target.Productivity * 30) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Intelligence * 10 + Target.Productivity * 30) > 100 && (Target.Strength * 10 + Target.Intelligence * 10 + Target.Productivity * 30) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Strength * 10 + Target.Intelligence * 10 + Target.Productivity * 30) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasNotTag.CraftmensGuild"; // to change!
													ShortLine = "$d.arsenal.event.CraftmensGuild.Player.option.join";

													DisplayAction = "CraftmensGuildEventNormal";
													OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Intelligence", "$gui.Char.Productivity"};
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "CraftmensGuildEventNormal" };
															},
														};
													};
												},

												// Yes, as a member of the guild
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasTag.CraftmensGuild"; // to change!
													ShortLine = "$d.arsenal.event.GuildEvent.Player.option.joinMember";

													DisplayAction = "CraftmensGuildEventMember";
													OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Intelligence", "$gui.Char.Productivity"};
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "CraftmensGuildEventMember" };
															},
														};
													};
												},										
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};

				// Seventh option - ThievesGuildEvent
				Topic
				{
					ShortLine = "$d.arsenal.event.ThievesGuild.Player.option.short";
					Line = "$d.arsenal.event.ThievesGuild.Player.option";
					//Duration = 0.5;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember && ExistsScriptEventWithTag.ThievesGuildEvent";

					DisplayAction = "ArsenalEvent";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 398 };
							}
						};
					};

					Next = array
					{
						Topic
						{
							Speaker = "Target";
							//Duration = 2.0;
							Line = "$d.arsenal.event.ThievesGuild.NPC.answer";

							TopicResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										Animations = array { "talk1" };
										VoiceOvers = array { 399 };
									}
								};
							};

							Next = array
							{

								// This topic will be said by the MoA if the initiator has the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel >= 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									//Duration = 2.0;
									BranchType = "Sequence";
									Line = "$d.arsenal.event.ThievesGuild.NPC.answer.positive";

									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "talk1" };
												VoiceOvers = array { 391 };
											}
										};
									};
									
									Next = array
									{
										Topic
										{
											Enabled = "(Target.Dexterity * 10 + Target.Perception * 10 + Target.Stealth * 4 ) <= 100";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.bad";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 386 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Dexterity * 10 + Target.Perception * 10 + Target.Stealth * 4 ) > 100 && (Target.Dexterity * 10 + Target.Perception * 10 + Target.Stealth * 4 ) <= 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.average";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 387 };
													}
												};
											};
										},
										Topic
										{
											Enabled = "(Target.Dexterity * 10 + Target.Perception * 10 + Target.Stealth * 4 ) > 160";
											//Duration = 2.0;
											Line = "$d.arsenal.event.general.NPC.rating.good";

											TopicResult = ResultObject
											{
												Results = array
												{
													FunctionPlayRandomReaction
													{
														ApplyTo = "Target";
														Animations = array { "talk1" };
														VoiceOvers = array { 388 };
													}
												};
											};
										},

										Topic
										{
											BranchType = "UserChoice";
											Speaker = "Source";
											
											Next = array
											{
												
												// No
												Topic
												{
													AIChance = "0"; // AI should never pick this.
													ShortLine = "$d.arsenal.event.war.Player.option.cancel";
												},

												// Yes
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasNotTag.ThievesGuild"; // to change!
													ShortLine = "$d.arsenal.event.ThievesGuild.Player.option.join";

													DisplayAction = "ThievesGuildEventNormal";
													OptionSubtext = array { "$gui.Char.Dexterity", "$gui.Char.Perception", "$gui.Char.Stealth"};
													
													ConversationResult = ResultObject
													{
														Results = array {
															FunctionTriggerAction {
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "ThievesGuildEventNormal" };
															},
														};
													};
												},

												// Yes, as a member of the guild
												Topic
												{
													Enabled = "Source.IsFamilyMember && Source.hasTag.ThievesGuild"; // to change!
													ShortLine = "$d.arsenal.event.GuildEvent.Player.option.joinMember";

													DisplayAction = "ThievesGuildEventMember";
													OptionSubtext = array { "$gui.Char.Dexterity", "$gui.Char.Perception", "$gui.Char.Stealth"};
													
													ConversationResult = ResultObject
													{
														Results = array
														{
															FunctionTriggerAction
															{
																ApplyTo = "Source";
																ActionTarget = "FromTargetProfile";
																Actions = array{ "ThievesGuildEventMember" };
															},
														};
													};
												},										
											};
										},
									};
								},
					
								// This topic will be said by the MoA if the initiator has not the title citizen
								Topic
								{
									Enabled = "Target.SocialLevel < 5 && !Target.IsLeader && !Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.notpossible";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {381};
											},
										};
									};
								};
								Topic
								{
									Enabled = "Target.IsLeader || Target.IsCharacterPregnant";
									Line = "$d.arsenal.event.general.LeaderPregnant";
								
									TopicResult = ResultObject
									{
										Results = array
										{
											FunctionPlayRandomReaction
											{
												ApplyTo = "Target";
												Animations = array { "refuse1", "refuse2" };
												VoiceOvers = array {382};
											},
										};
									};
								};
							};
						};
					};
				};
				
				// Last option - BribePrisonerRelease
				Topic
				{
					ShortLine = "$d.arsenal.ReleasePrisoner.option";
					Line = "$avr.ReleasePrisoner.Player.option";
					//Duration = 0.05;
					BranchType = "Pick";
					Enabled = "Source.IsAdult && Source.IsFamilyMember";


					DisplayAction = "BribePrisonerRelease";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "talk1" };
								VoiceOvers = array { 400 };
							}
						};
					};

					Next = array
					{

						// This topic will be said by the MoA if the initiator has the title citizen
						Topic
						{
							ConversationResult = ResultObject
							{
								Results = array
								{
									FunctionPlayRandomReaction
									{
										ApplyTo = "Target";
										VoiceOvers = array {401};
									},
									FunctionShowBookOfPrisoners
									{
										ApplyTo = "Source";
										Mode = "BribeRelease";
									},
								};
							};
						};
					};
				};
			};
		},
	};
};