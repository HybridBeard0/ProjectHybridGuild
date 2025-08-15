TutorialChapter
{
	ID = "HelpTutorialWelcome";
	Title = "$ui.tutorial.welcome";
	ShowInKnowledgeHub = true;
	Elements = array
	{
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.35; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Logo.png"; // the localization key
		},
		TutorialElement //Welcome
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GuidedTutorial.Welcome1"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GuidedTutorial.TutorialHowTo8"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GuidedTutorial.Welcome2"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\\Tutorial\WelcomePage\Help.png"; // the localization key
		},
		TutorialElement //Tutorial
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GuidedTutorial.TutorialHowTo1"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GuidedTutorial.Welcome3"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\WelcomePage\Tutorial.png"; // the localization key
		},
		TutorialElement //community
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.GuidedTutorial.TutorialHowTo9"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.GuidedTutorial.TutorialHowTo10"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\WelcomePage\Community.png"; // the localization key
		},		

	};
},