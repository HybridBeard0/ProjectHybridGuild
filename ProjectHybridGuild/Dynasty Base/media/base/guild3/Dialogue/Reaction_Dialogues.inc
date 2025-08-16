//Topic
//{
//	Enabled = "subject.IsMale";
//	Speaker = "Source";
//	Line = "$int.Insult.Success.Friendly.0";
//},
//FunctionPlayRandomReaction
//{
//	ApplyTo = "Source";
//	Animations = array { "Threaten" };
//	VoiceOvers = array {};
//}


Dialogue
{
	Id = "d.RomanceFailHarshReaction";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Line = "$int.Insult.Success.Friendly.0";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 310 };
					};
				};
			};
		},
		Topic
		{
			Line = "$int.Insult.Success.Friendly.3";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 311 };
					};
				};
			};
		},
		Topic
		{
			Line = "$int.Insult.Success.Normal.2";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 312 };
					};
				};
			};
		},
		Topic
		{
			Line = "$int.Insult.Success.Normal.3";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 313 };
					};
				};
			};
		},
	};
},

Dialogue
{
	Id = "d.WaveHelloWaveBackCritical";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Line = "$cf.NPC.ToCitizen.Normal.1";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 314 };
					};
				};
			};
		},
		Topic
		{
			Line = "$cf.NPC.ToCitizen.Normal.2";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 315 };
					};
				};
			};
		},
		Topic
		{
			Line = "$cf.NPC.ToCommoner.Friendly.0";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 316 };
					};
				};
			};
		},
		Topic
		{
			Line = "$cf.NPC.ToCommoner.Friendly.1";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 317 };
					};
				};
			};
		},
	};
},

Dialogue
{
	Id = "d.WaveHelloScoldingBack";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Line = "$cf.NPC.ToCitizen.Hatred.3";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 318 };
					};
				};
			};
		},
		Topic
		{
			Line = "$cf.NPC.ToCommoner.CityGuard.1";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 319 };
					};
				};
			};
		},
		Topic
		{
			Line = "$cf.NPC.ToCommoner.Hatred.3";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 320 };
					};
				};
			};
		},
	};
},

Dialogue
{
	Id = "d.InnDiceGameWon";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Line = "$Cutscenes.DiceGame.Money";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 340 };
					};
				};
			};
		},
	};
},
Dialogue
{
	Id = "d.InnDiceGameLost";
	BranchType = "Pick";
	Topics = array
	{
		Topic
		{
			Line = "$Cutscenes.DiceGame.Blasted";
			TopicResult = ResultObject {
				Results = array {
					FunctionPlayRandomReaction
					{
						ApplyTo = "Source";
						VoiceOvers = array { 341 };
					};
				};
			};
		},
	};
},
