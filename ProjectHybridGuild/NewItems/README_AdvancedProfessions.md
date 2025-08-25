# Advanced Late-Game Professions for The Guild 3

This mod adds four new tier 8 professions that create interdependent crafting chains and enhance late-game progression:

## New Professions

### 1. Grand Alchemist (Tier 8)
- **Follows**: Occultism Level 3
- **Building**: Philosopher's Laboratory
- **Specialty**: Transmutation and Elixirs
- **Key Items**: Philosopher's Stone, Transmutation Elixirs, Royal Tinctures

### 2. Master Architect (Tier 8) 
- **Follows**: HandicraftStone Level 3
- **Building**: Grand Workshop
- **Specialty**: Precision Tools and Royal Gemcrafting
- **Key Items**: Precision Tools, Royal Gemstones, Architectural Plans

### 3. Royal Tailor (Tier 8)
- **Follows**: Tailor Level 3
- **Building**: Royal Atelier
- **Specialty**: Imperial Clothing and Luxury Textiles
- **Key Items**: Imperial Silk, Royal Garments, Master's Regalia

### 4. Grandmaster Scholar (Tier 8)
- **Follows**: Scholarly Level 3
- **Building**: Grand Library
- **Specialty**: Advanced Knowledge and Royal Documentation
- **Key Items**: Master Tomes, Royal Decrees, Knowledge Crystals

## Interdependent Crafting Chains

### Primary Chain: Knowledge ? Tools ? Materials ? Products
1. **Grandmaster Scholar** creates **Knowledge Crystals** (base component)
2. **Master Architect** uses Knowledge Crystals to create **Precision Tools**
3. **Grand Alchemist** uses Precision Tools to create **Philosopher's Stone**
4. **Royal Tailor** uses all above for **Master's Regalia**
5. **Master Crafter** uses components from all professions for **Legendary Equipment**

### Secondary Chains:
- **Royal Gemstones** (Master Architect) ? **Royal Jewelry** (multiple professions)
- **Imperial Silk** (Royal Tailor) ? **Royal Garments** ? **Status Items**
- **Transmutation Elixirs** (Grand Alchemist) ? **Enhancement Potions**

## Game Balance:
- Each profession requires others' products for their best items
- Creates economic interdependence between late-game players
- Significant investment required (Social Level 8-10, 25k-75k prestige)
- Multiple upgrade paths for sustained progression

## Files Structure:
```
NewItems/
??? GrandAlchemistMod.inc              # Complete Grand Alchemist profession
??? MasterArchitectMod.inc             # Complete Master Architect profession  
??? RoyalTailorMod.inc                 # Complete Royal Tailor profession
??? GrandmasterScholarMod.inc          # Complete Grandmaster Scholar profession
??? AdvancedProfessionsMod.inc         # Main include for all professions
??? README_AdvancedProfessions.md      # This documentation
```