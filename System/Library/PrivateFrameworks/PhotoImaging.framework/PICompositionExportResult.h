/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageGeometry;

@interface PICompositionExportResult : NSObject {

	NUImageGeometry* _geometry;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                //@synthesize inputSize=_inputSize - In the implementation block
-(SCD_Struct_PI5)inputSize;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

