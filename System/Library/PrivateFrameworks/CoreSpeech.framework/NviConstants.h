/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface NviConstants : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)inputRecordingSampleBitDepth;
+(AudioStreamBasicDescription)nviDirectionalityLpcmNonInterleavedASBD;
+(AudioStreamBasicDescription)nviDirectionalityLpcmInterleavedASBD;
+(unsigned)numChannelsForNviDirectionality;
+(unsigned)nviDirectionalityStartingChannelId;
+(unsigned)nviDirectionalityEndingChannelId;
+(AudioStreamBasicDescription)monoChannelLpcmASBD;
+(AudioStreamBasicDescription)allChannelsLpcmInterleavedASBD;
+(AudioStreamBasicDescription)allChannelsLpcmNonInterleavedASBD;
+(id)nviLogsRootDir;
@end
