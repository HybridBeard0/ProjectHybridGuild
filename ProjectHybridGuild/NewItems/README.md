# Horseshoe Item Mod for The Guild 3

This mod adds a new item called "Horseshoe" to The Guild 3 game. The horseshoe is crafted in a Foundry building at tier 1 and is used as a component in crafting RidingHorse.

## Files Structure:

### Core Item
- `HorseshoeItem.inc` - Defines the horseshoe item with its properties, requirements, and crafting details
- `HorseshoeLocalization.inc` - Contains the display names and descriptions for the horseshoe

### Building
- `FoundryBuilding.inc` - Defines the Foundry building where horseshoes are crafted
- `FoundryBuildingLocalization.inc` - Localization for the Foundry building

### Skills
- `FoundrySkill.inc` - Skill tree addition to unlock the Foundry and horseshoe crafting
- `FoundrySkillLocalization.inc` - Localization for the foundry skill

### Modified Recipes
- `ModifiedRidingHorse.inc` - Updated RidingHorse recipe that requires horseshoes as a component

### Main Include
- `HorseshoeMod.inc` - Main include file that references all other components

## Item Details:

**Horseshoe**
- Type: Component (SubType 8)
- Tier: 1
- Social Class: 0 (Commoner)
- Build Time: 35.0 seconds
- Production: 2 items per crafting session
- Requirements: 2 Iron + 1 Charcoal
- Building Required: Foundry Level 1
- Usage: Component for crafting RidingHorse

**Modified RidingHorse Recipe**
- Now requires: 1 Horse + 4 MixedGrains + 4 Leather + **4 Horseshoes**
- This makes horseshoes an essential component for properly equipping horses

## Skill Integration:

The horseshoe is unlocked through the "Foundry Work" skill, which requires:
- Previous Skill: HandicraftMetal (Level 0)
- Social Level: 2
- Cost: 100 Prestige

## Game Integration:

To integrate this mod into the game:
1. Include `HorseshoeMod.inc` in your main item definitions file
2. The modified RidingHorse recipe will override the original recipe
3. Players will need to craft horseshoes before they can create RidingHorses

The mod follows the same structure and conventions as the base game items.

## Gameplay Impact:

- Adds a new tier 1 crafting step for horse equipment
- Creates additional resource requirements for RidingHorse production
- Provides a logical and immersive reason for needing metal crafting skills to create proper riding horses
- 4 horseshoes per horse reflects the real-world need (one for each hoof)