/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARMattingImageMetaData : NSObject <ARResultData> {

	double _timestamp;
	CVBufferRef _downSampledImageBuffer;
	CVBufferRef _mattingScaleImageBuffer;

}

@property (nonatomic,readonly) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef downSampledImageBuffer;               //@synthesize downSampledImageBuffer=_downSampledImageBuffer - In the implementation block
@property (nonatomic,readonly) CVBufferRef mattingScaleImageBuffer;              //@synthesize mattingScaleImageBuffer=_mattingScaleImageBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 downSampledImageBuffer:(CVBufferRef)arg2 mattingScaleImageBuffer:(CVBufferRef)arg3 ;
-(CVBufferRef)downSampledImageBuffer;
-(CVBufferRef)mattingScaleImageBuffer;
@end
