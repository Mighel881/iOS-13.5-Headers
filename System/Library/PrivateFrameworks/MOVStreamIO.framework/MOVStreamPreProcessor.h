/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MOVStreamPreProcessor <NSObject>
@required
-(CVBufferRef)processedPixelBufferCopyOf:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2 error:(id*)arg3;
-(const opaqueCMFormatDescriptionRef)formatDescriptionForPixelBuffer:(CVBufferRef)arg1 streamData:(StreamRecordingData*)arg2;
-(const opaqueCMFormatDescriptionRef)trackFormatDescriptionFromStreamData:(StreamRecordingData*)arg1;
-(unsigned)inputPixelFormatFromStreamData:(StreamRecordingData*)arg1;
-(unsigned)encodedPixelFormatFromStreamData:(StreamRecordingData*)arg1;

@end

