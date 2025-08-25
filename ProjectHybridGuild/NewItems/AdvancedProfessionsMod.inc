// Advanced Professions Mod - Master include file
// This file includes all advanced tier 8 professions and their interdependent crafting chains

// === CORE PROFESSION MODS ===
// Include the original Master Crafter
#include "MasterCrafterMod.inc"

// Include all four new advanced professions
#include "GrandAlchemistMod.inc"
#include "MasterArchitectMod.inc"
#include "RoyalTailorMod.inc"
#include "GrandmasterScholarMod.inc"

// === ELITE ROGUE PROFESSIONS ===
// Include all four elite rogue professions
#include "EliteRogueProfessionsMod.inc"

// === ELITE FOOD PRODUCTION ===
// Include all four elite food professions
#include "EliteFoodProductionMod.inc"

// === SKILLS INTEGRATION ===
// Include all skill definitions
#include "AdvancedProfessionsSkills.inc"

// === LOCALIZATION ===
// Include comprehensive localization
#include "AdvancedProfessionsLocalization.inc"

// === INTEGRATION NOTES ===
// This mod creates the following interdependent crafting chains:
//
// PRIMARY PROGRESSION:
// 1. Grandmaster Scholar creates Knowledge Crystals (foundation component)
// 2. Master Architect uses Knowledge Crystals to create Precision Tools
// 3. Grand Alchemist uses Precision Tools to create Philosopher's Stone
// 4. Royal Tailor uses components from all professions for ultimate regalia
// 5. Master Crafter benefits from all profession components for Legendary equipment
//
// ELITE ROGUE EXTENSIONS:
// 6. War Mercenary uses Master Crafter gear for survival in warfare
// 7. Royal Bard uses Royal Tailor items for court performances
// 8. Master Thief uses precision tools and stealth gear for heists
// 9. Smuggling Baron uses all professions' exotic goods for contraband
//
// ELITE FOOD PRODUCTION CHAINS:
// 10. Grand Vintner creates wine using precision tools and knowledge
// 11. Master Rancher breeds royal livestock using wine and silk
// 12. Culinary Master combines all premium ingredients for gourmet cuisine
// 13. Master Butcher processes royal livestock for ultimate meat products
//
// CROSS-PROFESSION DEPENDENCIES:
// - Food systems require contraband from smuggling operations
// - Royal livestock needs wine and imperial silk
// - Gourmet cuisine uses exotic spices from international trade
// - All elite food requires precision tools and knowledge crystals
//
// SOCIAL LEVEL REQUIREMENTS:
// - Core Crafting Professions: Level 8-11 (25k-75k prestige)
// - Elite Rogue Professions: Level 8-12 (35k-90k prestige)
// - Elite Food Professions: Level 10-14 (50k-130k prestige)
//
// BUILDING COSTS:
// - Core Professions: 25,000-35,000 money each
// - Elite Rogue Professions: 40,000-55,000 money each
// - Elite Food Professions: 60,000-75,000 money each
//
// TOTAL SYSTEM INVESTMENT:
// - ~3,300,000 total prestige for all professions
// - ~520,000 total money for all buildings
// - Social levels 8-14 required for full progression
//
// HIGH-RISK MECHANICS:
// - War Mercenary: 40-95% survival chance based on equipment, death consequences
// - Royal Bard: Reputation-based success, prestige rewards
// - Master Thief: 25-85% heist success, prison consequences for failure
// - Smuggling Baron: Distance-based profits, interception risks
//
// COMPLEX FOOD SYSTEMS:
// - Seasonal wine production with aging mechanics
// - Animal breeding with quality inheritance
// - Multi-stage gourmet recipes requiring cross-profession cooperation
// - Royal banquets providing massive prestige and social benefits
//
// This creates the most comprehensive late-game progression system possible,
// with 13 tier 8 professions across crafting, combat, criminal, and culinary
// specializations, providing virtually unlimited end-game content!