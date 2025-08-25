// Integration instructions for Master Crafter profession
// Add this to your existing G3SkillsDefault.oc file in the HandicraftMetal skill section

// In the HandicraftMetal skill level 3 results, modify to include the Master Crafter unlock:
/*
3 = G3SkillLevel 
{
	NeededSocialLevel = 10;
	NeededCurrency = 15000;

	Results = array
	{
		UnlockEffect
		{
			Names = array {"Pistol", "Longsword", "Mace", "Platemail"};
		},
		UnlockEffect
		{
			Names = array {"MasterCrafter"}; // ADD THIS LINE
		}
	};
};
*/

// Alternative: Create as a separate branch from HandicraftMetal
// Add this skill definition to your skills map:

"MasterCrafter" = G3Skill
{
	RequiredSkillName = "HandicraftMetal";
	RequiredSkillLevel = 3;
	
	DisplayName = "$MasterCrafter";
	Description = "$MasterCrafterDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 8;
			CurrencyType = "Prestige";
			NeededCurrency = 25000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalForge" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "SteelIngot" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 35000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalLongsword", "RoyalMace", "RoyalShield" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 50000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalPlatemail", "RoyalRapier", "RoyalCrossbow" };
				}
			};
		};
	};
};

// IMPORTANT: Building Integration
// The RoyalForgeBuilding.inc file will add a new building type.
// Make sure to include this mod AFTER the base building definitions are loaded.

// Item Categories
// Add "MasterCrafting" to your production categories list if using custom category systems.

// Game Balance Notes:
// - Steel Ingot requires significant investment: 3 Iron + 2 Gold + 3 Charcoal
// - Royal equipment provides meaningful upgrades over tier 6 equivalents
// - High prestige requirements (25k, 35k, 50k) maintain exclusivity
// - Social level 8+ requirement ensures late-game access only