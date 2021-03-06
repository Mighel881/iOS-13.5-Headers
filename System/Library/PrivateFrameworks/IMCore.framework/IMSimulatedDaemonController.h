/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(id)sharedInstance;
+(void)beginSimulatingDaemon;
+(id)dictionaryForChat:(id)arg1 ;
-(NSArray *)listeners;
-(BOOL)isConnected;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)setListeners:(NSArray *)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
@end

