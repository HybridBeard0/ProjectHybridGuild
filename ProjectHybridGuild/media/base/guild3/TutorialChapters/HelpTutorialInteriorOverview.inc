TutorialChapter
{
	ID = "HelpTutorialInteriorOverview";
	Title = "$ui.HelpTutorial.InteriorOverviewTitle";
	Elements = array
	{
		// Image type content
		// 30% width, automatically centered
		// reached end of line, row break afte
		// Text type content
		// 68% width, automatically centered
		// reached end of line, row break after
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.InteriorOpenContent"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Interiors\Interiors_mansion.png"; // the localization key
		},	
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.InteriorNavigationTitle"; // the localization key
		},
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.InteriorNavigationContent"; // the localization key
		},		
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.InteriorActionsTitle"; // the localization key
		},
		
		
		//Interior HUD
		/*
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.HUD.InteriorButtons_title"; // the localization key
		},
		*/
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.InteriorActionsContent"; // the localization key
		},	
		
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\HUDwiki\$ui.HelpTutorial.HUD.InteriorInteractiveObjects.png"; // the localization key
		},
		
		/*
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.TutorialWiki.ResidenceInterior.Training.Title"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.TutorialWiki.ResidenceInterior.Training.Content"; // the localization key
		},	
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.47; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\HUDwiki\$ui.HelpTutorial.HUD.InteriorInteractiveObjects.png"; // the localization key
		},
		*/
	};
},