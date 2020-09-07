/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIWorkoutSplit : NSObject {

	double _distanceInMeters;
	double _duration;

}

@property (assign,nonatomic) double distanceInMeters;              //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)distanceInMeters;
-(void)setDistanceInMeters:(double)arg1 ;
-(id)initWithDistance:(double)arg1 duration:(double)arg2 ;
@end
