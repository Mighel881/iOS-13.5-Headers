/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FIUIChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;

@required
-(unsigned long long)numberOfDataSetsInGroup:(id)arg1;
-(unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;

@end
