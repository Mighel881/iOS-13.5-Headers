/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INSearchForMessagesIntentHandling <NSObject>
@optional
-(void)confirmSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveDateTimeRangeForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveGroupNamesForSearchForMessages:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSearchForMessages:(id)arg1 completion:(/*^block*/id)arg2;

@end

