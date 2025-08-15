TutorialChapter
{
	ID = "HelpTutorialMessageLog";
	Title = "$ui.HelpTutorial.MessageLog1";
	Elements = array
	{
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.MessageLog2"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.MessageLog3"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.MessageLog4"; // the localization key
		},
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\MessageLog\MessageLogMain.png"; // the localization key
		},
	};
},