/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimationTarget;

@interface PDParallelTimeNodeBuildInfo : NSObject {

	PDAnimationTarget* mTarget;
	double mDelay;
	double mDuration;
	int mIterateType;
	id mValue;

}

@property (retain) PDAnimationTarget * target; 
@property (assign) double delay; 
@property (assign) double duration; 
@property (assign) int iterateType; 
@property (retain) id value; 
-(void)setTarget:(PDAnimationTarget *)arg1 ;
-(PDAnimationTarget *)target;
-(id)value;
-(void)setValue:(id)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(int)iterateType;
-(void)setIterateType:(int)arg1 ;
@end

