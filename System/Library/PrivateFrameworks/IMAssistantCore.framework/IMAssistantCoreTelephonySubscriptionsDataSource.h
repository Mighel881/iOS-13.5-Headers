/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMAssistantCoreTelephonySubscriptionsDataSource <NSObject>
@property (nonatomic,readonly) BOOL deviceHasMultipleSubscriptions; 
@required
-(BOOL)deviceHasMultipleSubscriptions;
-(id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;
-(id)handleIDForSenderIdentity:(id)arg1;
-(id)simIDForSenderIdentity:(id)arg1;

@end

