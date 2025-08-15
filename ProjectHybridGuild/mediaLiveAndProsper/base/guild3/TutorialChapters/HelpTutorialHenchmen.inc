TutorialChapter
{
	ID = "HelpTutorialHenchmen";
	Title = "$ui.tutorial.henchmen";
	ShowInKnowledgeHub = true;
	Elements = array
	{
		TutorialElement //Welcome
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.tutorial.henchmen"; // the localization key
		},
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Henchmen_Intro"; // the localization key
		},
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$action.HireHenchmenAction"; // the localization key
		},
		
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Henchmen_Intro2"; // the localization key
		},
		
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Henchmen\HireHenchmanNew.png"; // the localization key
		}

	};
},