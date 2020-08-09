/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIIntervalController.h>

@class NSDate, FIIntervalQuantityTrigger, FIMutableTimeSliceGroup;

@interface FIQuantityIntervalController : NSObject <FIIntervalController> {

	FIIntervalQuantityTrigger* _quantityTrigger;
	FIMutableTimeSliceGroup* _sliceGroup;

}

@property (nonatomic,readonly) BOOL intervalComplete; 
@property (nonatomic,readonly) NSDate * intervalEndDate; 
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
-(void)addSample:(id)arg1 ;
-(BOOL)allSlicesFinalized;
-(BOOL)_updateTriggerWithSample:(id)arg1 ;
-(BOOL)intervalComplete;
-(id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4 ;
-(BOOL)isIntervalEndDate;
@end
