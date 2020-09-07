/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoImpressionTracking <NSObject>
@property (setter=uponThresholdImpression:,nonatomic,copy) id thresholdImpressionBlock; 
@property (setter=uponQuartileImpression:,nonatomic,copy) id quartileImpressionBlock; 
@property (getter=hasPassedImpressionThreshold,nonatomic,readonly) BOOL passedImpressionThreshold; 
@property (nonatomic,readonly) double impressionThreshold; 
@property (nonatomic,readonly) unsigned long long quartile; 
@required
-(double)impressionThreshold;
-(unsigned long long)quartile;
-(void)uponQuartileImpression:(/*^block*/id)arg1;
-(void)uponThresholdImpression:(/*^block*/id)arg1;
-(BOOL)hasPassedImpressionThreshold;
-(id)thresholdImpressionBlock;
-(id)quartileImpressionBlock;

@end
