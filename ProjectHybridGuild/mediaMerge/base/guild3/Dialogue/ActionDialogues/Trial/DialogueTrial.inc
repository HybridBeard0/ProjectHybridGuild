// Trial scene dialogues.

// Head judge introduction lines. Spoken to no one in particular.
Dialogue {
	Id = "d.scene.trial.Intro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Line = "$Cutscenes.Trial.Order"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 94 }; } };};
		},
		Topic {
			Line = "$avr.Cutscene.Trial.Judge.Intro.Text";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 454 }; } };};
		},
		Topic { 
			Enabled = "Accuser.IsPresent && Accuser.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.LetAccuserSpeak.toMale"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 455 }; } };};
		},
		Topic { 
			Enabled = "Accuser.IsPresent && !Accuser.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.LetAccuserSpeak.toFemale"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 456 }; } };};
		},
		Topic { 
			Enabled = "!Accuser.IsPresent && Accused.IsMale"; // This intentionally checks the gender of the ACCUSED (not the accuser)
			Line = "$avr.Cutscene.Trial.Judge.AccuserNotPresent.MaleAccused"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 457 }; } };};
		},
		Topic { 
			Enabled = "!Accuser.IsPresent && !Accused.IsMale"; // This intentionally checks the gender of the ACCUSED (not the accuser)
			Line = "$avr.Cutscene.Trial.Judge.AccuserNotPresent.FemaleAccused"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 458 }; } };};
		},
		Topic { 
			Enabled = "!Accuser.IsPresent";
			Line = "$avr.Cutscene.General.Closed"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 459 }; } };};
		},
	};
};

// Accuser speaks: shows his evidence + proclaims his expectation for the verdict
Dialogue {
	Id = "d.scene.trial.AccuserShowEvidence";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Line = "$avr.Cutscene.Trial.Accuser.Intro.Text"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "talk1" }; VoiceOvers = array { 460 }; } };};
		},
		Topic { 
			Enabled = "Accuser.ExpectsMildVerdict";
			Line = "$avr.Cutscene.Trial.Accuser.Expectation.Mild"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "talk1" }; VoiceOvers = array { 461 }; } };};
		},
		Topic { 
			Enabled = "Accuser.ExpectsFairVerdict";
			Line = "$avr.Cutscene.Trial.Accuser.Expectation.Fair"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "talk1" }; VoiceOvers = array { 462 }; } };};
		},
		Topic { 
			Enabled = "Accuser.ExpectsHarshVerdict";
			Line = "$avr.Cutscene.Trial.Accuser.Expectation.Hard"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "talk1" }; VoiceOvers = array { 463 }; } };};
		},
	};
};

// Judge addresses the accused and asks if he/she pleads guilty or not
Dialogue {
	Id = "d.scene.trial.AccusedPlea";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.LetAccusedSpeak.toMale"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 464 }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.LetAccusedSpeak.toFemale"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 465 }; } };};
		},
		Topic { Line = "$avr.Cutscene.Trial.Judge.AskAccused";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 466 }; } };};
		},
		Topic { 
			Speaker = "Switch";
			Enabled = "Accused.PleadsGuilty";
			Line = "$avr.Cutscene.Trial.Player.Option.Guilty"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Target"; Animations = array { "Trial_defendant_pardon" }; VoiceOvers = array { 468 }; } };};
		},
		Topic { 
			Speaker = "Switch";
			Enabled = "!Accused.PleadsGuilty";
			Line = "$avr.Cutscene.Trial.Player.Option.NotGuilty"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Target"; Animations = array { "Trial_defendant_rhetoric" }; VoiceOvers = array { 467 }; } };};
		},
	};
};

// Head judge prepares giving the verdict of the individual judges.
Dialogue {
	Id = "d.scene.trial.VotingResultsIntro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic {
			Enabled = "Accused.IsPresent";
			Line = "$Cutscenes.Trial.Judgement"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 97 }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsPresent && Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.AccusedNotPresent.MaleAccused";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 469 }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsPresent && !Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.AccusedNotPresent.FemaleAccused"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 470 }; } };};
		},
	};
};

// One of the judges gives his/her vote
Dialogue {
	Id = "d.scene.trial.VotingResult";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "ActiveJudge.VotesGuilty";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.Guilty.Text"; // %verdictVote% can be used to inject the vote of the judge into the text.
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 471 }; } };};
		},
		Topic { 
			Enabled = "!ActiveJudge.VotesGuilty";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.NotGuilty"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 472 }; } };};
		},
	};
};

// Head judge presents the final judgment.
Dialogue {
	Id = "d.scene.trial.VotingResultsOutro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.Intro.toMale";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 473 }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.Intro.toFemale"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 474 }; } };};
		},
		Topic { 
			Enabled = "Accused.IsGuilty";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.Guilty.Voted"; // %verdict% can be used to inject the final verdict into the text.		
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VB" }; VoiceOvers = array { 471 }; }, FunctionPlayRandomReaction { ApplyTo = "Target"; Animations = array { "Trial_defendant_verdictB" }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsGuilty";
			Line = "$avr.Cutscene.Trial.Judge.Judgement.NotGuilty"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 472 }; }, FunctionPlayRandomReaction { ApplyTo = "Target"; Animations = array { "Trial_defendant_verdictG" }; } };};
		},
		Topic { Line = "$avr.Cutscene.General.Closed";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 459 }; } };};
		},
	};
};

// Head judge introduction lines. Spoken to no one in particular.
Dialogue {
	Id = "d.scene.trial.IntroNoAccuser";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Line = "$Cutscenes.Trial.Order"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 94 }; } };};
		},
		Topic { Line = "$avr.Cutscene.Trial.Judge.Intro";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 454 }; } };};		
		},
		Topic { 
			Enabled = "Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.AccuserNotPresent.MaleAccused"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 457 }; } };};
		},
		Topic { 
			Enabled = "!Accused.IsMale";
			Line = "$avr.Cutscene.Trial.Judge.AccuserNotPresent.FemaleAccused"; 
			Line = "$avr.Cutscene.Trial.Judge.AccuserNotPresent.FemaleAccused"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 458 }; } };};
		},
		Topic { Line = "$avr.Cutscene.General.Closed";
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "Trial_02_VG" }; VoiceOvers = array { 459 }; } };};
		},
	};
};
