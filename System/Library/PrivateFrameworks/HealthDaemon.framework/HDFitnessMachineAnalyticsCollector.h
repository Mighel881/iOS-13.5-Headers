/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDAWDHealthKitGymKitWorkoutEvent, HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject {

	HDAWDHealthKitGymKitWorkoutEvent* _gymKitWorkoutEvent;
	HKPersistentTimer* _authorizationTimer;

}

@property (nonatomic,retain) HDAWDHealthKitGymKitWorkoutEvent * gymKitWorkoutEvent;              //@synthesize gymKitWorkoutEvent=_gymKitWorkoutEvent - In the implementation block
@property (nonatomic,retain) HKPersistentTimer * authorizationTimer;                             //@synthesize authorizationTimer=_authorizationTimer - In the implementation block
-(id)init;
-(void)_reset;
-(void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2 ;
-(void)workoutEnded;
-(void)workoutFailedWithError:(id)arg1 ;
-(void)userIsAuthorized;
-(void)userBeganPairing;
-(void)_recordTimeToAuthorize;
-(long long)_failureReasonForError:(id)arg1 ;
-(HDAWDHealthKitGymKitWorkoutEvent *)gymKitWorkoutEvent;
-(void)setGymKitWorkoutEvent:(HDAWDHealthKitGymKitWorkoutEvent *)arg1 ;
-(HKPersistentTimer *)authorizationTimer;
-(void)setAuthorizationTimer:(HKPersistentTimer *)arg1 ;
@end

