/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFPasscodeViewControllerDelegate
@optional
-(BOOL)passcodeViewControllerAllowSkip:(id)arg1;
-(void)passcodeViewControllerWillSetPasscode:(id)arg1;
-(void)passcodeViewController:(id)arg1 didSetPasscode:(id)arg2;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;

@required
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;

@end
