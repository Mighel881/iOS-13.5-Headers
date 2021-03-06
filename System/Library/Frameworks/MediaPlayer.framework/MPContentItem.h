/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject {

	void* _mediaRemoteContentItem;
	MPMediaItemArtwork* _artwork;

}

@property (nonatomic,readonly) void* _mediaRemoteContentItem;                              //@synthesize mediaRemoteContentItem=_mediaRemoteContentItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork;                                 //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) float playbackProgress; 
@property (assign,getter=isStreamingContent,nonatomic) BOOL streamingContent; 
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent; 
@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
+(BOOL)shouldPushArtworkData;
+(BOOL)isSuppressingChangeNotifications;
+(void)performSuppressingChangeNotifications:(/*^block*/id)arg1 ;
+(void)performChangeImmediately:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setContainer:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(MPMediaItemArtwork *)artwork;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(BOOL)isPlayable;
-(BOOL)isExplicitContent;
-(void*)_mediaRemoteContentItem;
-(id)initWithExternalRepresentation:(id)arg1 ;
-(id)_initWithMediaRemoteContentItem:(void*)arg1 ;
-(id)createExternalRepresentation;
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(BOOL)isContainer;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)isStreamingContent;
-(void)setStreamingContent:(BOOL)arg1 ;
-(void)setPlayable:(BOOL)arg1 ;
-(void)_postItemChangedNotificationWithDeltaBlock:(/*^block*/id)arg1 ;
-(void)_loadArtwork:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

