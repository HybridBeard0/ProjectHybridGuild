// Instant wedding dialogue. Not a lot gets said in here.
Dialogue {
	Id = "d.act.instantWedding";
	BranchType = "Pick";
	Topics = array {

		// TODO
		// - Add dialogue tree for FEMALE asking a MALE to marry them.
		// - Tune animations.
		// - Tune the dialogue lines themselves, obviously.
		
		Topic {
			// male character says his vow
			Line = "$d.scene.instant.wedding.vows.toFemale";
			Speaker = "Source";
			Enabled = "Source.IsMale && !Target.IsMale";
			//Duration = "5.0";

			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 419 };
					},
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "listen1" };
						VoiceOvers = array {};
					}
				};
			};
			
			Next = array {

				Topic {
					// female character says her vow
					Speaker = "Switch";
					Line = "$d.scene.instant.wedding.vows.toMale";
					//Duration = "5.0";

					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "listen1" };
								VoiceOvers = array {};
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "talk1" };
								VoiceOvers = array { 420 };
							}
						};
					};
					
					ConversationResult = ResultObject {
						Results = array {
							FunctionMarryTarget {
								ApplyTo = "Source";
								Target = "Target";
							},
						};
					};
				},
			};
		},

		Topic {
			// female character says her vow
			Line = "$d.scene.instant.wedding.vows.toMale";
			Speaker = "Source";
			Enabled = "!Source.IsMale && Target.IsMale";
			//Duration = "5.0";
			
			TopicResult = ResultObject
			{
				Results = array
				{
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						Animations = array { "talk1" };
						VoiceOvers = array { 420 };
					},
					FunctionPlayRandomReaction
					{
						ApplyTo = "Target";
						Animations = array { "listen1" };
						VoiceOvers = array {};
					}
				};
			};
			
			Next = array {

				Topic {
					// male character says his vow
					Speaker = "Switch";
					Line = "$d.scene.instant.wedding.vows.toFemale";
					//Duration = "5.0";
					
					TopicResult = ResultObject
					{
						Results = array
						{
							FunctionPlayRandomReaction
							{
								ApplyTo = "Source";
								Animations = array { "listen1" };
								VoiceOvers = array {};
							},
							FunctionPlayRandomReaction
							{
								ApplyTo = "Target";
								Animations = array { "talk1" };
								VoiceOvers = array { 419 };
							}
						};
					};
					
					ConversationResult = ResultObject {
						Results = array {
							FunctionMarryTarget {
								ApplyTo = "Source";
								Target = "Target";
							},
						};
					};
				},
			};
		},		
	};
};
