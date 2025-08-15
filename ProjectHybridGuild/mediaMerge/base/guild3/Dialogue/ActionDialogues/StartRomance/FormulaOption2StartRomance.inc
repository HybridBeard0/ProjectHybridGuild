//Option 2 (CHA) formulas
Replacements = map
{
	@base/fStartRomanceOption2
	"CriticalFactor" = "0.75"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma" };
