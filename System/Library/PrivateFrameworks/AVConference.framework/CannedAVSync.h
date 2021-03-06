/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CannedAVSync : NSObject {

	double _base;
	double _modulo;

}

@property (assign,nonatomic) double base;                //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) double modulo;              //@synthesize modulo=_modulo - In the implementation block
+(id)sharedCannedAVSync;
-(id)init;
-(void)clear;
-(void)setBase:(double)arg1 ;
-(double)base;
-(double)clampForTime:(double)arg1 ;
-(void)addDrift:(double)arg1 ;
-(void)addStreamWithCount:(int)arg1 rate:(double)arg2 ;
-(double)modulo;
-(void)setModulo:(double)arg1 ;
@end

