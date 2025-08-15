// Propose Marriage dialogue (get engaged to someone)
Dialogue {
	Id = "d.act.proposeMarriage";
	BranchType = "Pick";
	Topics = array {
		
		// TODO
		// - Add dialogue tree for FEMALE asking a MALE to marry them.
		// - Tune animations.
		// - Tune the dialogue lines themselves, obviously.
		
		// MALE character asks FEMALE to marry them
		Topic {
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "Source.IsMale && !Target.IsMale";
			 //adjust file names here
			@base/FormulaOptionProposeMarriage
			Next = array {
				
				// Actually ask for hand
				Topic {
					ShortLine = "$d.act.proposeMarriage.propose.toFemale";
					Line = "$d.act.proposeMarriage.proposeLONG.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOptionProposeMarriage
					TopicResult = ResultObject {
						Results = array {
							@base/TargetCourtingReceive,
							@base/SourceReverenceProposeMarriage,
						};
					};
					Next = array {
						//Success reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsSuccessProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_1.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_2.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_3.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
							};
						},
						//Failure reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsFailureProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_1.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_2.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_3.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
							};
						},
					};
				},
				
				// Actually ask for hand, variation 2
				Topic {
					ShortLine = "$d.act.proposeMarriage.propose2.toFemale";
					Line = "$d.act.proposeMarriage.propose2LONG.toFemale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOptionProposeMarriage
					TopicResult = ResultObject {
						Results = array {
							@base/TargetCourtingReceive,
							@base/SourceReverenceProposeMarriage,
						};
					};
					Next = array {
						//Success reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsSuccessProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_1.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_2.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_3.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
							};
						},
						//Failure reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsFailureProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_1.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_2.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_3.toMale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
							};
						},
					};
				},
				
				// Get cold feet and abort
				Topic {
					ShortLine = "$d.act.proposeMarriage.cancel.bothGenders";
					Line = "$d.act.proposeMarriage.cancel.fullLine.bothGenders";
					AIChance = "0"; // AI should never pick this.
					TopicResult = ResultObject {
						Results = array {
							@base/SourceDeclining,
							@base/TargetListen,
						};
					};
				},
			};
		},
		
		// FEMALE character asks MALE to marry them
		Topic {
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			
			//Enabled = "Source.IsFemale && Target.IsMale";
			
			//adjust file names here
			@base/FormulaOptionProposeMarriage
			Next = array {
				
				// Actually ask for hand
				Topic {
					ShortLine = "$d.act.proposeMarriage.propose.toMale";
					Line = "$d.act.proposeMarriage.LONG.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOptionProposeMarriage
					TopicResult = ResultObject {
						Results = array {
							@base/TargetCourtingReceive,
							@base/SourceReverenceProposeMarriage,
						};
					};
					Next = array {
						//Success reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsSuccessProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
							};
						},
						//Failure reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsFailureProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
							};
						},
					};
				},
				
				// Actually ask for hand, variation 2
				Topic {
					ShortLine = "$d.act.proposeMarriage.propose2.toMale";
					Line = "$d.act.proposeMarriage.propose2LONG.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOptionProposeMarriage
					TopicResult = ResultObject {
						Results = array {
							@base/TargetCourtingReceive,
							@base/SourceReverenceProposeMarriage,
						};
					};
					Next = array {
						//Success reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsSuccessProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
							};
						},
						//Failure reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsFailureProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
							};
						},
					};
				},
				
				// Get cold feet and abort
				Topic {
					ShortLine = "$d.act.proposeMarriage.cancel.bothGenders";
					Line = "$d.act.proposeMarriage.cancel.fullLine.bothGenders";
					AIChance = "0"; // AI should never pick this.
					TopicResult = ResultObject {
						Results = array {
							@base/SourceDeclining,
							@base/TargetListen,
						};
					};
				},
			};
		},
/*
		//variation 2
		Topic {
			Line = "$d.q.instructionToActiveDialogue";				
			Speaker = "Source";
			BranchType = "UserChoice";
			Enabled = "!Source.IsMale && Target.IsMale";
			
			//Enabled = "Source.IsFemale && Target.IsMale";
			
			//adjust file names here
			@base/FormulaOptionProposeMarriage
			Next = array {
				
				// Actually ask for hand
				Topic {
					ShortLine = "$d.act.proposeMarriage.propose.toMale";
					Line = "$d.act.proposeMarriage.LONG.toMale";
					BranchType = "Pick";
					 //adjust file names here
					@base/FormulaOptionProposeMarriage
					TopicResult = ResultObject {
						Results = array {
							@base/TargetCourtingReceive,
							@base/SourceReverenceProposeMarriage,
						};
					};
					Next = array {
						//Success reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsSuccessProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								// Add more lines here for greater answer variety
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeSuccess_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceCelebrating,
											@base/TargetAcceptingProposeMarriage,
										};
									};
								},
							};
						},
						//Failure reply
						Topic {
							BranchType = "Pick";
							@base/CommonSettingsFailureProposeMarriage
							Next = array {
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_1.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_2.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
								Topic {
									Line = "$d.act.proposeMarriage.proposeFail_3.toFemale";
									TopicResult = ResultObject {
										Results = array {
											@base/SourceShamed,
											@base/TargetDecliningProposeMarriage,
										};
									};
								},
							};
						},
					};
				},
				
				// Get cold feet and abort
				Topic {
					ShortLine = "$d.act.proposeMarriage.cancel.bothGenders";
					Line = "$d.act.proposeMarriage.cancel.fullLine.bothGenders";
					AIChance = "0"; // AI should never pick this.
					TopicResult = ResultObject {
						Results = array {
							@base/SourceDeclining,
							@base/TargetListen,
						};
					};
				},
			};
		},
		
		*/
	};
};