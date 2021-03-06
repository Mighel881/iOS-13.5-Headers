/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDHeartbeatDatum : NSObject {

	BOOL _precededByGap;
	double _timeSinceSequenceStart;

}

@property (nonatomic,readonly) double timeSinceSequenceStart;              //@synthesize timeSinceSequenceStart=_timeSinceSequenceStart - In the implementation block
@property (nonatomic,readonly) BOOL precededByGap;                         //@synthesize precededByGap=_precededByGap - In the implementation block
+(id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(BOOL)arg2 ;
-(double)timeSinceSequenceStart;
-(BOOL)precededByGap;
@end

