/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARSessionMetricsReporting;
@class ARConfiguration, NSDate, ARFrame;

@interface ARSessionMetrics : NSObject {

	id<ARSessionMetricsReporting> _reporter;
	BOOL _isAutoFocusEnabled;
	BOOL _sessionWasThrottled;
	float _timeUntilThrottling;
	float _badFramePercentage10;
	float _badFramePercentage60;
	float _badFramePercentageMoreThan60;
	Class _configClass;
	ARConfiguration* _currentConfiguration;
	NSDate* _startDate;
	NSDate* _frameStartDate;
	double _sessionTimeForLastBadFrameRecording;
	BOOL _initializingVIO;
	unsigned long long _frameCount;
	unsigned long long _badFrameCount;
	double _vioInitializationTime;
	BOOL _positionInitialized;
	 _minPos;
	 _maxPos;
	ARFrame* _lastUpdatedFrame;
	unsigned long long _currentVIOMapSize;
	unsigned long long _numberOfCameraSwitches;
	unsigned long long _numberOfReinitializationAttempts;
	BOOL _hasInitialWorldMap;
	BOOL _relocalizingToInitialWorldMap;
	unsigned long long _raycastCount;

}
+(id)getRenderEngineString:(id)arg1 ;
+(void)setRenderType:(unsigned long long)arg1 ;
+(void)recordHitTest:(unsigned long long)arg1 ;
-(id)init;
-(id)queue;
-(id)initWithReporter:(id)arg1 ;
-(void)_recordSessionEnd;
-(void)_recordBadFramePercentageFinal:(BOOL)arg1 ;
-(void)sessionStarted:(id)arg1 withConfiguration:(id)arg2 ;
-(void)sessionDidUpdateFrame:(id)arg1 ;
-(void)sessionUpdateThermalState:(long long)arg1 ;
-(void)recordSaveMap:(long long)arg1 numberOfFeaturePoints:(unsigned long long)arg2 ;
-(void)recordRaycast:(id)arg1 tracked:(BOOL)arg2 ;
-(void)reportSessionFailure:(id)arg1 ;
-(void)sessionStopped;
@end

