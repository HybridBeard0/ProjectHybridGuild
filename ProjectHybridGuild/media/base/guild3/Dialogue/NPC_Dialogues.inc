
//Fire chat KIDS
Dialogue {
	Id = "d.npcChat.fire";
	BranchType = "Pick";
	Topics = array 
	{
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.global.fire.line.poor1";
			Next = array 
			{
				TopicLink
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.global.fire.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.global.fire.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.global.fire.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.global.fire.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.global.fire.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.global.fire.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic {
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.global.fire.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
		Topic {
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.global.fire.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.fire.answers";
					Topic = "d.answer.fire.question";
				},
			};
		},
	};
},

Dialogue {
	Id = "d.npcChat.fire.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.answer.fire.question";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.fire.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.fire.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.fire.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.fire.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.fire.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.fire.answer.rich2";
				},
			};
		},
	};
},


// Dont like dynasty x chat KIDS
Dialogue {
	Id = "d.npcChat.dontLike.dynX";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.dontLike.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.dontLike.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.dontLike.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic {
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.dontLike.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.dontLike.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.dontLike.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.dontLike.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.dontLike.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.dontLike.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.dontLike.dynX.answers";
					Topic = "d.dontLike.dynX.answers";
				},
			};
		},
	};
},

Dialogue {
	Id = "d.npcChat.dontLike.dynX.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.dontLike.dynX.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.dynRep.dontLike.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.dynRep.dontLike.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.dynRep.dontLike.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.dynRep.dontLike.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.dynRep.dontLike.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.dynRep.dontLike.answer.rich2";
				},
			};
		},
	};
},


// Toast chat KIDS
Dialogue {
	Id = "d.npcChat.casualLife.toasts";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.toasts.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.toasts.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.toasts.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.toasts.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.toasts.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.toasts.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.toasts.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.toasts.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.toasts.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.toasts.answers";
					Topic = "d.casualLife.toasts.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.toasts.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.toasts.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.toasts.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.toasts.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.toasts.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.toasts.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.toasts.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.toasts.answer.rich2";
				},
			};
		},
	};
},


// I found a coin chat KIDS
Dialogue 
{
	Id = "d.npcChat.casualLife.coin";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.coin.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.coin.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.coin.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.coin.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.coin.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.coin.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.coin.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.coin.line.com1"; // intentional use of a line for commoners.
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.coin.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.coin.answers";
					Topic = "d.casualLife.coin.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.coin.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.coin.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.coin.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
					Line = "$d.npc.casualLife.coin.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.coin.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.coin.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.coin.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.coin.answer.rich2";
				},
			};
		},
	};
},


// No good business chat
Dialogue 
{
	Id = "d.npcChat.casualLife.bBusiness";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.bBusiness.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.bBusiness.answers";
					Topic = "d.casualLife.bBusiness.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.bBusiness.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.bBusiness.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.bBusiness.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.bBusiness.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.bBusiness.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.bBusiness.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.bBusiness.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.bBusiness.answer.rich2";
				},
			};
		},
	};
},


// Good business chat
Dialogue 
{
	Id = "d.npcChat.casualLife.gBusiness";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gBusiness.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gBusiness.answers";
					Topic = "d.casualLife.gBusiness.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.gBusiness.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.gBusiness.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.gBusiness.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.gBusiness.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.gBusiness.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
					Line = "$d.npc.casualLife.gBusiness.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.gBusiness.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.gBusiness.answer.rich2";
				},
			};
		},
	};
},


// Somebody is watching KIDS
Dialogue 
{
	Id = "d.npcChat.casualLife.watchingUs";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.watchingUs.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.watchingUs.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.watchingUs.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.watchingUs.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.watchingUs.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.watchingUs.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.watchingUs.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.watchingUs.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.watchingUs.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.watchingUs.answers";
					Topic = "d.casualLife.watchingUs.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.watchingUs.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.watchingUs.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.watchingUs.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.watchingUs.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.watchingUs.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.watchingUs.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.watchingUs.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.watchingUs.answer.rich2";
				},
			};
		},
	};
},


// It will be a good day chat
Dialogue 
{
	Id = "d.npcChat.casualLife.gDay";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.gDay.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.casualLife.gDay.answers";
					Topic = "d.casualLife.gDay.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.casualLife.gDay.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.gDay.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.gDay.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.gDay.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.gDay.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
					Line = "$d.npc.casualLife.gDay.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.gDay.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.gDay.answer.rich2";
				},
			};
		},
	};
},


// New season chat
Dialogue 
{
	Id = "d.npcChat.newSeas";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.newSeas.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.newSeas.answers";
					Topic = "d.newSeas.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.newSeas.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.newSeas.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.newSeas.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.newSeas.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.newSeas.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.newSeas.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.newSeas.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.newSeas.answer.rich2";
				},
			};
		},
	};
},


// Plague map chat
Dialogue 
{
	Id = "d.npcChat.plagueMap";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.plagueMap.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.plagueMap.answers";
					Topic = "d.plagueMap.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.plagueMap.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.plagueMap.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.plagueMap.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.plagueMap.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.plagueMap.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.plagueMap.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.plagueMap.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.plagueMap.answer.rich2";
				},
			};
		},
	};
},


// Like dynasty x chat KIDS
Dialogue 
{
	Id = "d.npcChat.like.dynX";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.like.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.like.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.dynRep.like.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.like.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.like.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.dynRep.like.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.like.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.like.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.dynRep.like.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.like.dynX.answers";
					Topic = "d.like.dynX.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.like.dynX.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.like.dynX.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.dynRep.like.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.dynRep.like.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.dynRep.like.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.dynRep.like.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.dynRep.like.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.dynRep.like.answer.rich2";
				},
			};
		},
	};
},


// End season chat
Dialogue 
{
	Id = "d.npcChat.endSeas";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.global.endSeas.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.endSeas.answers";
					Topic = "d.endSeas.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.endSeas.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.endSeas.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.newSeas.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.global.endSeas.answer.rich2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.endSeas.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.global.endSeas.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.endSeas.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.global.endSeas.answer.rich2";
				},
			};
		},
	};
},


// Judgments with punishment below public expectation  chat
Dialogue 
{
	Id = "d.npcChat.crime.belowPublic";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.belowPublic.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.belowPublic.answers";
					Topic = "d.crime.belowPublic.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.crime.belowPublic.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.crime.belowPublic.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.crime.belowPublic.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.crime.belowPublic.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.crime.belowPublic.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.crime.belowPublic.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.crime.belowPublic.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.crime.belowPublic.answer.rich2";
				},
			};
		},
	};
},


// Crime is everywhere chat
Dialogue 
{
	Id = "d.npcChat.crime.around";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.crime.around.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.crime.around.answers";
					Topic = "d.crime.around.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.crime.around.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.crime.around.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.crime.around.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.crime.around.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.crime.around.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.crime.around.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.crime.around.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.crime.around.answer.rich2";
				},
			};
		},
	};
},


// random talk about benefits of reading and writing
Dialogue 
{
	Id = "d.npcChat.literacy";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.literacy.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.literacy.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.literacy.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.literacy.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.literacy.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.literacy.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.literacy.answersAll";
					Topic = "d.npcChat.literacy.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.literacy.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.literacy.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.literacy.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.literacy.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.literacy.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.literacy.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.literacy.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.literacy.answer.rich2";
				},
			};
		},
	};
},

// random talk about general hygiene matters
Dialogue 
{
	Id = "d.npcChat.hygiene";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.hygiene.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.hygiene.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.hygiene.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.hygiene.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.hygiene.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.hygiene.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.hygiene.answersAll";
					Topic = "d.npcChat.hygiene.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.hygiene.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.hygiene.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.hygiene.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.hygiene.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.hygiene.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.hygiene.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.hygiene.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.hygiene.answer.rich2";
				},
			};
		},
	};
},


// random talk about the cold winter
Dialogue 
{
	Id = "d.npcChat.firewood";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.firewood.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.firewood.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.firewood.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.firewood.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.firewood.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.firewood.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.firewood.answersAll";
					Topic = "d.npcChat.firewood.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.firewood.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.firewood.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.firewood.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.firewood.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.firewood.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.firewood.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.firewood.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.firewood.answer.rich2";
				},
			};
		},
	};
},


// random talk about the dangers in the night
Dialogue 
{
	Id = "d.npcChat.shadows";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.shadows.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.shadows.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.shadows.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.shadows.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.shadows.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.shadows.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.shadows.answersAll";
					Topic = "d.npcChat.shadows.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.shadows.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.shadows.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.shadows.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.shadows.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.shadows.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.shadows.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.shadows.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.shadows.answer.rich2";
				},
			};
		},
	};
},


// random talk about ghosts/demons/fears in the night
Dialogue 
{
	Id = "d.npcChat.ghosts";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.ghosts.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && IsAdult";
			Line = "$d.npcChat.ghosts.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.ghosts.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && IsAdult";
			Line = "$d.npcChat.ghosts.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.ghosts.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && IsAdult";
			Line = "$d.npcChat.ghosts.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.ghosts.answersAll";
					Topic = "d.npcChat.ghosts.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.ghosts.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.ghosts.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.ghosts.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.ghosts.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.ghosts.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.ghosts.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.ghosts.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.ghosts.answer.rich2";
				},
			};
		},
	};
},


// Dream about a flood
Dialogue 
{
	Id = "d.npcChat.floodDream";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.floodDream.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.floodDream.answers";
					Topic = "d.casualLife.floodDream.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.floodDream.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.floodDream.answers";
					Topic = "d.casualLife.floodDream.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.floodDream.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.floodDream.answers";
					Topic = "d.casualLife.floodDream.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.floodDream.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.floodDream.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
					Line = "$d.npc.casualLife.floodDream.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.floodDream.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.floodDream.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.floodDream.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.floodDream.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.floodDream.answer.rich2";
				},
			};
		},
	};
},


// Dream about flying KIDS
Dialogue 
{
	Id = "d.npcChat.flyDream";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.flyDream.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.flyDream.answers";
					Topic = "d.casualLife.flyDream.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.flyDream.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.flyDream.answers";
					Topic = "d.casualLife.flyDream.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.flyDream.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.flyDream.answers";
					Topic = "d.casualLife.flyDream.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.flyDream.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.flyDream.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.flyDream.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.flyDream.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.flyDream.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.flyDream.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.flyDream.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.flyDream.answer.rich2";
				},
			};
		},
	};
},

// Dream about a clock tower
Dialogue 
{
	Id = "d.npcChat.clockDream";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.clockDream.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.clockDream.answers";
					Topic = "d.casualLife.clockDream.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.clockDream.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.clockDream.answers";
					Topic = "d.casualLife.clockDream.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.clockDream.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.clockDream.answers";
					Topic = "d.casualLife.clockDream.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.clockDream.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.clockDream.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.clockDream.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.clockDream.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.clockDream.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
					Line = "$d.npc.casualLife.clockDream.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.clockDream.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.clockDream.answer.rich2";
				},
			};
		},
	};
},

// Dream about a feast KIDS
Dialogue 
{
	Id = "d.npcChat.feastDream";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.feastDream.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.feastDream.answers";
					Topic = "d.casualLife.feastDream.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.feastDream.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.feastDream.answers";
					Topic = "d.casualLife.feastDream.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.feastDream.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.feastDream.answers";
					Topic = "d.casualLife.feastDream.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.feastDream.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.feastDream.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.feastDream.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.feastDream.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.feastDream.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.feastDream.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.feastDream.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.feastDream.answer.rich2";
				},
			};
		},
	};
},

// Dream about sailing
Dialogue 
{
	Id = "d.npcChat.sailDream";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.sailDream.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.sailDream.answers";
					Topic = "d.casualLife.sailDream.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.sailDream.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.sailDream.answers";
					Topic = "d.casualLife.sailDream.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.sailDream.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.sailDream.answers";
					Topic = "d.casualLife.sailDream.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.sailDream.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.sailDream.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.sailDream.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.sailDream.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.sailDream.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.sailDream.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.sailDream.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.sailDream.answer.rich2";
				},
			};
		},
	};
},

// So much work
Dialogue 
{
	Id = "d.npcChat.muchWork";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.muchWork.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.muchWork.answers";
					Topic = "d.casualLife.muchWork.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.muchWork.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.muchWork.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.muchWork.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.muchWork.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.muchWork.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.muchWork.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.muchWork.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.muchWork.answer.rich2";
				},
			};
		},
	};
},

// I'm earning too little
Dialogue 
{
	Id = "d.npcChat.earnLittle";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.earnLittle.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.earnLittle.answers";
					Topic = "d.casualLife.earnLittle.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.earnLittle.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.earnLittle.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.earnLittle.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.earnLittle.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.earnLittle.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.earnLittle.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.earnLittle.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.earnLittle.answer.rich2";
				},
			};
		},
	};
},

// The prices are too high
Dialogue 
{
	Id = "d.npcChat.highPrices";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.highPrices.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.highPrices.answers";
					Topic = "d.casualLife.highPrices.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.highPrices.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.highPrices.answers";
					Topic = "d.casualLife.highPrices.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.highPrices.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.highPrices.answers";
					Topic = "d.casualLife.highPrices.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.highPrices.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.highPrices.answers";
					Topic = "d.casualLife.highPrices.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.highPrices.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.highPrices.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.highPrices.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.highPrices.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.highPrices.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.highPrices.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.highPrices.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.highPrices.answer.rich2";
				},
			};
		},
	};
},

// The competition is strong
Dialogue 
{
	Id = "d.npcChat.competition";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.competition.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.competition.answers";
					Topic = "d.casualLife.competition.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.competition.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.competition.answers";
					Topic = "d.casualLife.competition.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.competition.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.competition.answers";
					Topic = "d.casualLife.competition.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.competition.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.competition.answers";
					Topic = "d.casualLife.competition.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.competition.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.competition.answers";
					Topic = "d.casualLife.competition.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.competition.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.competition.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.competition.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.competition.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.competition.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.competition.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.competition.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.competition.answer.rich2";
				},
			};
		},
	};
},

// I have a nice job
Dialogue 
{
	Id = "d.npcChat.niceJob";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.niceJob.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceJob.answers";
					Topic = "d.casualLife.niceJob.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.niceJob.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceJob.answers";
					Topic = "d.casualLife.niceJob.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.niceJob.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceJob.answers";
					Topic = "d.casualLife.niceJob.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.niceJob.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceJob.answers";
					Topic = "d.casualLife.niceJob.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.niceJob.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceJob.answers";
					Topic = "d.casualLife.niceJob.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.niceJob.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.niceJob.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.niceJob.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.niceJob.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.niceJob.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.niceJob.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.niceJob.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.niceJob.answer.rich2";
				},
			};
		},
	};
},

// I learn each day KIDS
Dialogue 
{
	Id = "d.npcChat.learnEachDay";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.learnEachDay.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.learnEachDay.answers";
					Topic = "d.casualLife.learnEachDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.learnEachDay.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.learnEachDay.answers";
					Topic = "d.casualLife.learnEachDay.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.learnEachDay.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.learnEachDay.answers";
					Topic = "d.casualLife.learnEachDay.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.learnEachDay.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.learnEachDay.answers";
					Topic = "d.casualLife.learnEachDay.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.learnEachDay.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.learnEachDay.answers";
					Topic = "d.casualLife.learnEachDay.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.learnEachDay.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.learnEachDay.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.learnEachDay.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.learnEachDay.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.learnEachDay.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.learnEachDay.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.learnEachDay.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.learnEachDay.answer.rich2";
				},
			};
		},
	};
},

// I heard a nice song KIDS
Dialogue 
{
	Id = "d.npcChat.niceSong";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.niceSong.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceSong.answers";
					Topic = "d.casualLife.niceSong.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.niceSong.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceSong.answers";
					Topic = "d.casualLife.niceSong.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.niceSong.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceSong.answers";
					Topic = "d.casualLife.niceSong.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.niceSong.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.niceSong.answers";
					Topic = "d.casualLife.niceSong.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.niceSong.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.niceSong.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.niceSong.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.niceSong.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.niceSong.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.niceSong.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.niceSong.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.niceSong.answer.rich2";
				},
			};
		},
	};
},

// I heard a good joke KIDS
Dialogue 
{
	Id = "d.npcChat.goodJoke";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.goodJoke.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.goodJoke.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor";
			Line = "$d.npc.casualLife.goodJoke.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.goodJoke.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.goodJoke.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner";
			Line = "$d.npc.casualLife.goodJoke.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich";
			Line = "$d.npc.casualLife.goodJoke.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodJoke.answers";
					Topic = "d.casualLife.goodJoke.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.goodJoke.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.goodJoke.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.goodJoke.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.goodJoke.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.goodJoke.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.goodJoke.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.goodJoke.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.goodJoke.answer.rich2";
				},
			};
		},
	};
},

// I heard a rumor
Dialogue 
{
	Id = "d.npcChat.heardRumor";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.heardRumor.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.heardRumor.answers";
					Topic = "d.casualLife.heardRumor.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.heardRumor.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.heardRumor.answers";
					Topic = "d.casualLife.heardRumor.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.heardRumor.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.heardRumor.answers";
					Topic = "d.casualLife.heardRumor.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.heardRumor.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.heardRumor.answers";
					Topic = "d.casualLife.heardRumor.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.heardRumor.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.heardRumor.answers";
					Topic = "d.casualLife.heardRumor.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.heardRumor.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.heardRumor.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.heardRumor.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.heardRumor.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.heardRumor.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.heardRumor.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.heardRumor.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.heardRumor.answer.rich2";
				},
			};
		},
	};
},

// I have a great investment
Dialogue 
{
	Id = "d.npcChat.goodInvest";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.goodInvest.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodInvest.answers";
					Topic = "d.casualLife.goodInvest.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.goodInvest.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodInvest.answers";
					Topic = "d.casualLife.goodInvest.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.goodInvest.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodInvest.answers";
					Topic = "d.casualLife.goodInvest.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.goodInvest.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.goodInvest.answers";
					Topic = "d.casualLife.goodInvest.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.goodInvest.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.goodInvest.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.goodInvest.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.goodInvest.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.goodInvest.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.goodInvest.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.goodInvest.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.goodInvest.answer.rich2";
				},
			};
		},
	};
},

// new Era
Dialogue 
{
	Id = "d.npcChat.newEra";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.casualLife.newEra.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.casualLife.newEra.answers";
					Topic = "d.casualLife.newEra.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.casualLife.newEra.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.casualLife.newEra.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.newEra.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.casualLife.newEra.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.newEra.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.casualLife.newEra.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.newEra.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.casualLife.newEra.answer.rich2";
				},
			};
		},
	};
},


// A new good official
Dialogue 
{
	Id = "d.npcChat.goodOff";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		
		// lines for the poor caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3"; 
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1"; 
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},		
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		// lines for the rich caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3"; 
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.goodOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.goodOff.answers";
					Topic = "d.politics.goodOff.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.politics.goodOff.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.politics.goodOff.answers";
			Speaker = "Switch";
			Next = array 
			{
				// lines for the poor caste, male to male about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor2";
				},
				
				// lines for the poor caste, male to male about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor2.female";
				},
				
				// lines for the poor caste, male to female about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor2";
				},

				// lines for the poor caste, male to female about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor2.female";
				},
				
				// lines for the poor caste, female to male about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.poor2";
				},
				
				// lines for the poor caste, female to male about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor2.female";
				},
				
				// lines for the poor caste, female to female about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.poor2.female";
				},

				// lines for the commoner caste, male to male about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com2";
				},
				
				// lines for the commoner caste, male to male about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com2.female";
				},
				
				// lines for the commoner caste, male to female	about male
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com2";
				},
				
				// lines for the commoner caste, male to female	about female
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com2.female";
				},
				
				// lines for the commoner caste, female to female about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com2";
				},
				
				// lines for the commoner caste, female to female about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com2.female";
				},
				
				// lines for the commoner caste, male to female	about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.com2";
				},
				
				// lines for the commoner caste, male to female	about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.com2.female";
				},
				
				// lines for the rich caste, male to male about male			
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich2";
				},
				
				// lines for the rich caste, male to male about female			
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich2.female";
				},
				
				// lines for the rich caste, male to female	about male
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich2";
				},
				
				// lines for the rich caste, male to female about female
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich2.female";
				},
				
				// lines for the rich caste, female to female about male			
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich2";
				},
				
				// lines for the rich caste, female to female about female			
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich2.female";
				},
				
				// lines for the rich caste, female to male	about male		
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.goodOff.answer.rich2";
				},
				
				// lines for the rich caste, female to male	about female	
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.goodOff.answer.rich2.female";
				},
			};
		},
	};
},

// A new bad official
Dialogue 
{
	Id = "d.npcChat.badOff";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		
		// lines for the poor caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the poor caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the commoner caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.com3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, male to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},		
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		// lines for the rich caste, female to male about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to male about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to female about male
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		
		// lines for the rich caste, female to female about female
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich1.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich2.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.politics.badOff.line.rich3.female";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.politics.badOff.answers";
					Topic = "d.politics.badOff.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.politics.badOff.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.politics.badOff.answers";
			Speaker = "Switch";
			Next = array 
			{
				// lines for the poor caste, male to male about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor2";
				},
				
				// lines for the poor caste, male to male about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor2.female";
				},
				
				// lines for the poor caste, male to female about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor2";
				},

				// lines for the poor caste, male to female about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor2.female";
				},
				
				// lines for the poor caste, female to male about male
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.poor2";
				},
				
				// lines for the poor caste, female to male about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor2.female";
				},
				
				// lines for the poor caste, female to female about female
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.poor2.female";
				},

				// lines for the commoner caste, male to male about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com2";
				},
				
				// lines for the commoner caste, male to male about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com2.female";
				},
				
				// lines for the commoner caste, male to female	about male
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com2";
				},
				
				// lines for the commoner caste, male to female	about female
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com2.female";
				},
				
				// lines for the commoner caste, female to female about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com2";
				},
				
				// lines for the commoner caste, female to female about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com2.female";
				},
				
				// lines for the commoner caste, male to female	about male	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.com2";
				},
				
				// lines for the commoner caste, male to female	about female	
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.com2.female";
				},
				
				// lines for the rich caste, male to male about male			
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich2";
				},
				
				// lines for the rich caste, male to male about female			
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich2.female";
				},
				
				// lines for the rich caste, male to female	about male
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich2";
				},
				
				// lines for the rich caste, male to female about female
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich2.female";
				},
				
				// lines for the rich caste, female to female about male			
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich2";
				},
				
				// lines for the rich caste, female to female about female			
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && !Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich2.female";
				},
				
				// lines for the rich caste, female to male	about male		
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsMale";
					Line = "$d.npc.politics.badOff.answer.rich2";
				},
				
				// lines for the rich caste, female to male	about female	
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich1.female";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich && !Source.IsMale && Target.IsMale && subject.IsFemale";
					Line = "$d.npc.politics.badOff.answer.rich2.female";
				},
			};
		},
	};
},

// Legal now
Dialogue 
{
	Id = "d.npcChat.genLegal";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genLegal.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genLegal.answers";
					Topic = "d.law.genLegal.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.law.genLegal.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.law.genLegal.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.law.genLegal.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.law.genLegal.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.law.genLegal.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.law.genLegal.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.law.genLegal.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.law.genLegal.answer.rich2";
				},
			};
		},
	};
},

// Illegal now
Dialogue 
{
	Id = "d.npcChat.genIllegal";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
	
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.poor1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.poor2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.poor3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		
		// lines for the commoner caste
	
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.com1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.com2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.com3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		
		// lines for the rich caste
	
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.rich1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.rich2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npc.law.genIllegal.line.rich3";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChatd.law.genIllegal.answers";
					Topic = "d.law.genIllegal.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChatd.law.genIllegal.answers";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.law.genIllegal.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.law.genIllegal.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npc.law.genIllegal.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.law.genIllegal.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npc.law.genIllegal.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.law.genIllegal.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npc.law.genIllegal.answer.rich2";
				},
			};
		},
	};
},


// random talk about the death of the Sovereign
Dialogue 
{
	Id = "d.npcChat.SovereignDead";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.poor1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.poor1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.poor2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.poor2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.com1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.com1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.com2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.com2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.rich1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.rich1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && subject.IsMale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.rich2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && subject.IsFemale && Speaker.IsAdult && Listener.IsAdult";
			Line = "$d.npcChat.SovereignDead.line.rich2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.SovereignDead.answersAll";
					Topic = "d.npcChat.SovereignDead.answersIsFemale";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.SovereignDead.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.SovereignDead.answersIsMale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor1.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor3";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com3.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich3";
				},
			};
		},
		Topic 
		{
			Id = "d.npcChat.SovereignDead.answersIsFemale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor1.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.SovereignDead.answer.poor3";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.SovereignDead.answer.com3.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.SovereignDead.answer.rich3";
				},
			};
		},
	};
},

// random talk about the death of a well regarded family leader
Dialogue 
{
	Id = "d.npcChat.LeaderDead.good";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.poor1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.poor1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.poor2.IsMale";
			Next = array 
			{
				TopicLink
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.poor2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.com1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.com1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.com2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.com2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.rich1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.rich1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.good.line.rich2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.good.line.rich2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.good.answersAll";
					Topic = "d.npcChat.LeaderDead.good.answersIsFemale";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.LeaderDead.good.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.LeaderDead.good.answersIsMale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor2.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor3.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com3";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich1.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich2.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich3.IsMale";
				},
			};
		},
		Topic 
		{
			Id = "d.npcChat.LeaderDead.good.answersIsFemale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor2.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.good.answer.poor3.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.good.answer.com3";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich1.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich2.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.good.answer.rich3.IsFemale";
				},
			};
		},
	};
},

// random talk about the death of a hated family leader
Dialogue 
{
	Id = "d.npcChat.LeaderDead.bad";
	BranchType = "Pick";
	Topics = array 
	{
	
		// lines for the poor caste
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.poor1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.poor1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.poor2.IsMale";
			Next = array 
			{
				TopicLink
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Poor && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.poor2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
		
		// lines for the commoner caste
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.com1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.com1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.com2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Commoner && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.com2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
		
		// lines for the rich caste
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.rich1.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.rich1.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsMale";
			Line = "$d.npcChat.LeaderDead.bad.line.rich2.IsMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsMale";
				},
			};
		},
		Topic 
		{
			Enabled = "SocialCaste == Rich && Speaker.IsAdult && Listener.IsAdult && subject.IsFemale";
			Line = "$d.npcChat.LeaderDead.bad.line.rich2.IsFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.LeaderDead.bad.answersAll";
					Topic = "d.npcChat.LeaderDead.bad.answersIsFemale";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.LeaderDead.bad.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.LeaderDead.bad.answersIsMale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor3.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com3.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich1.IsMale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich3";
				},
			};
		},
		Topic 
		{
			Id = "d.npcChat.LeaderDead.bad.answersIsFemale";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Poor";
					Line = "$d.npcChat.LeaderDead.bad.answer.poor3.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com1";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Commoner";
					Line = "$d.npcChat.LeaderDead.bad.answer.com3.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich1.IsFemale";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich2";
				},
				Topic 
				{
					Enabled = "Listener.SocialCaste == Rich";
					Line = "$d.npcChat.LeaderDead.bad.answer.rich3";
				},
			};
		},
	};
},


// random talk about the bad gravedigger
Dialogue
{
	Id = "d.npcChat.gravedigger";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Enabled = "";
			Line = "$d.npcChat.gravedigger.line.1";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.gravedigger.answersAll";
					Topic = "d.npcChat.gravedigger.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "";
			Line = "$d.npcChat.gravedigger.line.2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.gravedigger.answersAll";
					Topic = "d.npcChat.gravedigger.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.gravedigger.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.gravedigger.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "";
					Line = "$d.npcChat.gravedigger.answer.1";
				},
				Topic 
				{
					Enabled = "";
					Line = "$d.npcChat.gravedigger.answer.2";
				},
			};
		},
	};
},


// random talk about the barber and the hot tub
Dialogue
{
	Id = "d.npcChat.barber";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Enabled = "Target.IsMale";
			Line = "$d.npcChat.barber.line.1.ToMale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.barber.answersAll";
					Topic = "d.npcChat.barber.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "!Target.IsMale";
			Line = "$d.npcChat.barber.line.1.ToFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.barber.answersAll";
					Topic = "d.npcChat.barber.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "Target.IsMale";
			Line = "$d.npcChat.barber.line.2.ToMale";
			Next = array 
			{
				TopicLink
				{
					Dialogue = "d.npcChat.barber.answersAll";
					Topic = "d.npcChat.barber.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "!Target.IsMale";
			Line = "$d.npcChat.barber.line.2.ToFemale";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.barber.answersAll";
					Topic = "d.npcChat.barber.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.barber.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.barber.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "Source.IsMale";
					Line = "$d.npcChat.barber.answer.1.ToMale";
				},
				Topic 
				{
					Enabled = "Source.IsMale";
					Line = "$d.npcChat.barber.answer.2.ToMale";
				},
				Topic 
				{
					Enabled = "!Source.IsMale";
					Line = "$d.npcChat.barber.answer.1.ToFemale";
				},
				Topic 
				{
					Enabled = "!Source.IsMale";
					Line = "$d.npcChat.barber.answer.2.ToFemale";
				},
			};
		},
	};
},


// random talk about bathing
Dialogue
{
	Id = "d.npcChat.bath";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Enabled = "";
			Line = "$d.npcChat.bath.line.1";
			Next = array 
			{
				TopicLink
				{
					Dialogue = "d.npcChat.bath.answersAll";
					Topic = "d.npcChat.bath.answers";
				},
			};
		},
		Topic 
		{
			Enabled = "";
			Line = "$d.npcChat.bath.line.2";
			Next = array 
			{
				TopicLink 
				{
					Dialogue = "d.npcChat.bath.answersAll";
					Topic = "d.npcChat.bath.answers";
				},
			};
		},
	};
},

Dialogue 
{
	Id = "d.npcChat.bath.answersAll";
	BranchType = "Pick";
	Topics = array 
	{
		Topic 
		{
			Id = "d.npcChat.bath.answers";
			Speaker = "Switch";
			Next = array 
			{
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npcChat.bath.answer.poor1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Poor";
					Line = "$d.npcChat.bath.answer.poor2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npcChat.bath.answer.com1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Commoner";
					Line = "$d.npcChat.bath.answer.com2";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npcChat.bath.answer.rich1";
				},
				Topic 
				{
					Enabled = "SocialCaste == Rich";
					Line = "$d.npcChat.bath.answer.rich2";
				},
			};
		},
	};
},
