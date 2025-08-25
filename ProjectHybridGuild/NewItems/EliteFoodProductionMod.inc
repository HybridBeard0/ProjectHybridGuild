// Elite Food Production Mod - Master include file for all tier 8 food professions
// This file includes all elite food production professions with complex interdependent chains

// === ELITE FOOD PROFESSION MODS ===
// Include all four elite food professions
#include "GrandVintnerMod.inc"
#include "MasterRancherMod.inc"
#include "CulinaryMasterMod.inc"
#include "MasterButcherMod.inc"

// === SKILLS INTEGRATION ===
// Include all skill definitions
#include "EliteFoodProductionSkills.inc"

// === LOCALIZATION ===
// Include comprehensive localization
#include "EliteFoodProductionLocalization.inc"

// === COMPLEX FOOD CHAIN NOTES ===
// This mod creates sophisticated food production systems:
//
// WINE PRODUCTION CHAIN:
// 1. Grapes (Royal Vineyard) + Precision Tools + Knowledge Crystal
// 2. Wine Barrel (enhanced aging vessel) + Steel Ingot + Precision Tools
// 3. Vintage Wine (Grapes + Wine Barrel + Master Tome) - 800 build time
// 4. Royal Wine (Vintage Wine + Royal Gemstone + Philosopher's Stone) - 1500 build time
//
// ROYAL LIVESTOCK CHAIN:
// 1. Gourmet Feed (Wheat + Grapes + Honey) - premium nutrition
// 2. Prize Cattle (Cattle + Gourmet Feed + Master Tome) - 1200 build time
// 3. Royal Horse (Horse + Vintage Wine + Knowledge Crystal + Imperial Silk) - 2000 build time
// 4. Thoroughbred Warhorse (Royal Horse + Veteran's Armor + Philosopher's Stone) - 2500 build time
//
// GOURMET CUISINE CHAIN:
// 1. Exotic Spices (Black Pepper + Exotic Contraband + Knowledge Crystal)
// 2. Truffle Mushrooms (Royal Horse + Master Tome) - requires hunting
// 3. Gourmet Meal (Premium Beef + Vintage Wine + Exotic Spices + Truffle Mushrooms)
// 4. Chef's Specialty (Exotic Spices + Truffle Mushrooms + Philosopher's Stone)
// 5. Royal Banquet (Gourmet Meal + Royal Wine + Chef's Specialty + Imperial Silk)
//
// PREMIUM MEAT PROCESSING:
// 1. Premium Beef (Prize Cattle) - 200 build time, 2 production
// 2. Exotic Venison (Deer + Thoroughbred Warhorse + Master Tome)
// 3. Aged Prime Cuts (Premium Beef + Exotic Spices + Wine Barrel) - 600 build time
// 4. Royal Feast Preparation (Aged Prime Cuts + Truffle Mushrooms + Royal Wine + Precision Tools)
//
// INTERDEPENDENT REQUIREMENTS:
// - Wine production requires Precision Tools and Knowledge Crystal from other professions
// - Royal livestock requires wine and silk from other professions
// - Gourmet cuisine requires contraband from smuggling operations
// - Premium meat processing requires wine barrels and precision tools
//
// PRESTIGE REQUIREMENTS:
// - Grand Vintner: 50k-100k prestige (Social Level 10-12)
// - Master Rancher: 55k-120k prestige (Social Level 11-13)
// - Culinary Master: 60k-125k prestige (Social Level 11-13)
// - Master Butcher: 65k-130k prestige (Social Level 12-14)
//
// BUILDING COSTS:
// - Royal Vineyard: 60,000 money
// - Royal Stables: 65,000 money
// - Grand Restaurant: 70,000 money
// - Royal Meat Works: 75,000 money
//
// TOTAL INVESTMENT: ~2,000,000 prestige + 270,000 money for all food professions
//
// This creates the most complex and rewarding food production system possible,
// requiring cooperation between multiple profession specializations and
// providing hundreds of hours of additional late-game progression!