Dialogue
{
    Id = "d.act.GiftingSomeone";
    BranchType = "Pick";
    Topics = array
    {
        Topic
        {
            Line = "$GiftingSomeone.intro";
            Speaker = "Source";
            BranchType = "UserChoice";
            Enabled = "Source.IsAdult";
            
            TopicResult = ResultObject
            {
                Results = array
                {
                    FunctionPlayRandomReaction
                    {
                        ApplyTo = "Source";
                        Animations = array { "talk1" };
                    },
                    FunctionPlayRandomReaction
                    {
                        ApplyTo = "Target";
                        Animations = array { "talk1" };
                    }
                };
            };

            Next = array
            {
                // First option - nothing
                Topic
                {
                    ShortLine = "$d.act.GiftingSomeone.Cancel";
                };
                
                // Second option - LovingStone
                Topic
                {
                    ShortLine = "$action.LovingStone";
                    Line = "$d.act.GiftingSomeone.LovingStone";
                    BranchType = "Pick";
                    Enabled = "Source.IsAdult";

                    DisplayAction = "LovingStone";
                    
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionPlayRandomReaction
                            {
                                ApplyTo = "Target";
                                Animations = array { "accept1" };
                                VoiceOvers = array { 358 };
                            }
                        };
                    };
                    
                    ConversationResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionTriggerAction
                            {
                                ApplyTo = "Source";
                                Actions = array{ "LovingStone" };
                                ActionTarget = "FromTargetProfile";
                            }
                        };
                    };
                };

                // Third option - Socks
                Topic
                {
                    ShortLine = "$action.GiftingSocks";
                    Line = "$d.act.GiftingSomeone.GiftingSocks";
                    BranchType = "Pick";
                    Enabled = "Source.IsAdult";

                    DisplayAction = "GiftingSocks";

                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionPlayRandomReaction
                            {
                                ApplyTo = "Target";
                                Animations = array { "accept1" };
                                VoiceOvers = array { 358 };
                            }
                        };
                    };
                    
                    ConversationResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionTriggerAction
                            {
                                ApplyTo = "Source";
                                Actions = array{ "GiftingSocks" };
                                ActionTarget = "FromTargetProfile";
                            }
                        };
                    };
                };

                // Fourth option - Engagement Ring
                Topic 
                {
                    ShortLine = "$action.EngageRing";
                    Line = "$d.act.GiftingSomeone.EngageRing";
                    BranchType = "Pick";
                    Enabled = "Source.IsAdult";

                    DisplayAction = "EngagementRing";

                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionPlayRandomReaction
                            {
                                ApplyTo = "Target";
                                Animations = array { "accept1" };
                                VoiceOvers = array { 358 };
                            }
                        };
                    };
                    
                    ConversationResult = ResultObject
                    {
                        Results = array
                        {
                            FunctionTriggerAction
                            {
                                ApplyTo = "Source";
                                Actions = array{ "EngagementRing" };
                                ActionTarget = "FromTargetProfile";
                            }
                        };
                    };
                };
            };
        };
    };
};