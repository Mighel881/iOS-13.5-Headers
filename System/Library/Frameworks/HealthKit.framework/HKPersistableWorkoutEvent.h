/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSDateInterval, NSError, NSDictionary;


@protocol HKPersistableWorkoutEvent
@property (nonatomic,copy,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) long long workoutEventType; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSDictionary * metadata; 
@required
-(NSError *)error;
-(NSDictionary *)metadata;
-(NSDateInterval *)dateInterval;
-(NSUUID *)sessionUUID;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
-(long long)workoutEventType;

@end

