/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {

	int _maxBufferCount;
	NSMutableDictionary* _bufferPool;

}
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
@end

