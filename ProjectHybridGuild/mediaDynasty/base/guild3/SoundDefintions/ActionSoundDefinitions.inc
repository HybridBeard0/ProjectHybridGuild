// Place all action sound definitions in here please.
// 4000 - 4999

// CLICK
	
		G3SoundObject
		{
			SoundID = 4000;	// Break into building
			Category = 4; // ESoundSounds
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/break_into_building_action_1.wav"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/measures/break_into_building_action_2.wav"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/measures/break_into_building_action_3.wav"; };
			};
		};

		G3SoundObject
		{
			SoundID = 4001;	// Put out fire
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 2200;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/putoutfire_0.wav"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/measures/putoutfire_1.wav"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/measures/putoutfire_2.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 4002;	// Give coins
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 1900;
			Volume = 0.5;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/coins_dropped.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 4003;	// Open bottle
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 1900;
			Volume = 0.5;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/drinking_open_bottle.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 4004;	// Eating
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 1900;
			Volume = 0.5;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/eating_0.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 4005;	// Open book
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 1900;
			Volume = 0.5;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/open_book_0.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 4006;	// Drinking
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 1900;
			Volume = 0.5;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/measures/drinking_01.ogg"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/measures/drinking_02.ogg"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/measures/drinking_03.ogg"; };
				4 extends G3SoundDef { Path = "media/SFX/Sounds/measures/drinking_04.ogg"; };
			};
		};
		




