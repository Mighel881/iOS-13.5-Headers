/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const WordTimingInfo* _root;

}

@property (nonatomic,readonly) NSString * word; 
@property (nonatomic,readonly) unsigned sample_idx; 
@property (nonatomic,readonly) unsigned offset; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) float timestamp; 
+(id)vs_wordTimingInfos:(id)arg1 withText:(id)arg2 ;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)timestamp;
-(unsigned)offset;
-(NSString *)word;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::WordTimingInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 ;
-(unsigned)sample_idx;
@end

