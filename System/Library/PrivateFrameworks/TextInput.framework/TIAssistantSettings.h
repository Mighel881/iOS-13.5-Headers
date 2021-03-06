/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIAssistantSettings : NSObject
+(void)launchKeyboardSettings;
+(void)launchDictationSettings;
+(void)dismissDialog;
+(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)dismissEnableDictationPrompt;
+(void)promptToEnableDictationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissedDataSharingWithResponse:(long long)arg1 ;
+(void)setTestBlock:(/*^block*/id)arg1 ;
+(void)connectForOperations:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)promptToRemindDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissEnableDataSharingPrompt;
@end

