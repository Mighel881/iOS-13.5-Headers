/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@interface MPSNDArrayStridedSliceGradient : MPSNDArrayUnaryGradientKernel
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 ;
@end

