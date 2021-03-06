/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue;
#import <AppleDepth/AppleDepth-Structs.h>
@class ADLKTOpticalFlow, NSMutableArray;

@interface ADLKTExecutor : NSObject {

	id<MTLDevice> _device;
	ADLKTOpticalFlow* _lkt;
	BOOL _isFirstTime;
	CGSize _inputSize;
	id<MTLCommandQueue> _commandQueue;
	unsigned _currentFrameIndex;
	NSMutableArray* _pyramids[2];
	NSMutableArray* _features[2];
	NSMutableArray* _derivitives[2];

}
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithDescriptor:(id)arg1 forLayout:(unsigned long long)arg2 ;
-(long long)executeWithFrame:(CVBufferRef)arg1 intoOpticalFlowBuffer:(CVBufferRef)arg2 ;
-(CVBufferRef)createPixelBufferForOpticalFlow;
-(long long)executeWithFrame:(CVBufferRef)arg1 createOpticalFlowBuffer:(_CVBuffer*)arg2 ;
@end

