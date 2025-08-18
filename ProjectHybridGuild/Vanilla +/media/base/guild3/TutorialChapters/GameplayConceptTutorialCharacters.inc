TutorialChapter
{
	ID = "GameplayConceptTutorialCharacters";
	Title = "$gui.Budget.Header3";
	Elements = array
	{
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.DynastyTree2"; // the localization key
		},
		//header columns
		TutorialElement //hierarchy
		{
			Type = "Text"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Characters3"; // the localization key
		},
		TutorialElement //spouse
		{
			Type = "Text"; // content type
			Size = 0.30; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Characters5"; // the localization key
		},
		TutorialElement //heir
		{
			Type = "Text"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Characters7"; // the localization key
		},
		//content columns
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Characters4"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.30; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Characters6"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Characters8"; // the localization key
		},
		//images columns
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Characters3.png"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.30; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Characters5.png"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.31; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Characters7.png"; // the localization key
		},
		//end comuns
		TutorialElement //children
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Characters9"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Characters10"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Characters10.png"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Offspring2"; // the localization key
		},
		TutorialElement //produce offspring
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Offspring3"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Offspring4"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Offspring4.png"; // the localization key
		},
		TutorialElement //adoption
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Offspring5"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.45; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Offspring6"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Offspring6.png"; // the localization key
		},

		TutorialElement //naming
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Offspring6a"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Offspring6b"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Offspring6b.png"; // the localization key
		},
		TutorialElement //succession
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.DynastyTree7"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.DynastyTree3"; // the localization key
		}, 
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Offspring8"; // the localization key
		}, 
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\$ui.GameplayConceptTutorial.Offspring8.png"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GameplayConceptTutorial.Characters15"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "$ui.GameplayConceptTutorial.Characters16"; // the localization key
		}, 
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\player_party_empty.png"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Family\player_party_buttons.png"; // the localization key
		},
	};
},
