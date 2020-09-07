/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRestrictionsPINController.h>

@interface STRestrictionsPINController : PSRestrictionsPINController

@property (assign,nonatomic,__weak) id<STRestrictionsPINControllerDelegate> pinDelegate; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setPIN:(id)arg1 ;
-(id)pinInstructionsPrompt;
-(void)recoveryAuthenticationSucceededForPasscode:(id)arg1 ;
-(void)recoveryAuthenticationFailed:(id)arg1 ;
-(void)_setOptionsTitle:(id)arg1 optionsHandler:(/*^block*/id)arg2 ;
@end
