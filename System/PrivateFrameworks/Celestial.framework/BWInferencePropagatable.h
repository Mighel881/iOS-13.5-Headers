/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWInferencePropagatable <BWInferenceJobProvider>
@property (nonatomic,readonly) int type; 
@required
-(int)type;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 withExecutionTime:(SCD_Struct_BW2)arg4;

@end

