/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioDecoderDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioDecoderDelegate> _delegate;

}

@property (__weak) id<CSAudioDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)opusDecoder;
-(id<CSAudioDecoderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioDecoderDelegate>)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned)arg5 ;
@end

