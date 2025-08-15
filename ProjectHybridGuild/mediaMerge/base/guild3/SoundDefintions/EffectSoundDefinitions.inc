// Place all effect sound definitions in here please.
// 3000 - 3999

// CLICK
	
		G3SoundObject
		{
			SoundID = 3000;	// Bomb explosion
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 4000;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/effects/bomb_explosion.wav"; };
			};
		};

		
		G3SoundObject
		{
			SoundID = 3001;	// building_burning
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 4000;
			Volume = 0.9;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/effects/building_burns_loop_0.wav"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/effects/building_burns_loop_1.wav"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/effects/building_burns_loop_2.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 3002;	// building crumbling
			Category = 4; // ESoundSounds
			FalloffStart = 5;
			FalloffEnd = 4000;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/effects/building_crumbling.wav"; };
			};
		};

		G3SoundObject
		{
			SoundID = 3003; //Thunder
			Category = 4; // ESoundSounds
			Volume = 1.3;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_0.wav"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_1.wav"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_2.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 3004;	// building_construction 
			Category = 4; // ESoundSounds
			Volume = 0.8;
			ShouldPreload = true;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/effects/building_under_construction.wav"; };
			};
		};
		
		G3SoundObject
		{
			SoundID = 3005; //Thunder (inside)
			Category = 4; // ESoundSounds
			Volume = 1.0;
			Sounds = array
			{
				1 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_0_inside.wav"; };
				2 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_1_inside.wav"; };
				3 extends G3SoundDef { Path = "media/SFX/Sounds/Ambient/lightning_thunder/lightning_thunder_2_inside.wav"; };
			};
		};
