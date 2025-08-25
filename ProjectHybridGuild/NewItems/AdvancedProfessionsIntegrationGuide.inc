// Advanced Professions Integration Guide
// Instructions for integrating all tier 8 professions into The Guild 3

// === SKILL TREE INTEGRATION ===
// Add these skill definitions to your G3SkillsDefault.oc file:

// 1. ADD TO HANDICRAFTMETAL LEVEL 3:
/*
In HandicraftMetal skill level 3 results, add:
UnlockEffect
{
	Names = array {"MasterCrafter"}; // Enable Master Crafter progression
}
*/

// 2. ADD TO OCCULTISM LEVEL 3:
/*
In Occultism skill level 3 results, add:
UnlockEffect
{
	Names = array {"GrandAlchemist"}; // Enable Grand Alchemist progression
}
*/

// 3. ADD TO HANDICRAFTSTONE LEVEL 3:
/*
In HandicraftStone skill level 3 results, add:
UnlockEffect
{
	Names = array {"MasterArchitect"}; // Enable Master Architect progression
}
*/

// 4. ADD TO TAILOR LEVEL 3:
/*
In Tailor skill level 3 results, add:
UnlockEffect
{
	Names = array {"RoyalTailor"}; // Enable Royal Tailor progression
}
*/

// 5. ADD TO SCHOLARLY LEVEL 3:
/*
In Scholarly skill level 3 results, add:
UnlockEffect
{
	Names = array {"GrandmasterScholar"}; // Enable Grandmaster Scholar progression
}
*/

// === CRAFTING CHAIN DEPENDENCIES ===

// TIER 8 PROGRESSION ORDER (Recommended):
// 1. Grandmaster Scholar (Level 0) ? Knowledge Crystal
// 2. Master Architect (Level 0) ? Precision Tools (requires Knowledge Crystal)
// 3. Grand Alchemist (Level 0) ? Philosopher's Stone (requires Precision Tools)
// 4. Master Crafter (Level 0) ? Steel Ingot
// 5. Higher levels unlock ultimate equipment requiring multiple profession components

// === ECONOMIC BALANCE ===

// INVESTMENT REQUIREMENTS:
// Total prestige needed for all professions: ~1,000,000 prestige
// Total building costs: ~150,000 money
// Social level requirement: 8-11 (very late game)

// MATERIAL FLOW:
// Raw Materials ? Knowledge ? Tools ? Advanced Materials ? Ultimate Equipment

// INTERDEPENDENCY EXAMPLES:
// - Master's Regalia requires: Imperial Silk + Knowledge Crystal + Precision Tools + Philosopher's Stone
// - Royal weapons require: Steel Ingot + various profession components
// - Crown of Authority requires: Royal Gemstone + Steel Ingot + Imperial Silk

// === GAME BALANCE CONSIDERATIONS ===

// MULTIPLAYER BENEFITS:
// - No single player can access all tier 8 content alone
// - Encourages trade and cooperation between specialized players
// - Creates valuable niches for different player roles

// SINGLE PLAYER:
// - Provides extremely long-term progression goals
// - Requires strategic planning and resource management
// - Multiple playthroughs needed to explore all profession paths

// === INSTALLATION INSTRUCTIONS ===

// 1. Include AdvancedProfessionsMod.inc in your main mod file
// 2. Modify skill tree as indicated above
// 3. Ensure proper loading order (after base game files)
// 4. Test progression chains thoroughly

// === TROUBLESHOOTING ===

// Common Issues:
// - Skills not appearing: Check skill tree modifications
// - Items not craftable: Verify building unlock chains
// - Missing components: Ensure all professions are unlocked in correct order

// === EXPANSION POSSIBILITIES ===

// Future additions could include:
// - Tier 9 "Legendary" professions requiring multiple tier 8 completions
// - Cross-profession recipes for unique items
// - Guild-based mega-projects requiring multiple profession cooperation
// - Prestige-based exclusive items for the ultimate late-game players

// This system is designed to provide hundreds of hours of additional
// progression content while maintaining game balance and encouraging
// diverse player interaction patterns.