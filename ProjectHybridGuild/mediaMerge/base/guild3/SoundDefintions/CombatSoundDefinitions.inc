// Place all combat related sounds here
// 1100 - 1199
G3SoundObject
{
	SoundID = 1100;
	Category = 4; // ESoundSounds
	EditorName = "Gunshot";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 3500;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/gunshot_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/gunshot_02.wav"; };
	};
};
G3SoundObject
{
	SoundID = 1101;
	Category = 4; // ESoundSounds
	EditorName = "Crossbow shot";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2000;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/crossbow_shot_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/crossbow_shot_02.wav"; };
	};
};
G3SoundObject
{
	SoundID = 1102;
	Category = 4; // ESoundSounds
	EditorName = "Get Hurt";
	CullingEnabled = true;
	ShouldPreload = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/hurt_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/hurt_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/combat/hurt_03.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/combat/hurt_04.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/combat/hurt_05.wav"; };
	};
};
G3SoundObject
{
	SoundID = 1103;
	Category = 4; // ESoundSounds
	EditorName = "Fist Strike";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2100;
	Volume = 0.5;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_fist_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_fist_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_fist_03.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_fist_04.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_fist_05.wav"; };
	};
};
G3SoundObject
{
	SoundID = 1104;
	Category = 4; // ESoundSounds
	EditorName = "Metal Weapon Strike";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 3000;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_weapon_metal_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_weapon_metal_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/combat/strike_weapon_metal_03.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1105; // Played when taking out a sword
	Category = 4; // ESoundSounds
	EditorName = "Metal Weapon Strike";
	CullingEnabled = true;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_draw_s_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_draw_s_02.wav"; };
		3 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_draw_s_03.wav"; };
		4 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_draw_s_04.wav"; };
		5 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_draw_s_05.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1106; // Played when sweeping with a sword
	Category = 4; // ESoundSounds
	EditorName = "Metal Weapon Strike";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2800;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_sweep_s_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_sweep_s_02.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1107; // Played when blocking with a sword
	Category = 4; // ESoundSounds
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 3000;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_block_01.wav"; };
		2 extends G3SoundDef { Path = "media/SFX/Sounds/combat/sword_block_02.wav"; };
	};
};

G3SoundObject
{
	SoundID = 1108; // guard_SwingSword
	Category = 4; // ESoundSounds
	EditorName = "guard_SwingSword Strike";
	CullingEnabled = true;
	FalloffStart = 5;
	FalloffEnd = 2800;
	Sounds = array
	{
		1 extends G3SoundDef { Path = "media/SFX/Sounds/combat/guard_SwingSword_01.wav"; };
	};
};