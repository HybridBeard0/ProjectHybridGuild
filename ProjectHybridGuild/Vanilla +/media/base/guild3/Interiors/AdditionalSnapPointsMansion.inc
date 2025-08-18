// general
SnapPointDesc {
	Name = "FallbackIdleAnimations";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "";
		},
		G3SnapPointAnimation {
			Animation = "idle3";
			Context = "";
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "";
		},
	};
},
SnapPointDesc {
	Name = "door";
	Props = array {
		G3SnapPointProp {
			Prop = "interiorprop_door_mansions/interiorprop_door_mansions";
		},
	};
},
SnapPointDesc {
	Name = "workbench";
	Props = array {
		G3SnapPointProp {
			Prop = "InteriorProp_Workbench_Mansion/InteriorProp_Workbench_Mansion";
		},
	};
},
SnapPointDesc {
	Name = "enter";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "";
			Context = "Enter";
		},
	};
},
SnapPointDesc {
	Name = "exit";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "opendoor";
			Context = "Exit";
		},
	};
},
SnapPointDesc {
	Name = "stairs";
	Props = array {
		G3SnapPointProp {
			Prop = "interiorprop_stairs_mansions/interiorprop_stairs_mansions";
		},
	};
},
SnapPointDesc {
	Name = "bathtub";
	Props = array {
		G3SnapPointProp {
			Prop = "interiorprop_bath_mansion/interiorprop_bath_mansion";
		},
	};
},

// production
SnapPointDesc {
	Name = "production00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable1";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "HammerNail";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable2";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "HammerNail";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable5";
			Context = "MakeProduct";
		},
	};
},
SnapPointDesc {
	Name = "production01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable3";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable4";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable3";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable4";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "LookAtObject";
			Context = "MakeProduct";
		},
	};
},
SnapPointDesc {
	Name = "production02";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable3";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable4";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable3";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "Interior_WorkTable4";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "LookAtObject";
			Context = "MakeProduct";
		},
	};
},
SnapPointDesc {
	Name = "production03";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "SitFadeIn";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "SitBinding";
			Context = "MakeProduct";
			Repeat = 4;
		},
		G3SnapPointAnimation {
			Animation = "SitFadeOut";
			Context = "MakeProduct";
		},
	};
},
SnapPointDesc {
	Name = "production04";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "blacksmith1";
			Context = "MakeProduct";
			Prop = "hammer/hammer";
			Repeat = 4;
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "MakeProduct";
		},
		G3SnapPointAnimation {
			Animation = "LookAtObject";
			Context = "MakeProduct";
			Prop = "longsword/longsword";
		},
	};
},

// Family-Cooking
SnapPointDesc {
	Name = "kitchen00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "StirringMealFadeIn";
			Context = "Family-Cooking";
		},
		G3SnapPointAnimation {
			Animation = "StirringMealLoop";
			Context = "Family-Cooking";
			Repeat = 6;
		},
		G3SnapPointAnimation {
			Animation = "StirringMealFadeOut";
			Context = "Family-Cooking";
		},
	};
},
SnapPointDesc {
	Name = "kitchen01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "CuttingVegetableFadeIn";
			Context = "Family-Cooking";
		},
		G3SnapPointAnimation {
			Animation = "CuttingVegetableLoop";
			Context = "Family-Cooking";
			Repeat = 6;
		},
		G3SnapPointAnimation {
			Animation = "CuttingVegetableFadeOut";
			Context = "Family-Cooking";
		},
	};
},
SnapPointDesc {
	Name = "fireplace00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "CrouchFadeIn";
			Context = "Family-Cooking";
		},
		G3SnapPointAnimation {
			Animation = "PutWoodInFire";
			Context = "Family-Cooking";
		},
		G3SnapPointAnimation {
			Animation = "FanTheFlames";
			Context = "Family-Cooking";
			Repeat = 7;
		},
		G3SnapPointAnimation {
			Animation = "CrouchFadeOut";
			Context = "Family-Cooking";
		},
	};
},

// Family-CleanHouse
SnapPointDesc {
	Name = "clean00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep1";
			Context = "Family-CleanHouse";
		},
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep2";
			Context = "Family-CleanHouse";
		},
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep1";
			Context = "Family-CleanHouse";
		},
	};
},
SnapPointDesc {
	Name = "clean01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep1";
			Context = "Family-CleanHouse";
		},
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep2";
			Context = "Family-CleanHouse";
		},
		G3SnapPointAnimation {
			Animation = "Interior_IdleSweep1";
			Context = "Family-CleanHouse";
		},
	};
},

// Family-Bored
SnapPointDesc {
	Name = "stroll00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idle1";
			Context = "Family-Bored";
			Repeat = 4;
		},
		G3SnapPointAnimation {
			Animation = "idle1";
			Context = "Idle";
			Repeat = 4;
		},
	};
},
SnapPointDesc {
	Name = "stroll01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idle_readbook1";
			Context = "Family-Bored";
			Prop = "book2/book2";
			Repeat = 4;
		},
		G3SnapPointAnimation {
			Animation = "idle1";
			Context = "Idle";
			Repeat = 4;
		},
	};
},
SnapPointDesc {
	Name = "stroll02";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll03";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll04";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll05";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll06";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll07";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},
SnapPointDesc {
	Name = "stroll08";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Family-Bored";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle1";
			Context = "Idle";
		},
		G3SnapPointAnimation {
			Animation = "cool_idle2";
			Context = "Idle";
		},
	};
},

// Family-ChildPlay
SnapPointDesc {
	Name = "child00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "mime1";
			Context = "Family-ChildPlay";
			Repeat = 2;
		},
	};
},
SnapPointDesc {
	Name = "child01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "public_entertainment1";
			Context = "Family-ChildPlay";
		},
	};
},
SnapPointDesc {
	Name = "child02";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "kid_playfloor1";
			Context = "Family-ChildPlay";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "child03";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "public_entertainment1";
			Context = "Family-ChildPlay";
		},
	};
},
SnapPointDesc {
	Name = "child04";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "mime1";
			Context = "Family-ChildPlay";
			Repeat = 2;
		},
	};
},

// Family-PokeAround
SnapPointDesc {
	Name = "searching01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle2";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "Family-PokeAround";
		},
	};
},
SnapPointDesc {
	Name = "searching02";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle2";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
	};
},
SnapPointDesc {
	Name = "searching03";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle2";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
	};
},
SnapPointDesc {
	Name = "searching04";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle2";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
	};
},
SnapPointDesc {
	Name = "searching05";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle2";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "ManipulateMiddle";
			Context = "Family-PokeAround";
			Repeat = 2;
		},
	};
},

// Family-Studies
SnapPointDesc {
	Name = "studies00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idle_readbook1";
			Context = "Family-Studies";
			Prop = "book2/book2";
			Repeat = 4;
		},
	};
},
SnapPointDesc {
	Name = "studies01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idle_readbook1";
			Context = "Family-Studies";
			Prop = "book2/book2";
			Repeat = 4;
		},
	};
},

// Family-Feast
SnapPointDesc {
	Name = "FamilyFeast";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "town_crier1";
			Context = "FamilyFeastActor";
			Repeat = 6;
		},
	};
},
SnapPointDesc {
	Name = "feast00";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idleBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast01";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idleBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast02";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast03";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast04";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast05";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idleBanquet";
			Context = "Family-Feast";
			Repeat = 3;

		},
	};
},
SnapPointDesc {
	Name = "feast06";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "eatBanquet";
			Context = "Family-Feast";
		},
	};
},
SnapPointDesc {
	Name = "feast07";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "eatBanquet";
			Context = "Family-Feast";
		},
	};
},
SnapPointDesc {
	Name = "feast08";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
		},
	};
},
SnapPointDesc {
	Name = "feast09";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "idleBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast10";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},
SnapPointDesc {
	Name = "feast11";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "drinkBanquet";
			Context = "Family-Feast";
			Repeat = 3;
		},
	};
},

SnapPointDesc {
	Name = "training";
	Animations = array {
		//Strength
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
			Repeat = 3;
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react1";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "OH_YES_react2";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead";
			Context = "Training-Strength";
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "Training-Strength";
		},
		//Dexterity
		G3SnapPointAnimation {
			Animation = "dance_solo";
			Context = "Training-Dexterity";
			Repeat = 5;
		},
		G3SnapPointAnimation {
			Animation = "Curtsy";
			Context = "Training-Dexterity";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "Training-Dexterity";
		},
		//Intelligence
		G3SnapPointAnimation {
			Animation = "idle_readbook1";
			Context = "Training-Intelligence";
			Prop = "book2/book2";
			Repeat = 11;
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "Training-Intelligence";
		},
		//Perception
		G3SnapPointAnimation {
			Animation = "spy1";
			Context = "Training-Perception";
		},
		G3SnapPointAnimation {
			Animation = "Survey";
			Context = "Training-Perception";
		},
		G3SnapPointAnimation {
			Animation = "spy1";
			Context = "Training-Perception";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "Survey";
			Context = "Training-Perception";
		},
		G3SnapPointAnimation {
			Animation = "spy1";
			Context = "Training-Perception";
		},
		G3SnapPointAnimation {
			Animation = "Survey";
			Context = "Training-Perception";
		},
		G3SnapPointAnimation {
			Animation = "spy1";
			Context = "Training-Perception";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "Training-Perception";
		},
		//Charisma
		G3SnapPointAnimation {
			Animation = "read_love_letter1";
			Context = "Training-Charisma";
			Prop = "loveletter/loveletter";
			Repeat = 3;
		},
		G3SnapPointAnimation {
			Animation = "town_crier1";
			Context = "Training-Charisma";
			Repeat = 3;
		},
		G3SnapPointAnimation {
			Animation = "Curtsy";
			Context = "Training-Charisma";
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "Training-Charisma";
		},
	};
},

SnapPointDesc {
	Name = "chainhostage";
	Animations = array {
		G3SnapPointAnimation {
			Animation = "destroy1"; // 4.668
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardFadeIn"; // 1.006
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardLoop"; // 8.109
			Context = "ChainHostage";
			Repeat = 3;
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardFadeIn"; // 0.853
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "Threaten"; // 2.692
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardFadeIn"; // 1.006
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardLoop"; // 8.109
			Context = "ChainHostage";
			Repeat = 2;
		},
		G3SnapPointAnimation {
			Animation = "SearchCupboardFadeIn"; // 0.853
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead"; // 2.674
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "listen2"; // 4.015
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "refuse1";
			Context = "ChainHostage"; // 3.671
		},
		G3SnapPointAnimation {
			Animation = "destroy1"; // 4.668
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "WipeForehead"; // 2.674
			Context = "ChainHostage";
		},
		G3SnapPointAnimation {
			Animation = "idle2";
			Context = "ChainHostage";
		},
	};
},