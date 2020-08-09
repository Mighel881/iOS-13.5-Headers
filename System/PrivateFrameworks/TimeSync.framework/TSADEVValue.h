/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSADEVValue : NSObject {

	double _observationInterval;
	double _adev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double adev;                             //@synthesize adev=_adev - In the implementation block
-(id)description;
-(double)observationInterval;
-(id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2 ;
-(double)adev;
@end
