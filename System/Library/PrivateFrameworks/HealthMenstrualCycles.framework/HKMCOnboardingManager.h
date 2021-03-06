/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, HKMenstrualCyclesStore, HKKeyValueDomain, NSDate, HKQuantity;

@interface HKMCOnboardingManager : NSObject {

	HKHealthStore* _healthStore;
	HKMenstrualCyclesStore* _menstrualCyclesStore;
	HKKeyValueDomain* _keyValueDomain;

}

@property (getter=isOnboardingCompleted,nonatomic,readonly) BOOL onboardingCompleted; 
@property (nonatomic,copy,readonly) NSDate * onboardingFirstCompletedDate; 
@property (nonatomic,readonly) HKQuantity * userEnteredCycleLength; 
@property (nonatomic,readonly) HKQuantity * userEnteredPeriodLength; 
-(id)initWithHealthStore:(id)arg1 ;
-(BOOL)isOnboardingCompleted;
-(NSDate *)onboardingFirstCompletedDate;
-(HKQuantity *)userEnteredCycleLength;
-(HKQuantity *)userEnteredPeriodLength;
-(void)setOnboardingCompletedWithUserEnteredCycleLength:(id)arg1 userEnteredPeriodLength:(id)arg2 userEnteredLastPeriodStartDay:(id)arg3 ;
-(void)resetOnboarding;
@end

