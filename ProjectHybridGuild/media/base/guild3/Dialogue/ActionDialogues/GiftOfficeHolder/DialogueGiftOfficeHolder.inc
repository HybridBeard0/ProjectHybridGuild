//Gift Office holder dialogue
Dialogue
{
    Id = "d.act.GiftOfficeHolder";
    BranchType = "Pick";
    Topics = array
    {
        //male to male
        Topic
        {
            Line = "$d.q.instructionToActiveDialogue";
            Speaker = "Source";
            BranchType = "UserChoice";
            Enabled = "Source.IsMale && Target.IsMale";
            @base/FormulaOption1GiftOfficeHolder
            Next = array
            {
                //First option - INT
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.int";
                    Line = "$d.act.bribeOH.fullLine.int";
                    BranchType = "Pick";
                    @base/FormulaOption1GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.int";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.int";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.int";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.int";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };
                //Second option - INTIM
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.intim";
                    Line = "$d.act.bribeOH.fullLine.intim";
                    BranchType = "Pick";
                    @base/FormulaOption2GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.intim";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.intim";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.intim";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.intim";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };		
                //Third option - CHA
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.cha";
                    Line = "$d.act.bribeOH.fullLine.cha";
                    BranchType = "Pick";
                    @base/FormulaOption3GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.cha";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.cha";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.cha";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.cha";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }					
                    };
                };
            };
        },
        
        //Male to female (change loca keys here if some lines need to be different in some languages)
        Topic
        {
            Line = "$d.q.instructionToActiveDialogue";
            Speaker = "Source";
            BranchType = "UserChoice";
            Enabled = "Source.IsMale && !Target.IsMale";
            @base/FormulaOption1GiftOfficeHolder
            Next = array
            {
                //First option - INT
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.int";
                    Line = "$d.act.bribeOH.fullLine.int";
                    BranchType = "Pick";
                    @base/FormulaOption1GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.int";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.int";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.int";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.int";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };
                //Second option - INTIM
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.intim";
                    Line = "$d.act.bribeOH.fullLine.intim";
                    BranchType = "Pick";
                    @base/FormulaOption2GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.intim";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.intim";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.intim";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.intim";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };		
                //Third option - CHA
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.cha";
                    Line = "$d.act.bribeOH.fullLine.cha";
                    BranchType = "Pick";
                    @base/FormulaOption3GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.cha";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.cha";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.cha";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.cha";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }					
                    };
                };
            };
        },
        
        //Female to Male (change loca keys here if some lines need to be different in some languages)
        Topic
        {
            Line = "$d.q.instructionToActiveDialogue";
            Speaker = "Source";
            BranchType = "UserChoice";
            Enabled = "!Source.IsMale && Target.IsMale";
            @base/FormulaOption1GiftOfficeHolder
            Next = array
            {
                //First option - INT
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.int";
                    Line = "$d.act.bribeOH.fullLine.int";
                    BranchType = "Pick";
                    @base/FormulaOption1GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.int";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.int";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.int";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.int";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };
                //Second option - INTIM
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.intim";
                    Line = "$d.act.bribeOH.fullLine.intim";
                    BranchType = "Pick";
                    @base/FormulaOption2GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.intim";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.intim";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.intim";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.intim";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };		
                //Third option - CHA
                Topic
                {
                    ShortLine = "$d.act.bribeOH.openLine.cha";
                    Line = "$d.act.bribeOH.fullLine.cha";
                    BranchType = "Pick";
                    @base/FormulaOption3GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.csAnswer.cha";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.sAnswer.cha";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.fAnswer.cha";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOH.cfAnswer.cha";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }					
                    };
                };
            };
        },

        //Female to Female v5
        Topic
        {
            Line = "$d.q.instructionToActiveDialogue";
            Speaker = "Source";
            BranchType = "UserChoice";
            Enabled = "!Source.IsMale && !Target.IsMale";
            @base/FormulaOption1GiftOfficeHolder
            Next = array
            {
                //First option - INT
                Topic
                {
                    ShortLine = "$d.act.bribeOff.openLine.v5.int_rp";
                    Line = "$d.act.bribeOff.fullLine.v5.int_rp";
                    BranchType = "Pick";
                    @base/FormulaOption1GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.csAnswer.v5.int_rp";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.sAnswer.v5.int_rp";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.fAnswer.v5.int_rp";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.cfAnswer.v5.int_rp";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };
                //Second option - INTIM
                Topic
                {
                    ShortLine = "$d.act.bribeOff.openLine.v5.intim_rp.toFemale";
                    Line = "$d.act.bribeOff.fullLine.v5.intim_rp.toFemale";
                    BranchType = "Pick";
                    @base/FormulaOption2GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.csAnswer.v5.intim_rp.female";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.sAnswer.v5.intim_rp";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.fAnswer.v5.intim_rp"; 
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.cfAnswer.v5.intim_rp"; 
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }						
                    };
                };		
                //Third option - CHA
                Topic
                {
                    ShortLine = "$d.act.bribeOff.openLine.v5.char_rp";
                    Line = "$d.act.bribeOff.fullLine.v5.char_rp";
                    BranchType = "Pick";
                    @base/FormulaOption3GiftOfficeHolder
                    TopicResult = ResultObject
                    {
                        Results = array
                        {
                            @base/SourceSmearing,
                            @base/TargetListen
                        };
                    };
                    Next = array
                    {
                        //Crit Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.csAnswer.v5.char_rp";
                            @base/CommonSettingsCritSuccessGiftOfficeHolder
                        },
                        //Success reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.sAnswer.v5.char_rp";
                            @base/CommonSettingsSuccessGiftOfficeHolder
                        },
                        //Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.fAnswer.v5.char_rp";
                            @base/CommonSettingsFailureGiftOfficeHolder
                        },
                        // crit Failure reply
                        Topic
                        {
                            Line = "$d.act.bribeOff.cfAnswer.v5.char_rp";
                            @base/CommonSettingsCritFailureGiftOfficeHolder
                        }					
                    };
                };
            };
        },
    };
};