/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface CFXAnalyticsManager : NSObject {

	NSMutableArray* _analyticsDurationData;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * analyticsDurationData;              //@synthesize analyticsDurationData=_analyticsDurationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)trackEventWithName:(id)arg1 ;
-(void)trackFilterWithEffectId:(id)arg1 ;
-(void)trackAnimojiWithEffectId:(id)arg1 ;
-(void)trackShapeWithEffectId:(id)arg1 ;
-(void)trackLabelWithEffectId:(id)arg1 ;
-(void)trackMessagesStickerWithEffectId:(id)arg1 ;
-(void)trackEmojiStickerWithEffectId:(id)arg1 ;
-(void)trackMediaSentWithAnimoji:(BOOL)arg1 video:(BOOL)arg2 frontCamera:(BOOL)arg3 filterCount:(unsigned long long)arg4 labelCount:(unsigned long long)arg5 messagesStickerCount:(unsigned long long)arg6 shapeCount:(unsigned long long)arg7 emojiStickerCount:(unsigned long long)arg8 ;
-(BOOL)checkIfEventExistsWithName:(id)arg1 ;
-(void)persistAnalyticsDataWithEventName:(id)arg1 value:(double)arg2 ;
-(unsigned long long)roundWithNumber:(unsigned long long)arg1 ;
-(id)CFX_composedAnalyticsKeyWithAnimoji:(BOOL)arg1 video:(BOOL)arg2 frontCamera:(BOOL)arg3 effectType:(id)arg4 ;
-(id)appendAppbundleWithEvent:(id)arg1 ;
-(NSMutableArray *)analyticsDurationData;
-(id)dictionaryWithEventName:(id)arg1 value:(double)arg2 ;
-(BOOL)isIncrementScalar:(id)arg1 ;
-(BOOL)isDistribution:(id)arg1 ;
-(void)trackEventWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)startTrackingTimeIntervalEventWithName:(id)arg1 ;
-(void)stopTrackingTimeIntervalEventWithName:(id)arg1 ;
-(void)setAnalyticsDurationData:(NSMutableArray *)arg1 ;
@end
