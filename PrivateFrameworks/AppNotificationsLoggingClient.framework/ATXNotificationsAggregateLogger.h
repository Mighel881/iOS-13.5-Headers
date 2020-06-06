/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {

	PETScalarEventTracker* _rttSelectionTracker;
	PETScalarEventTracker* _rttFromTracker;

}
+(id)sharedInstance;
+(id)rtFromMapping;
+(id)rtOutcomesMapping;
+(id)stringForRTOutcome:(unsigned long long)arg1 ;
+(id)stringForRTFrom:(unsigned long long)arg1 ;
-(id)init;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 ;
@end
