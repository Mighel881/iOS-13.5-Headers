/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/ETMessage.h>

@class NSMutableArray, NSURL, UIImage, ETSketchMessage, NSArray;

@interface ETVideoMessage : ETMessage {

	NSMutableArray* _playingMessages;
	double _compressedTimeTotal;
	double _compressedTimeLastEventTime;
	double _messageDuration;
	BOOL _pauseTimeCompression;
	NSURL* _mediaURL;
	UIImage* _stillImage;
	ETSketchMessage* _introMessage;
	unsigned long long _mediaType;

}

@property (nonatomic,retain) NSArray * playingMessages; 
@property (nonatomic,retain) NSURL * mediaURL;                            //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) UIImage * stillImage;                        //@synthesize stillImage=_stillImage - In the implementation block
@property (nonatomic,retain) ETSketchMessage * introMessage;              //@synthesize introMessage=_introMessage - In the implementation block
@property (assign,nonatomic) unsigned long long mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL canCompressTime; 
@property (assign,nonatomic) BOOL pauseTimeCompression;                   //@synthesize pauseTimeCompression=_pauseTimeCompression - In the implementation block
+(unsigned short)messageType;
-(id)init;
-(unsigned long long)mediaType;
-(BOOL)isAnimated;
-(id)archiveData;
-(void)setMediaType:(unsigned long long)arg1 ;
-(NSURL *)mediaURL;
-(void)setMediaURL:(NSURL *)arg1 ;
-(id)initWithArchiveData:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(unsigned long long)_mediaTypeFromETPVideoType:(int)arg1 ;
-(int)_etpMediaTypeFromETMediaType:(unsigned long long)arg1 ;
-(void)setPlayingMessages:(NSArray *)arg1 ;
-(void)setIntroMessage:(ETSketchMessage *)arg1 ;
-(BOOL)shouldLoopDuringPlayback;
-(NSArray *)playingMessages;
-(BOOL)canCompressTime;
-(double)compressTimeSinceStartOfMessage:(double)arg1 ;
-(UIImage *)stillImage;
-(void)setStillImage:(UIImage *)arg1 ;
-(ETSketchMessage *)introMessage;
-(BOOL)pauseTimeCompression;
-(void)setPauseTimeCompression:(BOOL)arg1 ;
@end

