/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMInstrumental <NSCopying>
@optional
-(void)willStartAtEstimatedTime:(unsigned long long)arg1;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;

@required
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2;

@end

