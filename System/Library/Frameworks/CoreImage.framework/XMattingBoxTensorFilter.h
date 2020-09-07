/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;
#import <CoreImage/CoreImage-Structs.h>
@class MPSImageBox;

@interface XMattingBoxTensorFilter : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	MPSImageBox* _boxfilter;
	unsigned _radius;
	unsigned _depthRadius;
	BOOL _supportsReadWriteTextures;
	id<MTLTexture> _tmpTexture;
	id<MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
	id<MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;

}
+(id)supportedPixelFormats;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(int)allocateResources:(PseudoRand)arg1 ;
-(void)releaseResources;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(int)encodeOnCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
@end
