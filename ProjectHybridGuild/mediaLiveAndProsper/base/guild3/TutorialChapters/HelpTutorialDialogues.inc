TutorialChapter
{
	ID = "HelpTutorialDialogues";
	Title = "$ui.messageCategory.Dialogue"; // should be dialogues
	Elements = array
	{
		TutorialElement //Types of dialogs
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.Dialogue1"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Dialogue2"; // the image source path
		},
		TutorialElement //Action dialogs
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.Dialogue7"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Dialogue8"; // the localization key
		},	
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Dialogues\$ui.HelpTutorial.Dialogue8.png"; // the localization key
		},
		TutorialElement //Dialog notifications
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.Dialogue9"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.37; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Dialogue10"; // the localization key
		},	
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.57; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Dialogues\$ui.HelpTutorial.Dialogue10.png"; // the localization key
		},
		TutorialElement //Chatting NPC
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.Dialogue3"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Dialogue4"; // the localization key
		},	
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Dialogues\$ui.HelpTutorial.Dialogue4.png"; // the localization key
		},
		TutorialElement //TownCrier
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			FontSize = 15.0;
			FontName = bold;
			Content = "$ui.HelpTutorial.Dialogue5"; // the localization key
		},
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.95; // relative width, [0.0 -> 1.0]
			Content = "$ui.HelpTutorial.Dialogue6"; // the localization key
		},	
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.80; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Tutorial\Dialogues\$ui.HelpTutorial.Dialogue6.png"; // the localization key
		},
	};
},