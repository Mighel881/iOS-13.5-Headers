/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSMutableSet;

@interface SESAlarm : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSMapTable* registered;
	NSMutableSet* pendingAlarms;

}
+(id)sharedObject;
+(void)kickoff;
+(BOOL)registerAlarm:(id)arg1 handler:(id)arg2 ;
+(void)deregisterAlarm:(id)arg1 ;
+(void)clearAlarm:(id)arg1 ;
+(void)setAlarm:(id)arg1 secondsFromNow:(double)arg2 ;
+(BOOL)isAlarmSet:(id)arg1 ;
-(id)init;
-(void)_handleAlarmFired:(id)arg1 ;
@end

