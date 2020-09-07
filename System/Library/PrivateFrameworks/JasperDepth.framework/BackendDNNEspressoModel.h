/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JasperDepth/JasperDepth-Structs.h>
#import <JasperDepth/DNNEspressoModel.h>

@class NSMutableArray;

@interface BackendDNNEspressoModel : DNNEspressoModel {

	NSMutableArray* _outputFeatureVectorDim;
	SCD_Struct_Fr28* _depthInputBlob;
	SCD_Struct_Fr28* _imageInputBlob;
	SCD_Struct_Fr28* _depthMaskIinputBlob;
	SCD_Struct_Fr28* _resultsOutputBlob;

}

@property (assign,nonatomic) SCD_Struct_Fr28* depthInputBlob;                      //@synthesize depthInputBlob=_depthInputBlob - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fr28* imageInputBlob;                      //@synthesize imageInputBlob=_imageInputBlob - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fr28* depthMaskIinputBlob;                 //@synthesize depthMaskIinputBlob=_depthMaskIinputBlob - In the implementation block
@property (assign) SCD_Struct_Fr28* resultsOutputBlob;                             //@synthesize resultsOutputBlob=_resultsOutputBlob - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputFeatureVectorDim;              //@synthesize outputFeatureVectorDim=_outputFeatureVectorDim - In the implementation block
-(BOOL)initializeInputOutputBlobs;
-(SCD_Struct_Fr28*)resultsOutputBlob;
-(void)setResultsOutputBlob:(SCD_Struct_Fr28*)arg1 ;
-(int)processImage:(CVBufferRef)arg1 depthImage:(CVBufferRef)arg2 depthMaskImage:(float*)arg3 result:(float*)arg4 ;
-(int)feedNetwork:(float*)arg1 inputDepthBuffer:(float*)arg2 inputDepthMaskBuffer:(float*)arg3 width:(int)arg4 height:(int)arg5 ;
-(NSMutableArray *)outputFeatureVectorDim;
-(void)setOutputFeatureVectorDim:(NSMutableArray *)arg1 ;
-(SCD_Struct_Fr28*)depthInputBlob;
-(void)setDepthInputBlob:(SCD_Struct_Fr28*)arg1 ;
-(SCD_Struct_Fr28*)imageInputBlob;
-(void)setImageInputBlob:(SCD_Struct_Fr28*)arg1 ;
-(SCD_Struct_Fr28*)depthMaskIinputBlob;
-(void)setDepthMaskIinputBlob:(SCD_Struct_Fr28*)arg1 ;
@end
