/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, HKActivityCache, NSArray, HKUnit, NSNumber, HKActivityChartPointSummary, NSString;

@interface HKActivityChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	HKActivityCache* _activityCache;
	NSArray* _workouts;
	HKUnit* _unit;
	NSNumber* _activeEnergyBurnedMinusWorkouts;
	NSNumber* _workoutActiveEnergyBurned;
	NSArray* _workoutTimes;
	HKActivityChartPointSummary* _summary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(id)yValue;
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(void)_calculateEnergyBurned;
-(void)_populateWorkoutTimes;
-(void)_createSummary;
-(id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3 ;
@end

