/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCameraPlaybackEngine, NSOperationQueue, HFPosterFrameImageCache, NSMutableDictionary;

@interface HFPosterFrameManager : NSObject {

	HFCameraPlaybackEngine* _playbackEngine;
	NSOperationQueue* _posterFrameQueue;
	HFPosterFrameImageCache* _imageCache;
	NSMutableDictionary* _posterFrameObservers;
	NSMutableDictionary* _generationObservers;
	NSMutableDictionary* _inProgressOperations;

}

@property (nonatomic,retain) NSOperationQueue * posterFrameQueue;                         //@synthesize posterFrameQueue=_posterFrameQueue - In the implementation block
@property (nonatomic,retain) HFPosterFrameImageCache * imageCache;                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * posterFrameObservers;                  //@synthesize posterFrameObservers=_posterFrameObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * generationObservers;                   //@synthesize generationObservers=_generationObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inProgressOperations;                  //@synthesize inProgressOperations=_inProgressOperations - In the implementation block
@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
+(id)sharedManager;
+(id)clipIdentifierStringFromDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(HFPosterFrameImageCache *)imageCache;
-(void)setImageCache:(HFPosterFrameImageCache *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2 ;
-(void)purgePosterFrames;
-(double)_timeScaleAdjustedOffset:(double)arg1 ;
-(id)_cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2 ;
-(id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2 ;
-(void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 ;
-(void)_generateMissingPosterFrameImagesForClip:(id)arg1 observer:(id)arg2 ;
-(NSMutableDictionary *)posterFrameObservers;
-(id)keyForClip:(id)arg1 timeOffset:(double)arg2 ;
-(NSMutableDictionary *)inProgressOperations;
-(void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4 ;
-(id)_posterFrameObserversForKey:(id)arg1 ;
-(void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3 ;
-(NSOperationQueue *)posterFrameQueue;
-(id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2 ;
-(id)keyForClip:(id)arg1 ;
-(NSMutableDictionary *)generationObservers;
-(void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3 ;
-(void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3 ;
-(void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3 ;
-(void)setPosterFrameQueue:(NSOperationQueue *)arg1 ;
-(void)setPosterFrameObservers:(NSMutableDictionary *)arg1 ;
-(void)setGenerationObservers:(NSMutableDictionary *)arg1 ;
-(void)setInProgressOperations:(NSMutableDictionary *)arg1 ;
@end
