/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MSMoveTriageAction.h>

@interface MSJunkTriageAction : MSMoveTriageAction

@property (nonatomic,readonly) BOOL hasNonJunkMessages; 
+(BOOL)hasNonJunkMessagesInSelection:(id)arg1 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 ;
-(BOOL)hasNonJunkMessages;
@end

