/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PFLContinuedFraction : NSObject
+(double)sampleConditionalBetaWithDimension:(double)arg1 r:(double)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
+(double)logCoeffWithA:(double)arg1 b:(double)arg2 ;
+(double)regularizeIncompletedBetaWithX:(double)arg1 a:(double)arg2 b:(double)arg3 minCDProduct:(double)arg4 ;
+(double)logComplementaryCDFWithX:(double)arg1 r:(double)arg2 d:(double)arg3 minCDProduct:(double)arg4 ;
+(double)valueForCFWithX:(double)arg1 a:(double)arg2 b:(double)arg3 minCDProduct:(double)arg4 ;
+(double)dOfIndex:(unsigned long long)arg1 x:(double)arg2 a:(double)arg3 b:(double)arg4 ;
-(id)init;
@end
