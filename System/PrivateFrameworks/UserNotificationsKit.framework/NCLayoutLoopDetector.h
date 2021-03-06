/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NCLayoutLoopDetector : NSObject {

	NSMutableArray* _notificationLayoutsInProgress;

}

@property (retain) NSMutableArray * notificationLayoutsInProgress;              //@synthesize notificationLayoutsInProgress=_notificationLayoutsInProgress - In the implementation block
-(id)init;
-(id)_savedNotificationLayoutsInProgress;
-(void)_saveNotificationLayoutsInProgress;
-(BOOL)layoutInProgressContainsNotificationRequest:(id)arg1 ;
-(void)addNotificationRequestToLayoutsInProgress:(id)arg1 ;
-(void)removeNotificationRequestFromLayoutsInProgress:(id)arg1 ;
-(NSMutableArray *)notificationLayoutsInProgress;
-(void)setNotificationLayoutsInProgress:(NSMutableArray *)arg1 ;
@end

