// Office scene dialogues.

// Highest ranking politician speaks introduction lines. Spoken to no one in particular.
Dialogue {
	Id = "d.scene.officeMeeting.Intro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Line = "$avr.Cutscene.OfficeMeeting.Intro"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 520 }; } };};
		},
	};
};

// Highest politician explains what the next proposal is about
Dialogue {
	Id = "d.scene.officeMeeting.ProposalIntro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "ProposalIndex <= 0";
			Line = "$avr.Cutscene.OfficeMeeting.Proposal"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 521 }; } };};
		},
		Topic { 
			Enabled = "ProposalIndex > 0";
			Line = "$avr.Cutscene.OfficeMeeting.Proposal"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 522 }; } };};
		},
	};
};

// A single politician adds his vote to a proposal
Dialogue {
	Id = "d.scene.officeMeeting.ProposalVote";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "CurrentPoliticianVotesYes";
			Line = "$avr.Cutscene.OfficeMeeting.InFavor"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 523 }; } };};
		},
		Topic { 
			Enabled = "!CurrentPoliticianVotesYes";
			Line = "$avr.Cutscene.OfficeMeeting.Against"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 524 }; } };};
		},
	};
};

// Highest politician says if the proposal was accepted or not
Dialogue {
	Id = "d.scene.officeMeeting.ProposalOutro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Enabled = "IsCurrentProposalAccepted";
			Line = "$avr.Cutscene.OfficeMeeting.ProposalAccepted"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 525 }; } };};
		},
		Topic { 
			Enabled = "!IsCurrentProposalAccepted";
			Line = "$avr.Cutscene.OfficeMeeting.ProposalRejected"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 525 }; } };};
		},
	};
};

// Highest politician declares the session closed
Dialogue {
	Id = "d.scene.officeMeeting.Outro";
	BranchType = "Sequence";
	FaceListener = false;
	FaceSpeaker = false;
	Topics = array {
		Topic { 
			Line = "$avr.Cutscene.General.Closed"; 
			TopicResult = ResultObject { Results = array { FunctionPlayRandomReaction { ApplyTo = "Source"; Animations = array { "sit_talk1" }; VoiceOvers = array { 459 }; } };};
		},
	};
};

