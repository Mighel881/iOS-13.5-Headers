/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>
@required
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

