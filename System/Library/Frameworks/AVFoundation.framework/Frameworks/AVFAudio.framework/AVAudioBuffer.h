/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioFormat * format; 
@property (nonatomic,readonly) const AudioBufferList* audioBufferList; 
@property (nonatomic,readonly) AudioBufferList* mutableAudioBufferList; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AVAudioFormat *)format;
-(unsigned)byteLength;
-(void)setByteLength:(unsigned)arg1 ;
-(id)initWithFormat:(id)arg1 byteCapacity:(unsigned)arg2 ;
-(unsigned)byteCapacity;
-(const AudioBufferList*)audioBufferList;
-(AudioBufferList*)mutableAudioBufferList;
@end

