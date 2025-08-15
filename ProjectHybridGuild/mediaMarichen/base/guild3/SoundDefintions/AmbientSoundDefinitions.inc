// BEWARE: These 'ambient' sounds do not use the 'AMBIENT' category in the code! They use the 'SOUND' category instead!
// Place all ambient sounds here
// 1000 - 1099

G3SoundObject
{
	SoundID = 1000;	// Horse Cart
	Category = 4; // ESoundSounds
	FalloffStart = 5;
	FalloffEnd = 2400;
	Volume = 0.7;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+0.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+3.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+2.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+1.ogg"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+2.ogg"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+0.ogg"; };
		8 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+0.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1001;	// CampFire
	Category = 3; // ESoundAmbient
	FalloffStart = 200;
	FalloffEnd = 2000;
	Volume = 0.3;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/CampFire/campfire_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/CampFire/campfire_02.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1002;	// Bird Ambiance
	Category = 3; // ESoundAmbient
	EditorName = "Bird Ambiance";
	Volume = 0.5;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+2.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+3.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+4.wav"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+5.wav"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+6.wav"; };
		8 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+7.wav"; };
		9 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_chirp+8.wav"; };
		10 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/songbird1.ogg"; };
		11 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/songbird2.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1003;
	Category = 3; // ESoundAmbient
	EditorName = "Cricket Ambiance";
	Volume = 0.2;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Cricket/cricket_chirp_loop+1.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Cricket/Grillen_loop+0.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1004;
	Category = 3; // ESoundAmbient
	EditorName = "Crow Ambiance";
	Volume = 0.8;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Crow/crow.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Crow/Crow2.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1005;
	Category = 3; // ESoundAmbient
	EditorName = "Flies Ambiance";
	Volume = 0.7;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Flies/flies_flying_around_loop+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Flies/flies_flying_around_loop+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Flies/flies_flying_around_loop+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1006;	// Frogs Ambiance
	Category = 3; // ESoundAmbient
	EditorName = "Frogs Ambiance";
	Volume = 0.8;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Frog/frogs_croak_loop+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Frog/frogs_croak_loop+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Frog/frogs_croak_loop+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1007;	// Town Ambiance
	Category = 3; // ESoundAmbient
	EditorName = "Town Ambiance";
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+3.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+4.ogg"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+5.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1008;	// Village Ambiance
	Category = 3; // ESoundAmbient
	EditorName = "Village Ambiance";
	Volume = 0.8;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+3.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1009;	// Winter Atmosphere
	Category = 3; // ESoundAmbient
	EditorName = "Winter Atmosphere"; // Interval = 5-15
	Volume = 0.85;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Winter/windy+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Winter/windy+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Winter/windy+2.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Winter/windy+3.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1010;
	Category = 3; // ESoundAmbient
	EditorName = "Wolf Howl"; // Interval = 12-25
	Volume = 0.6;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/wolf_howl+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/wolf_howl+1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1011;
	Category = 3; // ESoundAmbient
	EditorName = "Magpie call"; // Interval = 10-25
	Volume = 0.6;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Magpie/magpie_call+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Magpie/magpie_call+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Magpie/magpie_call+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1012;
	Category = 3; // ESoundAmbient
	EditorName = "Forest Nighttime"; // Interval = 8-18
	Volume = 0.5;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Owl/Owl.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Owl/EagleOwl.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_wingsflapping+2.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/WildPig+2.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/silence_2sec.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1013;
	Category = 3; // ESoundAmbient
	EditorName = "Cuckoo call"; // Interval = 22-48
	Volume = 0.5;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Cuckoo/Cuckoo1.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Cuckoo/Cuckoo2.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/Cuckoo/Cuckoo3.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1014;
	Category = 3; // ESoundAmbient
	EditorName = "Wild Pig";
	Volume = 0.5;
	Sounds = array {
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/WildPig+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/WildPig+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Forest/WildPig+2.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1015;
	Category = 3; // ESoundAmbient
	EditorName = "Bee Ambiance";
	Volume = 0.7;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bees/bee_00.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bees/bee_01.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1016;	// Interior fireplace
	Category = 3; // ESoundAmbient
	FalloffStart = 100;
	FalloffEnd = 1500;
//	Volume = 0.15;
	Volume = 0.5;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/CampFire/campfire_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/CampFire/campfire_02.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1020;
	Category = 3; // ESoundAmbient
	EditorName = "Town Marketplace";
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/marketbackground_loop+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/marketbackground_loop+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/marketbackground_loop+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/marketbackground_loop+3.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1025;
	Category = 3; // ESoundAmbient
	EditorName = "Town Nighttime";
	Volume = 0.75;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/Nighttime/Burglary+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/Nighttime/Cough+0.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/dog.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/nighttime/door_close+2.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/character/drop_to_ground.wav"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/silence_2sec.wav"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/Nighttime/snore+0.ogg"; };
		8 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/Nighttime/snore+1.ogg"; };
		9 extends G3SoundDef { Path = "media/SFX/Sounds/silence_2sec.wav"; };
		10 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Rat/Rat_00.wav"; };
		11 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Rat/Rat_01.wav"; };
		12 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Cat/cat_00.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1045;
	Category = 3; // ESoundAmbient
	EditorName = "Mountainbirds";
	Volume = 1.0;
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Mountain/Mountainbirds/mountainbird1.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Mountain/Mountainbirds/mountainbird2.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Mountain/Mountainbirds/mountainbird3.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Mountain/Mountainbirds/mountainbird4.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1050;
	Category = 3; // ESoundAmbient
	EditorName = "Seabirds";
	Volume = 0.75;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/Seabirds/Seabirds+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/Seabirds/Seabirds+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/Seabirds/Seabirds+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1055;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on river - light";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/river/RiverSlow+0.ogg"; };
	};
};
G3SoundObject
{
	SoundID = 1056;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on river - medium";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/river/RiverFast+0.ogg"; };
	};
};
G3SoundObject
{
	SoundID = 1057;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on river - strong";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_coast/WavesOnCoastLight+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_coast/WavesOnCoastLight+1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1060;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on sea - light";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaLight+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaLight+1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1061;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on sea - medium";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaMedium+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaMedium+1.wav"; };
	};
};
G3SoundObject
{
	SoundID = 1062;
	Category = 3; // ESoundAmbient
	EditorName = "Waves on sea - strong";
//	Volume = 0.6;
	Volume = 0.25;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaHeavy+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Sea/waves_sea/WavesOnSeaHeavy+1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1063;
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1064; // windmill
	Category = 3; // ESoundAmbient
	FalloffStart = 5;
	FalloffEnd = 2800;
	Volume = 0.2;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/WindmillCreaking_long.ogg"; };

	};
};

G3SoundObject
{
	SoundID = 1065; // windy when camera is far away from terrain
	Category = 3; // ESoundAmbient
	Volume = 0.1;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/wind/wind_blowing_heavily_1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1066; // Rain
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1067; // Snowstorm
	Category = 3; // ESoundAmbient
	Volume = 1.0;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/wind/wind_blowing_heavily_1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1068; // Snowing
	Category = 3; // ESoundAmbient
	Volume = 0.8;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/wind/wind_blowing_loop_1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1069; // Applause
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/applause_loop.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1070;	// sound for the gloriole particle effect
	Category = 4; // ESoundSounds
	FalloffStart = 5;
	FalloffEnd = 1800;
	Volume = 0.75;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Interface/LoadingGoods_I_01.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1071;
	Category = 3; // ESoundAmbient
	EditorName = "duck"; // Interval = 8-24
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/duck.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1072;
	Category = 3; // ESoundAmbient
	EditorName = "Bird Flying"; // Interval = 8-24
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_wingsflapping+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_wingsflapping+1.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_wingsflapping+2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1073;
	Category = 3; // ESoundAmbient
	EditorName = "Village Nighttime"; // Interval = 5-15
	Volume = 0.4;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Bird/birds_wingsflapping+0.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/dog.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/nighttime/door_close+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/character/drop_to_ground.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/silence_2sec.wav"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/silence_2sec.wav"; };
		7 extends G3SoundDef { Path = "media/SFX/Sounds/Animals/Cat/cat_00.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1074; // small boat static
	Category = 3; // ESoundAmbient
	CullingEnabled = true;
	FalloffStart = 50;
	FalloffEnd = 1600;
	Volume = 0.15;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/ship/boat_02b.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1075; // large boat static
	Category = 3; // ESoundAmbient
	CullingEnabled = true;
	FalloffStart = 100;
	FalloffEnd = 2000;
	Volume = 0.3;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/character/ship/boat_02b.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1076; // fountain
	Category = 3; // ESoundAmbient
	CullingEnabled = true;
	FalloffStart = 200;
	FalloffEnd = 900;
	Volume = 1.0;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Fountain+0.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1077;	// Hand Cart
	Category = 4; // ESoundSounds
	FalloffStart = 5;
	FalloffEnd = 2400;
	Volume = 0.7;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Cart/Horsecart+0.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1078; // Snowing (inside)
	Category = 3; // ESoundAmbient
	Volume = 0.8;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/wind/wind_blowing_loop_1_inside.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1079; // Rain (light)
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_2.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1080; // Rain (medium)
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_1.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1081; // Rain (heavy)
	Category = 3; // ESoundAmbient
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_0.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1082; // Rain (light, inside)
	Category = 3; // ESoundAmbient
	Volume = 0.5;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_2_inside.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1083; // Rain (medium, inside)
	Category = 3; // ESoundAmbient
	Volume = 0.5;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_1_inside.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1084; // Rain (heavy, inside)
	Category = 3; // ESoundAmbient
	Volume = 0.5;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/rain_loop/rain_loop_0_inside.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1085;	// Village Ambiance (interior)
	Category = 3; // ESoundAmbient
	EditorName = "Village Ambiance Interior";
	Volume = 0.15;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/villagebackground_loop+3.ogg"; };
	};
};

G3SoundObject
{
	SoundID = 1086;	// Town Ambiance (interior)
	Category = 3; // ESoundAmbient
	EditorName = "Town Ambiance Interior";
	Volume = 0.15;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+0.ogg"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+1.ogg"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+2.ogg"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+3.ogg"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+4.ogg"; };
		6 extends G3SoundDef { Path = "media/SFX/Sounds/Props/Atmosphere/Town/townbackground_loop+5.ogg"; };
	};
};