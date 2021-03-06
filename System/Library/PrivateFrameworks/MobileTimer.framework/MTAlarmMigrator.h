/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MTAlarm;

@interface MTAlarmMigrator : NSObject {

	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                 //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(NSMutableArray *)alarms;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;
-(MTAlarm *)sleepAlarm;
-(void)cleanUpOldNotifications;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
@end

