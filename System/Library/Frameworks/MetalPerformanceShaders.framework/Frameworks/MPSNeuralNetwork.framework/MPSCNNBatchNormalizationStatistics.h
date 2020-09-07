/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 ;
-(BOOL)appendBatchBarrier;
@end
