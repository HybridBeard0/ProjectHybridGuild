# Icon Generation Script for NewItems Mod
# This script helps identify and generate placeholder icons for missing items

import os
import json

# Define all required icons with their descriptions
required_icons = {
    # Master Crafter Items
    "SteelIngot": "Steel bar with golden highlights, metallic appearance",
    "RoyalLongsword": "Ornate sword with royal blue and gold decorations, jeweled hilt",
    "RoyalMace": "Heavy mace with gold crown-like head, ceremonial design",
    "RoyalPlatemail": "Shining armor with royal crest emblem, blue and gold",
    "RoyalShield": "Blue shield with golden crown and gems, heraldic design",
    "RoyalRapier": "Elegant rapier with jeweled hilt, aristocratic weapon",
    "RoyalCrossbow": "Crossbow with ornate wooden stock and metal fittings",
    
    # Grand Alchemist Items
    "PhilosophersStone": "Glowing red crystalline stone with mystical aura",
    "ElixirOfTransmutation": "Golden liquid in ornate bottle with alchemical symbols",
    "RoyalPoison": "Dark purple liquid in sinister black bottle",
    "ElixirOfEternalYouth": "Shimmering silver liquid in crystal vial",
    "MastersCrucible": "Ornate crucible with mystical flames",
    
    # Master Architect Items
    "KnowledgeCrystal": "Blue crystal with swirling knowledge patterns inside",
    "PrecisionTools": "Set of gleaming precision instruments in leather case",
    "RoyalGemstone": "Large multi-faceted gem with rainbow light refraction",
    "ArchitecturalPlans": "Rolled blueprints with building designs visible",
    "MastersCompass": "Ornate compass with precision markings and jeweled center",
    
    # Culinary Master Items
    "GourmetMeal": "Elegant plated meal with artistic presentation",
    "RoyalBanquet": "Multi-course feast display on golden platters",
    "ExoticSpices": "Colorful spice containers with rare seasonings",
    "TruffleMushrooms": "Black truffle mushrooms with earthy texture",
    "ChefsSpecialty": "Master chef's signature dish with artistic garnish",
    
    # Enhanced Food Items
    "EnhancedBreadRoll": "Golden-brown bread rolls with egg glaze",
    "EnhancedWheatBread": "Rich bread loaf with enhanced texture",
    "RoyalCake": "Multi-tiered cake with royal decorations",
    "CreamCheese": "White creamy cheese in round form",
    "RoyalCheese": "Aged cheese wheel with royal markings",
    "ChickenStew": "Hearty stew in wooden bowl with steam",
    "BeefSteak": "Grilled steak with pepper seasoning",
    "TroutWithHerbs": "Fresh trout garnished with green herbs",
    "VegetableSoup": "Colorful vegetable soup in ceramic bowl",
    
    # Scholar/Knowledge Items
    "MasterTome": "Large leather-bound book with golden clasps",
    "ImperialSilk": "Lustrous silk fabric with royal patterns",
    
    # Wine/Beverage Items
    "VintageWine": "Aged wine bottle with vintage label",
    "RoyalWine": "Ornate wine bottle with royal seal",
    "WineBarrel": "Wooden wine barrel with metal hoops",
    "Grapes": "Cluster of purple grapes on vine",
    
    # Livestock/Animals
    "RoyalHorse": "Majestic horse with royal saddle and bridle",
    "PrizeCattle": "Premium beef cattle with blue ribbon",
    "PremiumBeef": "High-quality marbled beef cuts",
    
    # Rogue Profession Items
    "ExoticContraband": "Mysterious wrapped packages with danger symbols",
    "HeistPlans": "Detailed building layouts and security plans",
    "WarContract": "Military contract with seal and ribbons",
    "PerformanceSheet": "Musical notation on parchment with lute symbol",
    "RoyalInstrument": "Ornate lute with gold fittings and gems",
    "ThievesTools": "Set of lockpicks and thieving implements",
    "SmugglersMap": "Map showing secret routes and hidden paths",
    
    # === NEW CROSS-PROFESSION INGREDIENT ITEMS ===
    
    # Basic Ingredients
    "Salt": "White crystalline salt in small pile or container",
    "Yeast": "Small bowl with bubbling fermentation culture",
    "Milk": "White liquid in ceramic jug or pitcher",
    "Butter": "Yellow churned butter in wooden container",
    
    # Enhanced Breads
    "EnhancedBarleyBread": "Dark bread loaf with visible texture improvement",
    "RichWhiteBread": "Pure white, soft bread loaf with golden crust",
    
    # Beverages
    "SimpleAle": "Frothy brown ale in wooden mug",
    
    # Meat Products
    "SmokedBeef": "Dark, cured beef strips hanging or on platter",
    "Sausage": "Linked sausages tied with string",
    
    # Dairy Products
    "BasicCheese": "Round wheel of pale cheese with simple markings",
    
    # Fish Products
    "SaltedFish": "Preserved fish with salt crystals visible",
    "RichFishStew": "Creamy fish stew with vegetables in bowl",
    
    # Textiles
    "ColoredCloth": "Dyed fabric with vibrant colors and patterns",
    "EnhancedSimpleClothes": "Well-tailored garments with quality details",
    
    # Tools
    "KitchenKnife": "Sharp cooking knife with wooden handle",
    "BakersTools": "Set of baking implements and utensils",
    "BrewersKit": "Brewing equipment with cauldrons and tools",
    "FarmersToolkit": "Collection of farming tools in leather case",
    "MerchantsScales": "Precision balance scales with copper fittings",
    
    # Medicine
    "HerbalSalve": "Green herbal ointment in small jar",
    "EnhancedHealingPotion": "Glowing healing potion in ornate bottle",
    
    # Construction
    "Mortar": "Gray cement mixture in container",
    "FiredBricks": "Stack of reddish clay bricks",
    
    # Enhanced Foods
    "ImprovedCake": "Elaborate multi-layer cake with decorations",
    "MeatPie": "Golden pastry pie with meat filling visible"
}

# Categories for organization
categories = {
    "combat": ["RoyalLongsword", "RoyalMace", "RoyalPlatemail", "RoyalShield", "RoyalRapier", "RoyalCrossbow"],
    "crafting": ["SteelIngot", "PrecisionTools", "RoyalGemstone", "KnowledgeCrystal"],
    "alchemy": ["PhilosophersStone", "ElixirOfTransmutation", "RoyalPoison", "ElixirOfEternalYouth", "MastersCrucible"],
    "food": ["GourmetMeal", "RoyalBanquet", "ExoticSpices", "TruffleMushrooms", "ChefsSpecialty", 
             "EnhancedBreadRoll", "EnhancedWheatBread", "RoyalCake", "CreamCheese", "RoyalCheese",
             "ChickenStew", "BeefSteak", "TroutWithHerbs", "VegetableSoup"],
    "luxury": ["MasterTome", "ImperialSilk", "ArchitecturalPlans", "MastersCompass"],
    "beverages": ["VintageWine", "RoyalWine", "WineBarrel", "Grapes"],
    "animals": ["RoyalHorse", "PrizeCattle", "PremiumBeef"],
    "rogue": ["ExoticContraband", "HeistPlans", "WarContract", "PerformanceSheet", 
              "RoyalInstrument", "ThievesTools", "SmugglersMap"],
    
    # === NEW CATEGORIES FOR CROSS-PROFESSION ITEMS ===
    "basic_ingredients": ["Salt", "Yeast", "Milk", "Butter"],
    "enhanced_breads": ["EnhancedBarleyBread", "RichWhiteBread"],
    "basic_beverages": ["SimpleAle"],
    "meat_products": ["SmokedBeef", "Sausage"],
    "dairy_products": ["BasicCheese"],
    "fish_products": ["SaltedFish", "RichFishStew"],
    "textiles": ["ColoredCloth", "EnhancedSimpleClothes"],
    "tools": ["KitchenKnife", "BakersTools", "BrewersKit", "FarmersToolkit", "MerchantsScales"],
    "medicine": ["HerbalSalve", "EnhancedHealingPotion"],
    "construction": ["Mortar", "FiredBricks"],
    "enhanced_food": ["ImprovedCake", "MeatPie"]
}

def check_missing_icons(icon_directory="UI/Icons/"):
    """Check which icons are missing from the specified directory"""
    missing_icons = []
    existing_icons = []
    
    if os.path.exists(icon_directory):
        existing_files = [f.replace('.dds', '').replace('.tga', '') 
                         for f in os.listdir(icon_directory) 
                         if f.endswith(('.dds', '.tga'))]
    else:
        existing_files = []
    
    for icon_name in required_icons.keys():
        if icon_name in existing_files:
            existing_icons.append(icon_name)
        else:
            missing_icons.append(icon_name)
    
    return missing_icons, existing_icons

def generate_icon_manifest():
    """Generate a JSON manifest of all required icons"""
    manifest = {
        "required_icons": required_icons,
        "categories": categories,
        "total_count": len(required_icons),
        "file_format": "64x64 .dds or .tga",
        "target_directory": "UI/Icons/"
    }
    
    return json.dumps(manifest, indent=2)

def create_batch_rename_script():
    """Create a batch script for renaming icon files"""
    script_lines = ["@echo off", "echo Renaming icon files for NewItems mod...", ""]
    
    for icon_name in required_icons.keys():
        script_lines.append(f'if exist "{icon_name}.tga" move "{icon_name}.tga" "UI\\Icons\\{icon_name}.dds"')
        script_lines.append(f'if exist "{icon_name}.dds" move "{icon_name}.dds" "UI\\Icons\\{icon_name}.dds"')
    
    script_lines.extend(["", "echo Icon installation complete!", "pause"])
    return "\n".join(script_lines)

def print_priority_list():
    """Print icons in priority order"""
    # Updated priority lists to include new cross-profession items
    high_priority = (categories["combat"] + 
                    categories["basic_ingredients"] + 
                    categories["enhanced_breads"] + 
                    ["SteelIngot", "KnowledgeCrystal", "PrecisionTools"])
    
    medium_priority = (categories["alchemy"] + 
                      categories["tools"] + 
                      categories["meat_products"] + 
                      categories["dairy_products"] + 
                      categories["food"][:5])
    
    low_priority = (categories["rogue"] + 
                   categories["luxury"] + 
                   categories["construction"] + 
                   categories["medicine"])
    
    print("HIGH PRIORITY ICONS (Core gameplay & basic ingredients):")
    for icon in high_priority:
        if icon in required_icons:
            print(f"  - {icon}.dds: {required_icons[icon]}")
    
    print("\nMEDIUM PRIORITY ICONS (Profession features & tools):")
    for icon in medium_priority:
        if icon in required_icons:
            print(f"  - {icon}.dds: {required_icons[icon]}")
    
    print("\nLOW PRIORITY ICONS (Optional content & specialized items):")
    for icon in low_priority:
        if icon in required_icons:
            print(f"  - {icon}.dds: {required_icons[icon]}")

def print_cross_profession_chains():
    """Print information about the new cross-profession item chains"""
    print("\n" + "=" * 60)
    print("CROSS-PROFESSION ITEM CHAINS")
    print("=" * 60)
    
    chains = {
        "Basic Food Chain": [
            "Farm (Cattle) ? Milk ? Butter ? Rich White Bread",
            "Farm (Eggs) + Milk + Butter ? Enhanced Breads",
            "Mason (Salt) ? Food Preservation ? Smoked Meats"
        ],
        "Brewing Chain": [
            "Shaman (Yeast) + Farm (Barley) ? Simple Ale",
            "Honey + Yeast + Water ? Brewing Base"
        ],
        "Tool Making Chain": [
            "Artisan (Iron + Wood) ? Kitchen Knife ? Baker's Tools",
            "Multiple Tools ? Farmer's Toolkit ? Enhanced Productivity"
        ],
        "Textile Chain": [
            "Shaman (Linen) + Gravedigger (Dyes) ? Colored Cloth",
            "Fishing (Bone Needles) + Colored Cloth ? Enhanced Clothes"
        ],
        "Medicine Chain": [
            "Shaman (Herbs) + Butcher (Fat) ? Herbal Salve",
            "Multiple Medicine ? Enhanced Healing Potion"
        ]
    }
    
    for chain_name, chain_steps in chains.items():
        print(f"\n{chain_name}:")
        for step in chain_steps:
            print(f"  • {step}")

if __name__ == "__main__":
    print("NewItems Mod - Icon Generation Helper")
    print("=" * 40)
    
    # Check for missing icons
    missing, existing = check_missing_icons()
    
    print(f"Total icons required: {len(required_icons)}")
    print(f"Icons found: {len(existing)}")
    print(f"Icons missing: {len(missing)}")
    
    if missing:
        print("\nMISSING ICONS:")
        for icon in missing[:10]:  # Show first 10 missing icons
            print(f"  - {icon}.dds")
        if len(missing) > 10:
            print(f"  ... and {len(missing) - 10} more")
    
    print("\n" + "=" * 40)
    print_priority_list()
    
    # Show cross-profession information
    print_cross_profession_chains()
    
    # Generate files
    print("\nGenerating helper files...")
    
    # Save manifest
    with open("icon_manifest.json", "w") as f:
        f.write(generate_icon_manifest())
    print("- Created icon_manifest.json")
    
    # Save batch script
    with open("install_icons.bat", "w") as f:
        f.write(create_batch_rename_script())
    print("- Created install_icons.bat")
    
    print("\nDone! Use the generated files to help with icon creation and installation.")
    print(f"NEW: Added {len(categories['basic_ingredients']) + len(categories['tools']) + len(categories['enhanced_breads']) + len(categories['meat_products']) + len(categories['dairy_products'])} cross-profession ingredient items!")