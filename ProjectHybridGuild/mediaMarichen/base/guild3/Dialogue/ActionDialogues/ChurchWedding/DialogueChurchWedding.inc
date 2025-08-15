// Church Wedding dialogues. Contains 4 separate dialogue trees.

// TODO
// - Tune animations.
// - Tune the dialogue lines themselves.

// Priest introduction lines. Spoken to no one in particular.
Dialogue {
	Id = "d.scene.wedding.PriestIntro";
	BranchType = "Sequence";
	Topics = array {
		Topic { Line = "$d.scene.wedding.Priest.Intro"; TopicResult = ResultObject { Results = array { @base/SourceTalk, FunctionPlayRandomReaction { ApplyTo = "Source"; VoiceOvers = array { 344 }; } };}; },
	};
};

// Groom says his I Do. Speaker is still priest, listener is groom.
Dialogue {
	Id = "d.scene.wedding.GroomQuestion";
	BranchType = "Sequence";
	Topics = array {
		Topic { Line = "$d.scene.wedding.Priest.toHusband"; TopicResult = ResultObject { Results = array { @base/SourceTalk, FunctionPlayRandomReaction { ApplyTo = "Source"; VoiceOvers = array { 345 }; } };}; },
		Topic { Speaker = "Switch"; Line = "$d.scene.wedding.Player.Answer"; TopicResult = ResultObject { Results = array { @base/TargetTalk, FunctionPlayRandomReaction { ApplyTo = "Target"; VoiceOvers = array { 346 }; } };}; },
	};
};

// Bride says her I Do. Speaker is still priest, listener is bride.
Dialogue {
	Id = "d.scene.wedding.BrideQuestion";
	BranchType = "Sequence";
	Topics = array {
		Topic { Line = "$d.scene.wedding.Priest.toWife"; TopicResult = ResultObject { Results = array { @base/SourceTalk, FunctionPlayRandomReaction { ApplyTo = "Source"; VoiceOvers = array { 347 }; } };}; },
		Topic { Speaker = "Switch"; Line = "$d.scene.wedding.Player.Answer"; TopicResult = ResultObject { Results = array { @base/TargetTalk, FunctionPlayRandomReaction { ApplyTo = "Target"; VoiceOvers = array { 346 }; } };}; },
	};
};

// Quick interlude by priest, talking to general audience.
Dialogue {
	Id = "d.scene.wedding.PriestInterlude";
	BranchType = "Sequence";
	Topics = array {
		Topic { Line = "$d.act.TalkToPriest.PositiveFeedback"; TopicResult = ResultObject { Results = array { @base/SourceTalk, FunctionPlayRandomReaction { ApplyTo = "Source"; VoiceOvers = array { 349 }; } };}; },
		//Topic { Line = "$d.scene.wedding.Priest.Interlude"; TopicResult = ResultObject { Results = array { @base/SourceTalk, };}; },
	};
};

// Ring exchanges, Groom talking to Bride.
Dialogue {
	Id = "d.scene.wedding.RingExchange";
	BranchType = "Sequence";
	Topics = array {
		//Topic { Line = "$d.scene.wedding.Husband.RingExchange"; TopicResult = ResultObject { Results = array { @base/SourceTalk, @base/TargetListen, };}; },
		Topic {
			Duration = "5.0";
			TopicResult = ResultObject { Results = array { @base/SourceReverence, };};
		},
		//Topic { Speaker = "Switch"; Line = "$d.scene.wedding.Wife.RingExchange"; TopicResult = ResultObject { Results = array { @base/TargetTalk, @base/SourceListen, };}; },
		Topic {
			Duration = "5.0";
			TopicResult = ResultObject { Results = array { @base/TargetReverence, };};
		},
	};
};

// Priest outro, spoken to general audience.
Dialogue {
	Id = "d.scene.wedding.PriestOutro";
	BranchType = "Sequence";
	Topics = array {
		Topic { Line = "$d.scene.wedding.Priest.Finale"; TopicResult = ResultObject { Results = array { @base/SourceTalk, FunctionPlayRandomReaction { ApplyTo = "Source"; VoiceOvers = array { 348 }; } };}; },
	};
};

// Celebration dialogue. Not spoken to anyone, just used to animate the couple.
Dialogue {
	Id = "d.scene.wedding.Celebrate";
	BranchType = "Sequence";
	Topics = array {
		Topic { 
			Duration = "5.0";
			TopicResult = ResultObject { 
				Results = array { 
					FunctionPlayRandomReaction {
						ApplyTo = "Source";
						Animations = array { "kiss_onlips" };
					},
					FunctionPlayRandomReaction {
						ApplyTo = "Target";
						Animations = array { "kiss_onlips" };
					},
					FunctionApplyResults
					{
						ResultObjectIds = array{ "ChurchWeddingAftermath" };
					},
				};
			};
		},
	};
};
