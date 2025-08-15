TutorialChapter
{
	ID = "GuidedTutorialBuyTitle";
	Title = "$ui.GuidedTutorial.BuyTitle1";
	ShowInKnowledgeHub = false; 
	Elements = array
	{
		// Image type content
		// 75% width, automatically centered
		// reached end of line, row break after
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.75; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Actions\IconInvalid.png"; // the image source path
		},
		// Text type content
		// 100% width, no centering needed
		// reached end of line, row break after
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 1.0; // relative width, [0.0 -> 1.0]
			Content = "$dev.sampleText.long"; // the localization key
		},
		// Image type content
		// 49% width, I'm leaving 2% size to allow for spacing (-1% here and -1% on the next image)
		// 10px gap inserted automatically betwen this and the next image
		// a pseudo-column layout is created by using the same size text elements after the images
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.49; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Actions\IconInvalid.png"; // the image source path
		},
		// Image type content
		// 49% width
		// reached end of line, row break after
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.490; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Actions\IconInvalid.png"; // the image source path
		},
		// Text type content
		// 49% width
		// 10px gap inserted automatically betwen this and the next image
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.49; // relative width, [0.0 -> 1.0]
			Content = "$dev.sampleText.short"; // the localization key
		},
		// Text type content
		// 49% width
		// reached end of line, row break after
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.49; // relative width, [0.0 -> 1.0]
			Content = "$dev.sampleText.medium"; // the localization key
		},
		// Image type content
		// 28% width
		// 10px gap inserted automatically betwen this and following text
		TutorialElement
		{
			Type = "Image"; // content type
			Size = 0.28; // relative width, [0.0 -> 1.0]
			Content = "media\UserInterface\Actions\IconInvalid.png"; // the image source path
		},
		// Text type content
		TutorialElement
		{
			Type = "Text"; // content type
			Size = 0.7; // relative width, [0.0 -> 1.0]
			Content = "$dev.sampleText.medium"; // the localization key
		}
	};
},