/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate; 
@property (nonatomic,readonly) BOOL canProcessCurrentRequest; 
@property (assign,nonatomic) unsigned long long activeChannel; 
@property (nonatomic,readonly) NSString * endpointerModelVersion; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
@optional
-(void)processServerEndpointFeatures:(id)arg1;
-(void)updateEndpointerThreshold:(float)arg1;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1;
-(NSString *)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;

@required
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
-(void)processAudioSamplesAsynchronously:(id)arg1;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1;
-(double)trailingSilenceDurationAtEndpoint;
-(id<CSEndpointAnalyzerImplDelegate>)implDelegate;
-(void)setImplDelegate:(id)arg1;
-(BOOL)canProcessCurrentRequest;

@end

