/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, PHAsset;


@protocol MiroClip <MiroClip_Shim,NSObject>
@property (assign,nonatomic) int startTime; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int maxDuration; 
@property (nonatomic,readonly) float sourceStartTime; 
@property (nonatomic,readonly) float sourceDuration; 
@property (nonatomic,readonly) int rawSourceDuration; 
@property (nonatomic,readonly) NSArray * multiUpContainedClips; 
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (nonatomic,readonly) BOOL isSlomo; 
@property (assign,nonatomic) BOOL audioEnabled; 
@required
-(int)duration;
-(PHAsset *)asset;
-(void)setDuration:(int)arg1;
-(int)startTime;
-(void)setStartTime:(int)arg1;
-(void)setAudioEnabled:(BOOL)arg1;
-(int)maxDuration;
-(void)setMaxDuration:(int)arg1;
-(BOOL)audioEnabled;
-(CGSize)naturalSizeWithTransform;
-(float)sourceStartTime;
-(float)sourceDuration;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3;
-(BOOL)isSlomo;
-(NSArray *)multiUpContainedClips;
-(int)rawSourceDuration;

@end

