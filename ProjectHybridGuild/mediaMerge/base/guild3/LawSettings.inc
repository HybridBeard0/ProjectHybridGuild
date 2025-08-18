LawSettings
{
	TrialTimes = array{7.0,10.0,13.0,16.0,19.0}; // Fixed times of day when (visual) trials are taking place.
	PublicTrialSlots = map // Defines how many slots (-1 means infinite) the TrialManager will look ahead to schedule a trial. If all slots are booked, the trial will be held in the background.
	{
		"Anyone" = 8;
		"DynastyMember" = 14;
		"PartyMember" = 18;
		"DynastyLeader" = 14;
	};
	
	// During trial: This formula defines how the severity of an evidence bundle gets influenced by a couple of factors. Returns the adjusted severity.
	// Available tokens:
	// - Severity: the base severity total from the evidence bundle
	// - AccusedReputationScore: a value between -100.0 (most hated) and 100.0 (most liked) based on the social relationship score of the judge to the accused
	// - AccusedRomanceScore: a value between 0.0 (no romance) and 100.0 (max romance) based on the romantic relationship of the judge with the accused
	// - AccuserReputationScore: a value between -100.0 (most hated) and 100.0 (most liked) based on the social relationship score of the judge to the accuser
	// - AccuserRomanceScore: a value between 0.0 (no romance) and 100.0 (max romance) based on the romantic relationship of the judge with the accuser
	// - AccuserExpectation: a value that is either -1.0 (accuser expects mild judgment), 1.0 (accuser expects harsh judgment) or 0.0 otherwise
	// - DidAccusedPleadGuilty: 1.0 if the accuser pleads guilty. 0.0 otherwise.
	// - IsAccusedMissing: 1.0 if the accused failed to appear before the judges at the start of the trial (unless the accuser is ALSO missing). 0.0 otherwise.
	SeverityModifier = "(Severity - (0.07 * AccusedReputationScore) - (0.07 * AccusedRomanceScore) + (0.05 * AccuserReputationScore) + (0.05 * AccuserRomanceScore) + (IsAccusedMissing * 10.0)) * (1.0 + 0.1 * AccuserExpectation) * (DidAccusedPleadGuilty && !IsAccusedMissing ? 0.9 : 1.0)";
	
	RelationshipMaxScoreGain = 2.0; // During trial: the maximum relationship score that judges can gain when the vote exactly what the public demands.
	RelationshipScoreLossPerSentenceLevel = 2.0; // During trial: the amount of relationship score that is lost when a judge deviates from what the public demands.
	PersonalApplicationDiscountMultiplier = 0.8; // Multiplier for all prestige costs when you appear in person in the town hall.
	
	CallToCourtInterval = 5.0; // Time (in seconds) between calls to trial for participants. Default is 5 seconds.
	CallToCourtBuffer = 0.075; // Additional buffer time (in years) added on top of the calculated travel time to ensure characters arrive at court in time. Default is 0.075 (a bit less than 2 hours).
	CallToOfficeMeetingInterval = 5.0; // Time (in seconds) between calling politicians to their office meeting. Default is 5 seconds.
	CallToOfficeMeetingBuffer = 0.06; // Additional buffer time (in years) added on top of the calculated travel time to ensure politicians arrive at their office meetings in time. Default is 0.01 (a bit more than 15 minutes).
	
	NPCOfficeApplicationDeadline = 1.0; // Number of in-game hours a random NPC applies for an open office before the application time runs out.
	
	OfficeValuePerStage = array { 0.0, 100.0, 200.0, 400.0, 600.0, 800.0, 1000.0, 2000.0 }; // The base value of holding an office. The vector should contain (N+1) entries where N is the highest stage of any office. The stage of the office will be used as index for looking up the value.

	ConversionFactorPrestigeToMoney = 20.0; // When the prestige portion of a 'high fine' punishment cannot be (fully) payed, the prestige debt is converted into money. This conversion factor is being used.

	EvidenceInitialDurationRounds = 2.0; // Initial duration of evidence when it is created, in rounds. This can be overridden per crime.
	EvidenceReturnDurationRounds = 1.0; // When evidence is returned (from a cancelled trial), and its remaining duration is LESS than this value, the duration is set to this value. 

	// Whenever the city receives evidence of a crime (because a city guard caught someone or because evidence was returned from a trial), we calculate a chance that the city will request a trial with all the evidence that has been collected against this criminal so far
	// Available tokens:
	// - NewSeverity: the severity of the evidence that has just been added to the hoarded evidence
	// - TotalSeverity: the total of crime severity that has been collected against the perpetrator in this city so far (including the 'NewSeverity')
	// - Perpetrator: the subject criminal of the evidence hoard
	// - Accuser: the character who added the evidence to the hoard. This character will act as the accuser if the evidence is brought to court
	// - other global "constants" such as 'randUnit'
	ShouldCityRequestTrialFormula = "(NewSeverity >= 12.0) || (randUnit < (TotalSeverity / 16.0))";
	
	// Office election: when the AI (NPCs and AI dynasties) decides how to vote for candidates: this formula produces a score that will be used for weighted random picking of a candidate.
	// Available tokens:
	// - Source: the voting politician. Can be queried like in any action expression "Source.hasTag.NPC", etc.
	// - Target: the candidate for the office
	// - AreFromSameFamily: 1.0 when Source and Target are from the same family. 0.0 otherwise
	// - AreAllied: 1.0 when Source and Target are allied or from the same family. 0.0 otherwise
	// - AreInFeud: 1.0 when Source and Target are in a feud. 0.0 otherwise
	// - Source.ReputationScore: The 'social relationship score' how much Source likes Target. The value will be in range [-100.0, ..., 100.0].
	// - RelationshipScore: The 'romantic relationship score' between Source and Target. The value will be in range [0.0, ..., 100.0]. (The name is confusing, but I don't want to risk changing it now. This really means the romantic affection between characters and NOT the social relations between social groups.)
	AiOfficeCandidateWeight = "1.0 + Source.ReputationScore / 100.0 + RelationshipScore / 100.0 + AreFromSameFamily * 10.0";
	
	Crimes = array 
	{
		// ResponsibleOfficeGroup used to define which office group would hold trials for this crime.
		// Since JudgeGroup is now responsible for all trials, we could get rid of this property and instead define the office groups responsible for legality changes in CanChangeBy.
		// E.g. CanChangeBy = array { "MayorGroup", "Sovereign" } would explicitly define the MayorGroup and the Sovereign as responsible groups.
		Crime
		{
			ActionName = "PlayMusic";
			ResponsibleOfficeGroup = "SovereignGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = true;
			CanChangeBy = "Sovereign";
		},
		Crime
		{
			ActionName = "PlayDiceGame";
			ResponsibleOfficeGroup = "SovereignGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = true;
			CanChangeBy = "Sovereign";
		},
		Crime
		{
			ActionName = "BribeOfficeHolder";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 4;
			EvidenceBaseValue = 250;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "GiftOfficeHolder";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 4;
			EvidenceBaseValue = 250;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Divorce";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 15;
			EvidenceBaseValue = 500;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "KillCharacter";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 31;
			EvidenceBaseValue = 1500;
			IsLegalByDefault = false;
			CanChangeBy = "NoOne";
		},
		Crime
		{
			ActionName = "StealthKillCharacter";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 31;
			EvidenceBaseValue = 1500;
			IsLegalByDefault = false;
			CanChangeBy = "NoOne";
		},
		Crime
		{
			ActionName = "PoisonNeighborhood";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 31;
			EvidenceBaseValue = 1350;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "KidnapCharacter";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 28;
			EvidenceBaseValue = 1300;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyBlackWidowPoison";
			ResponsibleOfficeGroup = "CaptainGroup";//JudgeGroup
			Severity = 28;
			EvidenceBaseValue = 1300;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "GreaseTheWheels";
			ResponsibleOfficeGroup = "MayorGroup"; //JudgeGroup
			Severity = 5;
			EvidenceBaseValue = 250;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "SmuggleRum";
			ResponsibleOfficeGroup = "CouncilInformerGroup"; //JudgeGroup
			Severity = 6;
			EvidenceBaseValue = 300;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Sabotage";
			ResponsibleOfficeGroup = "CouncilGuardianGroup"; //JudgeGroup
			Severity = 12;
			EvidenceBaseValue = 900;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "BreakBone";
			ResponsibleOfficeGroup = "CouncilAssistantGroup"; //JudgeGroup
			Severity = 18;
			EvidenceBaseValue = 900;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "MakeEvocation";
			ResponsibleOfficeGroup = "CaptainGroup";
			Severity = 4;
			EvidenceBaseValue = 150;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ThrowBomb";
			ResponsibleOfficeGroup = "CaptainGroup";
			Severity = 12;
			EvidenceBaseValue = 800;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "HenchmenConquerBuilding";
			ResponsibleOfficeGroup = "CaptainGroup";
			Severity = 27;
			EvidenceBaseValue = 1250;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "CollectProtectionMoney";
			ResponsibleOfficeGroup = "CaptainGroup";
			Severity = 8;
			EvidenceBaseValue = 400;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "WriteTrashLetter";
			ResponsibleOfficeGroup = "CouncilAssistantGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ThrowStinkBomb";
			ResponsibleOfficeGroup = "CouncilAssistantGroup";
			Severity = 2;
			EvidenceBaseValue = 100;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "StealFromCharacter";
			ResponsibleOfficeGroup = "CouncilAssistantGroup";
			Severity = 4;
			EvidenceBaseValue = 100;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "StealHouse";
			ResponsibleOfficeGroup = "CouncilAssistantGroup";
			Severity = 10;
			EvidenceBaseValue = 600;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Vandalize";
			ResponsibleOfficeGroup = "CouncilAssistantGroup";
			Severity = 7;
			EvidenceBaseValue = 1100;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyParalysisPoison";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 5;
			EvidenceBaseValue = 200;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Smear";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 2;
			EvidenceBaseValue = 100;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "GoSpyBuilding";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 4;
			EvidenceBaseValue = 100;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Contraband";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 6;
			EvidenceBaseValue = 300;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "PickPocket";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 4;
			EvidenceBaseValue = 150;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyGhostlyFog";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 3;
			EvidenceBaseValue = 150;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "PlunderGraves";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 5;
			EvidenceBaseValue = 250;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyToadSlime";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 3;
			EvidenceBaseValue = 100;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Smuggle";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 5;
			EvidenceBaseValue = 300;
			IsLegalByDefault = true;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "AttackCharacter";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 9;
			EvidenceBaseValue = 200;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "AttackAmbushedCharacter";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 2;
			EvidenceBaseValue = 200;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyToadExcrements";
			ResponsibleOfficeGroup = "CouncilGuardianGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "SmokeJoint";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "ApplyHempBandage";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "DrinkMarijuanaTea";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "UseCBDExtract";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "EatMarijuanaCake";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "EatMarijuanaCreamPie";
			ResponsibleOfficeGroup = "CouncilInformerGroup";
			Severity = 1;
			EvidenceBaseValue = 50;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
		Crime
		{
			ActionName = "Heist";
			ResponsibleOfficeGroup = "MayorGroup";
			Severity = 18;
			EvidenceBaseValue = 800;
			IsLegalByDefault = false;
			CanChangeBy = "Office";
		},
	};
	
	Punishments = array 
	{
		Punishment 
		{
			Type = "Low Fine";
			AvailableInSeverityRangeMin = 0; // The severity range that a bundle of evidence needs to have in a trial for this punishment to be available.
			AvailableInSeverityRangeMax = 4;
			JudgmentSeverityRangeMin = 1; // Judges will pick this punishment if the severity of an evidence bundle is within this range
			JudgmentSeverityRangeMax = 4;
			NotGuiltyThreshold = 0;
			PrimaryRange = PunishmentRange
			{
				Min = "SocialLevel * Severity * 10";
				Max = "SocialLevel * Severity * 20";
			};
		},
		Punishment 
		{
			Type = "Public Shame";
			AvailableInSeverityRangeMin = 0; // The severity range that a bundle of evidence needs to have in a trial for this punishment to be available.
			AvailableInSeverityRangeMax = 29;
			JudgmentSeverityRangeMin = 5; // Judges will pick this punishment if the severity of an evidence bundle is within this range
			JudgmentSeverityRangeMax = 10;
			NotGuiltyThreshold = 0;
			PrimaryRange = PunishmentRange
			{
				Min = "5 + SocialLevel * (Severity / 3)";
				Max = "(5 + SocialLevel * (Severity / 3)) * 2";
			};
		},
		Punishment 
		{
			Type = "High Fine";
			AvailableInSeverityRangeMin = 0; // The severity range that a bundle of evidence needs to have in a trial for this punishment to be available.
			AvailableInSeverityRangeMax = 2147483647;
			JudgmentSeverityRangeMin = 11; // Judges will pick this punishment if the severity of an evidence bundle is within this range
			JudgmentSeverityRangeMax = 16;
			NotGuiltyThreshold = 10;
			PrimaryRange = PunishmentRange // money
			{
				Min = "SocialLevel * Severity * 10";
				Max = "SocialLevel * Severity * 30";
			};
			SecondaryRange = PunishmentRange // prestige
			{
				Min = "SocialLevel * Severity";
				Max = "SocialLevel * Severity * 2";
			};
		},
		Punishment 
		{
			Type = "Prison Time";
			AvailableInSeverityRangeMin = 5; // The severity range that a bundle of evidence needs to have in a trial for this punishment to be available.
			AvailableInSeverityRangeMax = 2147483647;
			JudgmentSeverityRangeMin = 17; // Judges will pick this punishment if the severity of an evidence bundle is within this range
			JudgmentSeverityRangeMax = 34;
			PrimaryRange = PunishmentRange
			{
				Min = "(SocialLevel / 10) + (Severity / 50)";
				Max = "1 + (SocialLevel / 10) + (Severity / 50)";
			};
		},
		Punishment 
		{
			Type = "Death";
			AvailableInSeverityRangeMin = 35; // The severity range that a bundle of evidence needs to have in a trial for this punishment to be available.
			AvailableInSeverityRangeMax = 2147483647;
			JudgmentSeverityRangeMin = 30; // Judges will pick this punishment if the severity of an evidence bundle is within this range
			JudgmentSeverityRangeMax = 100;
		},
	};
};