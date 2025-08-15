// Place all character related sounds here
// 1200 - 1299

G3SoundObject
{
	SoundID = 1200;
	Category = 4; // ESoundSounds
	EditorName = "drop to ground";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2000;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/drop_to_ground.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1201;
	Category = 4; // ESoundSounds
	EditorName = "footstep normal";
	FalloffStart = 5;
	FalloffEnd = 2000;
	Volume = 0.1;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/normal_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/normal_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/normal_03.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/normal_04.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1202;
	Category = 4; // ESoundSounds
	EditorName = "footstep armor";
	FalloffStart = 5;
	FalloffEnd = 2400;
	Volume = 0.15;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_03.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_04.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_05.wav"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_06.wav"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_07.wav"; };
		8 extends G3SoundDef { Path = "media/SFX/Sounds/character/footstep/footstep_armor_08.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1203; // snoring
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 1800;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/snore_0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/snore_1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1204; // collecting herbs
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2000;
	Volume = 0.6;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1205; // generic work sounds
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2000;
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound01.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound02.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound03.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound04.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound05.ogg"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound06.ogg"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound07.ogg"; };
		8 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound08.ogg"; };		
	};
};

G3SoundObject
{
	SoundID = 1206; // Horse galopping
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2400;
	Volume = 0.02;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/horse/galop_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/horse/galop_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/horse/galop_03.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1207; // small boat
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 200;
	FalloffEnd = 2400;
	Volume = 0.75;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/ship/boat_01.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1208; // large boat
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 300;
	FalloffEnd = 2400;
	Volume = 0.75;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/ship/boat_02.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1209; // slurping
	Category = 4; // ESoundSounds
	FalloffStart = 5;
	FalloffEnd = 2000;
	Volume = 0.15;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/slurping_0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/slurping_1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/slurping_2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/character/slurping_3.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/character/slurping_4.ogg"; };
	};
};

// Sleep
G3SoundObject
{
	SoundID = 1210; // sleeping sounds
	Category = 4; // ESoundVoices
	Volume = 0.1;
	FalloffStart = 5;
	FalloffEnd = 1000;
	CullingEnabled = true;
	ShouldPreload = true;
	Frequency = 0.15;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/snore_0.wav"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/snore_1.wav"; Subtitle = "";};
	}; 
};

// ProduceOffspring
G3SoundObject
{
	SoundID = 1211; // produce offspring sounds
	Category = 4; // ESoundVoices
	Volume = 0.4;
	FalloffStart = 5;
	FalloffEnd = 1200;
	Frequency = 0.33;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_0.wav"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_1.wav"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/herbs_2.wav"; Subtitle = "";};
	}; 
};

// footstep on ladder
G3SoundObject
{
	SoundID = 1212;
	Category = 4; // ESoundVoices
//	Volume = 0.25;
	Volume = 0.4;
	FalloffStart = 5;
	FalloffEnd = 1000;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media\SFX\Sounds\character\footstep\footstep_wood_00.wav"; Subtitle = "";};
	}; 
};

// footstep on stairs
G3SoundObject
{
	SoundID = 1213;
	Category = 4; // ESoundVoices
//	Volume = 0.25;
	Volume = 0.5;
	FalloffStart = 5;
	FalloffEnd = 1000;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media\SFX\Sounds\character\footstep\footstep_wood_02.wav"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media\SFX\Sounds\character\footstep\footstep_wood_03.wav"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media\SFX\Sounds\character\footstep\footstep_wood_04.wav"; Subtitle = "";};
		4 extends G3SoundDef { Path = "media\SFX\Sounds\character\footstep\footstep_wood_05.wav"; Subtitle = "";};
	}; 
};

// praying in church female
G3SoundObject
{
	SoundID = 1214;
	Category = 4; // ESoundVoices
	Volume = 0.7;
	FalloffStart = 5;
	FalloffEnd = 750;
	Frequency = 0.4;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_female-0.ogg"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_female-1.ogg"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_female-2.ogg"; Subtitle = "";};
	}; 
};

// praying in church male
G3SoundObject
{
	SoundID = 1215;
	Category = 4; // ESoundVoices
	Volume = 0.7;
	FalloffStart = 5;
	FalloffEnd = 750;
	Frequency = 0.4;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_male-0.ogg"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_male-1.ogg"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/praying_male-2.ogg"; Subtitle = "";};
	}; 
};

// priest praying in church (male)
G3SoundObject
{
	SoundID = 1216;
	Category = 4; // ESoundVoices
	Volume = 1.0;
	FalloffStart = 100;
	FalloffEnd = 1500;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_church-0.ogg"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_church-1.ogg"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_church-2.ogg"; Subtitle = "";};
	}; 
};

// priest praying in citychurch (male)
G3SoundObject
{
	SoundID = 1217;
	Category = 4; // ESoundVoices
	Volume = 1.3;
	FalloffStart = 250;
	FalloffEnd = 1800;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_citychurch-0.ogg"; Subtitle = "";};
		2 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_citychurch-1.ogg"; Subtitle = "";};
		3 extends G3SoundDef { Path = "media/SFX/Sounds/character/priest_praying_citychurch-2.ogg"; Subtitle = "";};
	}; 
};

//TrainRat
G3SoundObject
{
	SoundID = 1218; // collecting herbs
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2000;
	Volume = 0.6;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Rat/Rat_00.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Rat/Rat_01.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound02.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Work/GenericWorksound04.ogg"; };
	};
};