/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {

	AVSynchronizedLayerInternal* _syncLayer;

}

@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(id)synchronizedLayerWithPlayerItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_removeSelfFromPlayerItem;
@end
