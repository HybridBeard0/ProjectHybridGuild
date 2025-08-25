// Elite Rogue Professions Integration Guide
// Instructions for integrating high-risk tier 8 rogue professions into The Guild 3

// === SKILL TREE INTEGRATION ===
// Add these skill unlocks to existing rogue profession maximums:

// 1. ADD TO FIGHTING LEVEL 3:
/*
In Fighting skill level 3 results, add:
UnlockEffect
{
	Names = array {"WarMercenary"}; // Enable War Mercenary progression
}
*/

// 2. ADD TO GLEEMAN LEVEL 2:
/*
In Gleeman skill level 2 results, add:
UnlockEffect
{
	Names = array {"RoyalBard"}; // Enable Royal Bard progression
}
*/

// 3. ADD TO SLEIGHTOFHAND LEVEL 3:
/*
In SleightOfHand skill level 3 results, add:
UnlockEffect
{
	Names = array {"MasterThief"}; // Enable Master Thief progression
}
*/

// 4. ADD TO SMUGGLING LEVEL 2:
/*
In Smuggling skill level 2 results, add:
UnlockEffect
{
	Names = array {"SmugglingBaron"}; // Enable Smuggling Baron progression
}
*/

// === HIGH-RISK MECHANICS IMPLEMENTATION ===

// WAR MERCENARY DEATH SYSTEM:
// Implement survival calculation in ExecuteWarContract action:
/*
float baseSurvivalChance = 0.40f; // 40% base chance
float equipmentBonus = 0.0f;

// Check equipped items for survival bonuses
if (character.HasEquipped("RoyalPlatemail") || character.HasEquipped("VeteransArmor"))
    equipmentBonus += 0.30f; // 30% bonus for best armor

if (character.HasEquipped("RoyalLongsword") || character.HasEquipped("RoyalMace"))
    equipmentBonus += 0.15f; // 15% per royal weapon

if (character.HasEquipped("MercenaryBadge"))
    equipmentBonus += 0.15f; // 15% from badge

float finalSurvivalChance = Math.Min(0.95f, baseSurvivalChance + equipmentBonus);

if (Random.Float() < finalSurvivalChance) {
    // SUCCESS: Award 50,000+ money, massive prestige
    RewardPlayer(50000 + Random.Int(25000), 10000); // 50-75k money, 10k prestige
} else {
    // FAILURE: Character dies permanently
    KillCharacter(character);
}
*/

// ROYAL BARD PERFORMANCE SYSTEM:
// Implement performance success in PerformRoyalShow action:
/*
float baseSuccessChance = 0.30f;
float charismaBonus = character.Charisma * 0.02f; // 2% per charisma point
float equipmentBonus = 0.0f;

if (character.HasEquipped("RoyalInstrument"))
    equipmentBonus += 0.25f;

if (character.HasEquipped("EmperorsRobes") || character.HasEquipped("NobleClothes"))
    equipmentBonus += 0.15f;

float finalSuccessChance = Math.Min(0.90f, baseSuccessChance + charismaBonus + equipmentBonus);

if (Random.Float() < finalSuccessChance) {
    // SUCCESS: Royal patronage, prestige, exclusive items
    RewardPlayer(15000, 5000); // Money and prestige
    GrantItem("CourtPatronsFavor");
} else {
    // FAILURE: Reputation loss
    character.ReputationBonus -= 0.05f;
}
*/

// MASTER THIEF HEIST SYSTEM:
// Implement heist success in ExecuteBankHeist action:
/*
float baseSuccessChance = 0.25f; // Very risky
float stealthBonus = character.Stealth * 0.03f;
float dexterityBonus = character.Dexterity * 0.02f;
float equipmentBonus = 0.0f;

if (character.HasEquipped("MasterLockpicks"))
    equipmentBonus += 0.25f;

if (character.HasEquipped("ShadowCloak"))
    equipmentBonus += 0.20f;

float finalSuccessChance = Math.Min(0.85f, baseSuccessChance + stealthBonus + dexterityBonus + equipmentBonus);

if (Random.Float() < finalSuccessChance) {
    // SUCCESS: Enormous money reward, stolen treasures
    RewardPlayer(100000 + Random.Int(50000), 8000); // 100-150k money
    GrantItem("StolenRoyalTreasures");
} else {
    // FAILURE: Prison time, equipment confiscation
    ImprisonCharacter(character, 30); // 30 days prison
    ConfiscateRandomEquipment(character);
}
*/

// SMUGGLING BARON INTERCEPTION SYSTEM:
// Implement smuggling success in ExecuteInternationalSmuggling action:
/*
float baseSuccessChance = 0.60f; // Moderate risk
float distanceMultiplier = smugglingDistance * 0.1f; // Longer = more risk but more reward
float borderSecurity = GetRegionSecurityLevel(); // Dynamic difficulty
float equipmentBonus = 0.0f;

if (character.HasEquipped("SmugglersSeaI"))
    equipmentBonus += 0.20f;

if (character.HasEquipped("CartBig"))
    equipmentBonus += 0.10f;

float finalSuccessChance = Math.Max(0.20f, baseSuccessChance + equipmentBonus - borderSecurity);
float profitMultiplier = 1.0f + distanceMultiplier; // Up to 500% profit

if (Random.Float() < finalSuccessChance) {
    // SUCCESS: Distance-based profit
    int baseProfit = 25000;
    int finalProfit = (int)(baseProfit * profitMultiplier);
    RewardPlayer(finalProfit, 3000);
    GrantItem("ForbiddenLuxuries");
} else {
    // FAILURE: Goods confiscated, fine
    ConfiscateGoods(character);
    DeductMoney(character, 10000);
}
*/

// === BALANCE CONSIDERATIONS ===

// RISK vs REWARD SCALING:
// - War Mercenary: Highest risk (death), highest single reward (75k money)
// - Master Thief: High risk (prison), very high reward (150k money)
// - Smuggling Baron: Medium risk (confiscation), high sustained reward
// - Royal Bard: Low risk (reputation), medium reward (prestige/access)

// EQUIPMENT DEPENDENCIES:
// All professions heavily benefit from tier 8 gear from other professions:
// - Master Crafter weapons/armor improve success rates significantly
// - Royal Tailor clothing provides prestige and protection bonuses
// - Grand Alchemist potions could provide temporary bonuses
// - Master Architect plans are required for complex operations

// PRESTIGE GATES:
// Total prestige for all elite rogue professions: ~1,300,000
// Ensures these are truly end-game content requiring massive investment

// === MULTIPLAYER BALANCING ===

// COOPERATION INCENTIVES:
// - No single player can easily access all tier 8 items alone
// - Equipment from other professions significantly improves success rates
// - Creates natural trading relationships and dependencies

// COMPETITION ELEMENTS:
// - Limited high-value contracts (only one player can execute a specific war contract)
// - Stolen goods create pvp tension (other players may recognize stolen items)
// - Underground operations compete for territory and resources

// === INSTALLATION STEPS ===

// 1. Include EliteRogueProfessionsMod.inc in your main mod file
// 2. Modify rogue skill trees as indicated above
// 3. Implement risk/reward mechanics in action handlers
// 4. Test all profession chains thoroughly
// 5. Balance prestige costs and success rates based on playtesting

// === TROUBLESHOOTING ===

// Common Issues:
// - Skills not appearing: Check skill tree modifications for existing rogue skills
// - Risk mechanics not working: Ensure action handlers implement survival calculations
// - Balancing problems: Adjust success rates and equipment bonuses as needed
// - Integration conflicts: Verify loading order and dependencies

// This system provides the ultimate high-stakes gameplay for experienced
// players while maintaining meaningful consequences for failure!